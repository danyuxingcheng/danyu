#include<stdio.h>
int main()
{
    int i=1,sum;
   scanf("%d\n",&sum);
    scanf("just for test\n");
     do 
      {
        sum+=i;
        i++;
      }
      while(i<=100);
    printf("他们的和是%d\n",sum);
    return 0;
}

