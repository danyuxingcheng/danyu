#include<stdio.h>
int main()
{
    int i=1,sum;
   scanf("%d\n",&sum);
     do 
      {
        sum+=i;
        i++;
      }
      while(i<=100);
    printf("他们的和是%d\n",sum);
    return 0;
}

