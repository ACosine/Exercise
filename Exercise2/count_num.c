#include<stdio.h>
#include<string.h>
int main(int argc,const char* argv[])
{
    char c;
    int max=0,i=0;
    int chr[256];
    unsigned char string [1024];

    memset(chr,0,sizeof(chr));
    memset(string,0,sizeof(string));
    
    printf("请输入需要统计的字符串\n");
    scanf("%s",string);
    
    for(i=0;i<strlen(string);++i)
    {
        chr[string[i]]+=1;

        if(i==0)
        {
            max=1;
            c=string[i];
        }
        if(max>chr[string[i]])
            continue;

        
        c=string[i];
        max=chr[c];
    }
    printf("max:%d,char:%c\n",max,c);
    return 0;
}
