#include<unistd.h>
#include<stdio.h>

int main()
{
    printf("---begin---\n");
    printf("i am execl\n");

    execl("/usr/bin/ls","ls","-a",NULL); //进程程序替换
    
    printf("---end---\n");

    return 0;
}

