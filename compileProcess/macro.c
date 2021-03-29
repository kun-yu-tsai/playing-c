#include <stdio.h>

#define PI 3.1415
#define circleArea(r) (PI*r*r)

#define PRINT(a, b) printf(a, b)
int main(int argc, char const *argv[])
{
    printf("%s", "hello");
    PRINT("%s","good");

    printf("Area = %.2f", circleArea(3));
    return 0;
}
