#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cout << "Enter a natural number: ";
    cin >> N;

    string numstr = to_string(N);
    reverse(numstr.begin(), numstr.end());

    cout << "Reversed number: " << numstr << endl;

    return 0;
}