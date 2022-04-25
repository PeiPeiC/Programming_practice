#include <stdio.h>
#include <stdlib.h>
void sort(char c, int dynArr[],int arrLen);
void ascending_bubble_sort(int dynArr[],int arrLen);
void descending_bubble_sort(int dynArr[],int arrLen);

int main ()
{

     // �ΨӺ޲z�ʺA�O���骺����
    int *dynArr;
    // ���w�Ŷ��j�p
    int arrLen;
    printf("Please enter the input size N = ");
    scanf("%d",&arrLen);
    // ���o�O����Ŷ�
    dynArr = malloc( arrLen * sizeof(int) );
     if( dynArr == NULL ) {
    // �L�k���o�O����Ŷ�
    fprintf(stderr, "Error: unable to allocate required memory\n");
    return 1;
    }else{

    printf("Please enter the data :");

    // �ϥΰʺA���o���O����Ŷ�
    int i;
    for (i = 0; i < arrLen; ++i) {
    scanf("%d",&dynArr[i]);
    }

    printf("The original array:") ;
    for (i = 0; i < arrLen; ++i) {
    printf("%d ", dynArr[i]);
    }
    printf("\n");
    }
    char c;

    printf("Please enter A or D to decide ascending/descending sort:");
    scanf(" %c",&c);
    sort(c, dynArr,arrLen);
    free(dynArr);// ����O����Ŷ�
return 0;
}

void sort(char c, int dynArr[],int arrLen)
{

    if (c=='A')
        ascending_bubble_sort(dynArr,arrLen);
    if (c=='D')
        descending_bubble_sort(dynArr,arrLen);
}

void ascending_bubble_sort(int dynArr[],int arrLen)
{
    int i, j, tmp;
    for(i = arrLen-1; i > 0; i--)
    {
        for(j = 0; j <= i-1; j++)
        {
            if( dynArr[j] > dynArr[j+1])
            {
                tmp = dynArr[j];
                dynArr[j] = dynArr[j+1];
                dynArr[j+1] = tmp;
            }
        }
    }
    for(i=0;i<arrLen;i++)
    {
        printf("%d ",dynArr[i]);

    }
}

void descending_bubble_sort(int dynArr[],int arrLen)
{
    int i, j, tmp;

    for(i = arrLen-1; i > 0; i--)
    {
        for(j = 0; j <= i-1; j++)
        {
            if( dynArr[j] < dynArr[j+1])
            {
                tmp = dynArr[j];
                dynArr[j] = dynArr[j+1];
                dynArr[j+1] = tmp;
            }
        }
    }
    for(i=0;i<arrLen;i++)
    {
        printf("%d ",dynArr[i]);

    }
}




