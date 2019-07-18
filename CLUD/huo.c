#include <stdio.h>
int main()
{
    int flag=1;
    int count=0;
    int i;
    int sum=0;
   while(flag)
    {
      scanf("%d",&i);
      sum+=i;
      if(0==i) break;
      count++;
    }
int psum;
    psum=sum/count;
printf("%d\n",psum);


    return 0;
}
