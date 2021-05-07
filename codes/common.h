/*Include guards to avoid double file inclusion during traslation of preprocessors*/
#ifndef __common_h__
#define __common_h__

#include<sys/time.h> //to monitor time to sleep
#include<sys/stat.h>
#include<assert.h> //assertion

double GetTime()
{
    struct timeval t;
    int rc=gettimeofday(&t,NULL);
    

    
}



#endif
