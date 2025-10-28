
#include <stdio.h>

int main() {
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);


    long double left = (long double)A * B;
    long double right = (long double)C * D;

    if (left > right)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
