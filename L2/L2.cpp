#include <iostream>
#include <math.h>

void getCost(int cost) {
    int rubles = cost / 100;
    int kopecks = cost % 100;
    std::cout << rubles << "руб " << kopecks / 10 * 10 << "коп \n";
}

int getVolume(int a) {
    return pow(a, 3);
}

int getSurfaceArea(int a) {
    return 6 * pow(a, 2);
}

int main()
{
    setlocale(LC_ALL, "ru");
    std::cout << "Объем куба, если a = 5  " << getVolume(5) << "\n";
    std::cout << "Площадь поверхности, если a = 5  " << getSurfaceArea(5) << "\n";
}

