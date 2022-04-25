#include <stdio.h>
#include <stdlib.h>
#include <math.h>
static int count=0; /* count變數 用來累加統計總移動次數 */
double compute_3(int n) /* compute_3()函式 回傳n個環的三柱單色河內塔之移動次數*/
{
 return pow(2,n) - 1; /* 𝑓3
(𝑛) = 2
𝑛 −1 */
}
double compute_4(int n) /* compute_4()函式 回傳n個環的四柱單色河內塔之移動次數*/
{
 double alpha;
 alpha=(int)((sqrt(8*n+1)-1)/2); /* 𝛼 = [
√8𝑛+1−1
2
] */
 return (n-0.5*(pow(alpha,2)-alpha+2))*pow(2,alpha)+1; /* (𝑛 −
1
2
(𝛼
2 − 𝛼 + 2)) × 2
𝛼 + 1 */
}
 /* 列出編號n1到n2的環從from柱搬到to柱的三柱單色河內塔之最佳移動順序 */
void tower_3(int n1,int n2,char from,char aux,char to)
{
 if (n1==n2) /* 降階到n1=n2時只剩一個環，可以直接移動，為遞迴的終止條件 */
 {
 printf("ring %d : %c => %c \n",n1,from,to);
 count++;
 return;
 }
 tower_3(n1,n2-1,from,to,aux); /* 遞迴：n2環上方的n1到n2-1環，從from柱搬到aux柱 */
 printf("ring %d : %c => %c \n",n2,from,to); /* n2環直接移動，從from柱搬到to柱 */
 count++;
 tower_3(n1,n2-1,aux,from,to); /* 遞迴：搬到aux柱的n1到n2-1環，從aux柱搬回to柱 */
}
 /* 列出n個環從from柱搬到to柱的四柱單色河內塔之最佳移動順序 */
void tower_4(int n,char from,char aux1,char aux2,char to)
{
 if (n==1) /* 降階到n=1時只剩一個環，可以直接移動，為遞迴的終止條件 */
 {
 printf("ring 1 : %c => %c \n",from,to);
 count++;;
 return;
 }
 if (n==2) /* 降階到n=2時只剩兩個環，可以直接拆成三個移動，為遞迴的終止條件 */
 {
 printf("ring 1 : %c => %c \n",from,aux1);
 printf("ring 2 : %c => %c \n",from,to);
 printf("ring 1 : %c => %c \n",aux1,to);
 count=count+3;
 return;
 }
 if (n==3) /* 降階到n=3時只剩三個環，可以直接拆成五個移動，為遞迴的終止條件 */
 {
 printf("ring 1 : %c => %c \n",from,aux1);
 printf("ring 2 : %c => %c \n",from,aux2);
 printf("ring 3 : %c => %c \n",from,to);
 printf("ring 2 : %c => %c \n",aux2,to);
 printf("ring 1 : %c => %c \n",aux1,to);
 count=count+5;;
 return;
 }
 double sum,min;
 int m=1;
 min=compute_4(1)+compute_3(n-2);
 for (int i=2;i<n-1;i++) /* 找出當𝑓4
(𝑚) + 𝑓3
(𝑛 − 𝑚 − 1)為最小值時的m值 */
 {
 sum=compute_4(i) + compute_3(n-i-1);
 if (sum<min)
 {
 min=sum;
 m=i;
 }
 }
 tower_4(m,from,aux2,to,aux1); /* 將from柱的m個環，使用四柱單色遞迴搬到aux1柱 */
 tower_3(m+1,n-1,from,to,aux2); /* from柱的n-m-1個環，使用三柱單色遞迴搬到aux2柱 */
 printf("ring %d : %c => %c \n",n,from,to); /* 第n環直接移動，從from柱搬到to柱 */
 count++;
 tower_3(m+1,n-1,aux2,from,to); /* 搬到aux2柱的n-m-1個環，使用三柱單色遞迴搬回to柱 */
 tower_4(m,aux1,from,aux2,to); /* 搬到aux1柱的m個環，使用四柱單色遞迴搬回to柱 */
}
int main(void)
{
 int n;
 printf("請輸入四柱單色河內塔A柱中的環個數: ");
 scanf("%d",&n);
 tower_4(n,'A','B','C','D');
 printf("共需%d個移動\n",count);
 system("pause");
 return 0;
}
