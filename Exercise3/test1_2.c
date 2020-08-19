#include<stdio.h>
#include<string.h>
int main()
{
    int a = 5;
    if( a = 0  )
    {
        printf("%d\n", a - 10);

    } 
    else
    {
         printf("%d\n", a++);

    }
    double ** arr[3][4];
    printf("arr的大小=%dByte\n",sizeof(arr));

    printf("---------------------\n");
    printf("---------------------\n");
    int  x =2, z = 2,y = 3;
    if (x > y)
        z = 1;
    else if (x == y)
        z = 0;
    else
        z = -1;
    printf("z==%d\n",z);

    printf("---------------------\n");
    printf("---------------------\n");
    char acHello[] = "hello\0world";
    char acNew[15] = {0};
    strcpy(acNew,acHello);
    printf("strlen(acNew) = %d\n",strlen(acNew) );
    printf("sizeof(acHello) = %d\n",sizeof(acHello) );

    printf("---------------------\n");
    printf("---------------------\n");

    return 0;
}
