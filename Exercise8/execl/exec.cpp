#include<stdio.h>
#include<unistd.h>
int main ()
{
    printf("----begin----\n");


    int a=execl("./test", "test","a","b","c","d",NULL);

    printf("a=%d\n",a);
    printf("----end----\n");
    return 0;
}
