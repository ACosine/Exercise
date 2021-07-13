#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("---begin---\n");
    char * argv[10];
    argv[0] = "ls";
    argv[1] = "-l";
    argv[2] = "..";
    argv[3] = NULL;
    execv("/usr/bin/ls",argv);

    printf("---end---\n");

    return 0;
}
