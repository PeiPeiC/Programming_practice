#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  int num,i;
  struct student{ /*�w�q���cstudent*/
  	char name[10];
  	int score;
  } *ptr;   /*�ŧi���V���cstudent������ptr*/

  printf("Number of student: ");
  scanf("%d",&num);

  /*�t�mnum�ӥi�s�񵲺cstudent���O�ЪŶ�*/
  ptr=(struct student *)malloc(num*sizeof(struct student));

  for(i=0;i<num;i++){
  	fflush(stdin);  //�M�Žw�İϪ����e
	printf("name for student %d: ",i+1);
	gets((ptr+i)->name); //�N��J���r��g�Jname����
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
