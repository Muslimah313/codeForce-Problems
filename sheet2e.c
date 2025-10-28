#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);

    long long max = 0;
    for (int i = 0; i < N; i++) {
        long long num;
        scanf("%lld", &num);
        if (num > max) max = num;
    }

    printf("%lld\n", max);
    return 0;
}
