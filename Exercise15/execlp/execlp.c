#include<unistd.h>
#include<stdio.h>
int main()
{
    printf("---begin---\n");
    execlp("pwd","pwd",NULL);
    return 0;
}
