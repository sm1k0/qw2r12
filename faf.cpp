#include <bits/stdc++.h>
using namespace std;
int main() {
    int choice;
    double num1, num2, result;
    int fact = 1;
    while (true) {
        cout << "Выберите операцию:\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Частное\n";
        cout << "4. Произведение\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Нахождение квадратного корня\n";
        cout << "7. Нахождение 1 процента от числа\n";
        cout << "8. Найти факториал числа\n";
        cout << "9. Выйти из программы\n";
        
        cin >> choice;
        
        if (choice == 9) {
            break;
        }
        
        switch (choice) {
            case 1:
                cout << "Введите два числа: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                break;
            case 2:
                cout << "Введите два числа: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                break;
            case 3:
                cout << "Введите два числа: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    cout << "Ошибка: деление на ноль\n";
                    continue;
                }
                break;
            case 4:
                cout << "Введите два числа: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                break;
            case 5:
                cout << "Введите основание и показатель степени: ";
                cin >> num1 >> num2;
                result = pow(num1, num2);
                break;
            case 6:
                cout << "Введите число: ";
                cin >> num1;
                if (num1 >= 0) {
                    result = sqrt(num1);
                } else {
                    std::cout << "Ошибка: невозможно извлечь квадратный корень из отрицательного числа\n";
                    continue;
                }
                break;
            case 7:
                cout << "Введите число: ";
                std::cin >> num1;
                result = num1 * 0.01;
                break;
            case 8:
                
                cout << "Введите число: ";
                cin >> num1;
                for (int i = 1; i <= num1; i++) {
                    fact *= i;
                }
                result = fact;
                break;
            default:
                std::cout << "Неверный выбор операции\n";
                continue;
        }
        
        cout << "Результат: " << result << "\n";
    }
    
    return 0;
}
