#include<stdio.h>
#include<unistd.h>
int main()
{
    char * argv[10];
    argv[0] = "ls";
    argv[1] = "-l";
    argv[2] = "..";
    argv[3] = NULL;
	
	char * envp[10];
	envp[0] = "PATH=/usr/bin";
	envp[1] = NULL;

	execve("/usr/bin/ls",argv,envp); //进程程序替换

    return 0;
}
