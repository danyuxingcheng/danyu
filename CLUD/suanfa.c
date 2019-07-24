#include <stdio.h>
int main()
{
    int i;
    float num=1;
    for(i=1;i<=65;i++){
        num=num*2;
    }
    float mj;
    mj=num/142000000;
    printf("摆满棋盘需要%f粒麦子\n",num-1);
    printf("摆满棋盘需要%f立方米的麦子\n",mj);
    return 0;
}
