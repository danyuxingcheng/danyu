#include <stdio.h>
int main()
{ 
	int score,sp;
	scanf("%d",&score);
	sp=score/10;
	printf("%d\n",sp);
	switch(sp)
    {
    case 10:
	printf("%s\n","学生的成绩是：S");break; 
    case 9:
	printf("%s\n","学生的成绩是：A");break;
    case 8:
	printf("%s\n","学生的成绩是：B");break;
    case 7:
	printf("%s\n","学生的成绩是：C");break;
    case 6:
	printf("%s\n","学生的成绩是：D");break;
    default:
	printf("%s\n","学生的成绩是：E");break;
    }
  return 0;
} 
