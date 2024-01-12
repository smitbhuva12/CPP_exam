#include <iostream>
#include <stdexcept>

class Calculator {
public:
    double add(double a, double b) { return a + b; }
    double subtract(double a, double b) { return a - b; }
    double multiply(double a, double b) { return a * b; }

    double divide(double a, double b) {
        if (b == 0) {
            throw std::runtime_error("Division by zero is not allowed.");
        }
        return a / b;
    }
};

int main() {
    Calculator calc;

    try {
        std::cout << "Addition: " << calc.add(5.0, 3.0) << "\n";
        std::cout << "Subtraction: " << calc.subtract(8.0, 3.0) << "\n";
        std::cout << "Multiplication: " << calc.multiply(4.0, 3.0) << "\n";
        std::cout << "Division: " << calc.divide(10.0, 2.0) << "\n";
        std::cout << "Division by zero: " << calc.divide(10.0, 0.0) << "\n"; // This won't be executed
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << "\n";
    }

    return 0;
}

