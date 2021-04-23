#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
        pid_t p;
        p=fork();
        printf("%d\n",getpid());
        printf("%d\n",getppid());
}


