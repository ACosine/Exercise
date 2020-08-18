#include<stdio.h>

int main()
{
    // const char *p = "Hello!" ;
    // printf("%c\n", *p) ;

    int a=10;
    a += a *= a -= a/3;
    printf("a=%d\n",a);


    return 0;
}
