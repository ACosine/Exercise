#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t pid = fork();
    if(pid < 0)
    {
        perror("创建失败\n");
        return 0;
    }
    else if(pid == 0)
    {
        //子进程
        int count = 10;
        while(1)
        {
             if(count <= 0)
            {
                  break;
            }
            printf("i am child pid=[%d] ppid=[%d]\n",getpid(),getppid());
            count--;
            sleep(1);
        }       
    }
    else
    {
        //父进程pid > 0
        printf("begin ---> i am father pid=[%d] ppid=[%d]\n",getpid(),getppid());
       
        int status;
        waitpid(pid,&status,WNOHANG); //父进程在等待子进程的退出 

        printf("exit_code : %d\n",(status >> 8) & 0xFF); //获取退出码
        printf("sig_code : %d\n",status & 0x7F); //获取进程终止信号

        //父进程应该在等待，等待子进程退出，退出后才会进入下面这个循环 
        while(1)
        {
            printf("end ---> i am father pid=[%d] ppid=[%d]\n",getpid(),getppid());
            sleep(1);
        }
    }
    return 0;
}

