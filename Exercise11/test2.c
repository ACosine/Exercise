#include<unistd.h>
#include<stdio.h>

int main()
{
    printf("---begin---\n");
    //进程创建
    pid_t ret = fork();
    if(ret < 0)
    {
        perror("fork error\n");
        return 0;
    }
    else if(ret == 0)
    {
        //子进程
            printf("i amchild pid=[%d] ppid[%d]\n",getpid(),getppid());
            sleep(20);
    }
    else
    {
        //父进程
            printf("i am father pid=[%d] ppid[%d]\n",getpid(),getppid());
            sleep(5);
    }
    return 0;
}
