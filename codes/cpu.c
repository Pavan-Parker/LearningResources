#include<stdio.h> // for system Calls, here for PID info
#include<stdlib.h> //
#include<sys/time.h>
#include "common.h"

int main(int argc,char *argv[])
{
    if(argc!=2)
    {
        fprintf(stderr,"usage: cpu <string>\n");
    }
    
    char *str=argv[1];

    while (1)
    {
        printf("%s\n",str);
        Spin(1);
    }
    
}