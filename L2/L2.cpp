#include <iostream>
#include <cmath>

using namespace std;

/**
 * @brief вычисление объема куба
 * @param a длина ребра
 * @return объем куба
*/
int getVolume(int a) {
    return pow(a, 3);
}

/**
 * @brief вычисление площади поверхности куба
 * @param a длина ребра
 * @return площадь поверхности куба
*/
int getSurfaceArea(int a) {
    return 6 * pow(a, 2);
}

/**
 * @brief задание номер 2. выводит сумму в нужном формате.
 * @param cost сумма в копейках
*/
void getCost(int cost) {
    int rubles = cost / 100;
    int kopecks = cost % 100;
    cout << rubles << "руб " << kopecks / 10 * 10 << "коп\n";
}


int main() {
    setlocale(LC_ALL, "ru");
    int a;
    cout << "Введите длину куба: ";
    cin >> a;
    cout << "Объем куба = " << getVolume(a) << " , если a = " << a << "\n";
    cout << "Площадь поверхности = " << getSurfaceArea(a) << " , если a = "<< a << "\n";
    int cost;
    cout << "Введите сумму в копейках: ";
    cin >> cost;
    getCost(cost);
}

