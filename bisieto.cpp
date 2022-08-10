#include <iostream>

int main() {

int year;

std::cout << "Ingrese el año que desa saber si es bisiesto\n";
std::cin >> year;

if((year % 400) == 0 || (year % 4) == 0 && (year % 100) != 0) {
    std::cout << "el año es bisiesto\n";
}
else {
    std::cout << "no lo es\n";
}
}
