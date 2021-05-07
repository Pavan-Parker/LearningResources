#include<stdio.h>
#include<unistd.h> //for system calls like pid control, fork , pipe, I/O operations
#include<assert.h>
#include<fcntl.h> //file control options
#include<sys/types.h> // header file contains declarations for the types used by system-level calls to obtain file status or time information.
#include<sys/stat.h>
int main(int argc,char *argv[])
{
    int fd=open("/tmp/file",O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
    assert(fd>-1);
    int rc=write(fd,"hello world\n",13);
    assert(rc==13);
    close(fd);
    return 0;

}