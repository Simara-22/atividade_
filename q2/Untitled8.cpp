#include <iostream>
#include <string>
using namespace std;

bool palindromo(string palavra, int inicio, int fim) {
    if (inicio >= fim) {
        return true;
    }

    if (palavra[inicio] != palavra[fim]) {
        return false;
    }

    return palindromo(palavra, inicio + 1, fim - 1);
}

int main() {
    string palavra = "arara";

    if (palindromo(palavra, 0, palavra.length() - 1)) {
        cout << "E palindromo";
    } else {
        cout << "Nao e palindromo";
    }

    return 0;
}