#include <iostream>

int main() {
    int movakod;
    std::cout << "Enter the number: ";
    std::cin >> movakod;
    std::string mova;
    switch (movakod) {
    case 1:
        mova = "Один/one";
        break;
    case 2:
        mova = "Два/two";
        break;
    case 3:
        mova = "Три/three";
        break;
    case 4:
        mova = "Чотири/four";
        break;
    case 5:
        mova = "П'ять/five";
        break;

    default:
        mova = "Unknown number";
        break;
    }
    std::cout << "Teacher: " << mova << std::endl;

    return 0;
}