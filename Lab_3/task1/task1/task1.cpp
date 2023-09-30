#include <iostream>

using namespace std;

int main() {
    int N;

    cout << "Введіть трьохзначне додатнє число N: ";
    cin >> N;


    if (N < 100 || N > 999) {
        cout << "Введене число не є трьохзначним додатнім числом." << endl;
        return 1;
    }


    int hundreds = N / 100;
    int tens = (N / 10) % 10;
    int ones = N % 10;


    int product = 1;
    if (hundreds % 2 != 0) {
        product *= hundreds;
    }
    if (tens % 2 != 0) {
        product *= tens;
    }
    if (ones % 2 != 0) {
        product *= ones;
    }

    cout << "Добуток непарних цифр в числі " << N << " дорівнює " << product << endl;

    return 0;
}