#include <stdio.h>
#include <stdlib.h>

int apro(int a);

int main(int argc, char *argv[])
{
    if(argc < 2){
        printf("Please input a value!\n");
        return -1;
    }else{
        int a = atoi(argv[1]);
        printf("apro(%d) = %d\n", a, apro(a));
        return 0;
    }
}
