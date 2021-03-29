#include <stdio.h>
int main(int argc, char const *argv[])
{
    #ifdef HELLO
        printf("hello");
    #else
        printf("hello123");
    #endif    
    
    return 0;
}
