#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

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
        //获取退出码
        //   printf("exit code:%d\n",(status>>8)&0xff);
        //获取中止信号
        printf("sigchld code:%d\n",status&0x7f);
        //获取coredump标志位
        printf("coredump code:%d\n",(status>>7)&0x01);
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

        int * p=NULL;
        *p=10;
        //子进程大约执行10s退出
        while(1)
        {
            //         if(count<=0)
            //         {
            //             break;
            //         }
            printf("子进程 pid=[%d] ppid=[%d]\n",getpid(),getppid());
            count--;
            sleep(1);
        }



        //         exit(10);
    }
    return 0;
}
