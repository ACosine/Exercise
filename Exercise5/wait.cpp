#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
    pid_t pid=fork();
    if(pid<0)
    {
        //失败
        perror("fork:");
        return 0;
    }
    else if(pid>0)
    {
        //父进程
        printf("父进程 pid=[%d] ppid=[%d]\n",getpid(),getppid());
        //父进程等待
        int status;
        wait(&status);
        //子进程退出后父进程执行
        while(1)
        {
            printf("父进程 pid=[%d] ppid=[%d]\n",getpid(),getppid());
            sleep(1);
        }
    }
    else
    {
        //子进程
        int count=10;

        //子进程大约执行20s退出
        while(1)
        {
        //    if(count<=0)
        //    {
        //        break;
        //    }
            printf("子进程 pid=[%d] ppid=[%d]\n",getpid(),getppid());
            count--;
            sleep(1);
        }
    }
    return 0;
}
