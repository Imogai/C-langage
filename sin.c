#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#define PI 3.14159265359

int main()
{
    int i = 0;
    for(i = 0; i <= 360; i++) {
        printf("sin%d = %lf\n", i, sin(i * 2 * PI / 360));
    }

    system("pause");
    return 0;
}