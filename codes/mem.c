#include<unistd.h> //for system calls like pid control, fork , pipe, I/O operations
#include<stdio.h> // std in/out
#include<stdlib.h> //collection of methods, mainly of mem allocation and atoi stoi etc
#include "common.h"

int main(int argc, char *argv[])
{
    int *p=malloc(sizeof(int));
    assert(p!=NULL);

    while (1)
    {
        Spin(1);
        printf("for PID:%d, p is pointing to address:%p",getpid(),p);
        *p+=1;
    }
    return 0;
}