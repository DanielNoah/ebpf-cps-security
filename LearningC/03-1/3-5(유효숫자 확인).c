#include <stdio.h>
int main(void)
{
    double a = 0.1;
    double sum = 0;
    
    for (int i = 0; i < 10; i++) {
        sum += a;
    }
    if (sum == 1.0) {
        printf("sum is 1.0\n");
    } else {
        printf("sum is not 1.0\n");
    }
    /*
    double dt = 1.23456790123456789;
    printf("float : %.20f\n", ft);
    printf("double : %.20lf\n", dt);
    */
    return 0;
}