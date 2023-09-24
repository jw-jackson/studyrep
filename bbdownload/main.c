#include <stdio.h>
#include "login.h"
#include "video.h"
#ifdef DEBUG
#define DPRINTF(format,...) \
do {printf("%s::%s "format, __FILE__,__FUNCTION__,##__VA_ARGS__);} while(0)
#else
#define DPRINTF
#endif







int main(int argc, char* argv[])
{
     
    //LoginByQRCode();

    
    //getVideoBasicInfo("BV11Z4y1N7p4");
    //ConvertBvidToCid("BV16F411B7Ek");


    //GetStreamUrl("479169616");
    //
    char *paramlist = NULL;
    paramlist = AddParam(paramlist, "name", "jackson");
    paramlist = AddParam(paramlist, "age", "18");
    printf("%s\n", paramlist);
    return 0;
}
