/*Даны три различных целых числа. Определить, какое из них
(первое, второе или третье):
а) самое большое;
б) самое маленькое;
в) является средним (средним назовем число, которое больше наимень-
шего из данных чисел, но меньше наибольшего).*/

#include <iostream>
using namespace std;

main() {
    int a, b, c;
    a = b = c = 0;
    cout << "Введите число а: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;
    cout << "Введите число c: ";
    cin >> c;
    int min, max, mid;
    min = max = mid = 0;
    if (a >= b) {
        if (c >= a) {
            min = b;
            max = c;
            mid = a;
        }
        else if (b > c) {
            min = c;
            max = a;
            mid = b;
        }
        else if (c >= b) {
            min = b;
            max = a;
            mid = c;
        }
        
    }
    else if (b > a) {
        if (a > c) {
            max = b;
            min = c;
            mid = a;
        }
        else if (c >= b) {
            max = c;
            min = a;
            mid = b;
        }
        else if (c >= a) {
            max = b;
            min = a;
            mid = c;
        }
    }
    cout << "Самое большое число: " << max
         << "\n Среднее число: " << mid
         << "\n Самое маленькое число: " << min;
    return 0;
}
