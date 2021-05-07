#include<unistd.h> //for system calls like pid control, fork , pipe, I/O operations
#include<stdio.h> // std in/out
#include<stdlib.h> //collection of methods, mainly of mem allocation and atoi stoi etc
#include "common.h"

int main(int argc, char *argv[])
{
    printf("YEP!\n");
    int *p=malloc(sizeof(int));
    assert(p!=NULL);
    printf("for PID:%d, p is pointing to address:%p\n",getpid(),p);
    *p=0;
    while (1)
    {
        Spin(1);
        printf("for PID:%d, p = %d\n",getpid(),*p);
        *p+=1;
    }
    return 0;
}