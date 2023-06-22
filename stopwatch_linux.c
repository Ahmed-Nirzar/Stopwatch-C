#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i,j,k,hour,min,sec;

    if(argc>4){
        printf("Usage: <hours> <minutes> <seconds>");
        exit(1);
    }

    hour = atoi(argv[1]);
    min = atoi(argv[2]);
    sec = atoi(argv[3]);

    if((hour < 1 && min < 1 && sec < 1) || hour < 0 || min < 0 || sec < 0){
        printf("<Give a reasonable numerical value>");
        exit(1);
    }

    printf("\n\n^^^^^^ Stopwatch ^^^^^^\n\n");

    
        for(i=hour;i>-1;i--)
        for(j=min;j>-1;j--) 
        {
            for(k=sec;k>-1;k--) 
            {
                {
                    printf("      %.2d : %.2d : %.2d\r",i,j,k);
                    fflush(stdout);
                    sleep(1);
                }
                
                 sec = 59;

            }

            min = 59;

        }

    printf("\n\n^^^^^^^^^ END ^^^^^^^^^\n\n");

    return 0;

}
