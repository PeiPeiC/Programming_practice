#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int num,i;
  struct student{ /*定義結構student*/
  	char name[10];
  	int score;
  } *ptr;   /*宣告指向結構student的指標ptr*/

  printf("Number of student: ");
  scanf("%d",&num);

  /*配置num個可存放結構student的記憶空間*/
  ptr=(struct student *)malloc(num*sizeof(struct student));

  for(i=0;i<num;i++){
  	fflush(stdin);  //清空緩衝區的內容
	printf("name for student %d: ",i+1);
	gets((ptr+i)->name); //將鍵入的字串寫入name成員
	printf("score for student %d: ",i+1);
	scanf("%d",&(ptr+i)->score);
  }

  for(i=0;i<num;i++){
  	printf("%s : score=%d\n",(ptr+i)->name,(ptr+i)->score);
  }

  free(ptr);

  system("PAUSE");
  return 0;
}
