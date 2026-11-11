#include <iostream>
using namespace std;

int soma(int n) {
    if (n == 1) {
        return 1;
    }

    return n + soma(n - 1);
}

int main() {
    cout << soma(5);

    return 0;
}