#include <iostream>
#include <string>
using namespace std;

string inverter(string palavra) {
    if (palavra.empty()) {
        return "";
    }

    return inverter(palavra.substr(1)) + palavra[0];
}

int main() {
    cout << inverter("casa");

    return 0;
}