
#include<stdio.h>

void main()
{
    int i=0,a=1;
    while(i < 10){
        a++;
        printf("a=%d\n",a);
        printf("a=%d\n",a);
        if(i < 1) continue;
        if(i == 5) break;
        i++;

    }

}
