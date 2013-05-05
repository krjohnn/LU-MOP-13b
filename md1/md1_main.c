#include <stdio.h>
#include <stdlib.h>
#include "md1.h"

int main(int argc, char *argv[])
{
    if(argc < 2){
        printf("Please input a value!\n");
        return -1;
    }else{
        int a = atoi(argv[1]);
        printf("%d\n", asum(a));
        return 0;
    }
}
