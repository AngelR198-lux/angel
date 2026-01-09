#include <iostream>

int main() {
    double num1, num2;
    char op;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> num1;

    std::cout << "Ingrese el operador (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> num2;

    double result;

    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                std::cout << "Error: Division por cero." << std::endl;
                return 1;
            }
            break;
        default:
            std::cout << "Operador invalido." << std::endl;
            return 1;
    }

    std::cout << "Resultado: " << result << std::endl;

    return 0;
}
