#include <stdio.h>

int main() {
    int A, B, C;
    char S, Q;n

    scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);

    int result;

    if (S == '+')
        result = A + B;
    else if (S == '-')
        result = A - B;
    else if (S == '*')
        result = A * B;

    if (result == C)
        printf("Yes");
    else
        printf("%d", result);

    return 0;
}

