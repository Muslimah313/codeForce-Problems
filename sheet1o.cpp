#include <iostream>
using namespace std;

int main() {
    int A = 0, B = 0;
    char op;


    cin >> A >> op >> B;

    if (op == '+') cout << A + B;
    else if (op == '-') cout << A - B;
    else if (op == '*') cout << A * B;
    else if (op == '/') cout << A / B;

    return 0;
}
