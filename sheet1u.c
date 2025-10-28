#include <stdio.h>

int main() {
    double N;
    scanf("%lf", &N);

    int intPart = (int)N;
    double fracPart = N - intPart;

    if (fracPart < 0.0000001 && fracPart > -0.0000001)
        printf("int %d", intPart);
    else
        printf("float %d %.3lf", intPart, fracPart);

    return 0;
}

