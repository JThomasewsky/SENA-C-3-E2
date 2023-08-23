#include <iostream>
#include <cstdlib>
#include <cmath>

class Calculator {
public:
    Calculator();
    Calculator(int num1, int num2);
    Calculator(double num1, double num2);
    Calculator(const char* num1, const char* num2);
    
    int add();
    double add();
    
    int subtract();
    double subtract();
    
    int multiply();
    double multiply();
    
    int divide();
    double divide();
    
    int power();
    double power();
    
    ~Calculator();

private:
    int intNum1, intNum2;
    double doubleNum1, doubleNum2;
};

Calculator::Calculator() {}

Calculator::Calculator(int num1, int num2) {
    intNum1 = num1;
    intNum2 = num2;
}

Calculator::Calculator(double num1, double num2) {
    doubleNum1 = num1;
    doubleNum2 = num2;
}

Calculator::Calculator(const char* num1, const char* num2) {
    intNum1 = std::atoi(num1);
    intNum2 = std::atoi(num2);
}

int Calculator::add() {
    return intNum1 + intNum2;
}

double Calculator::add() {
    return doubleNum1 + doubleNum2;
}

int Calculator::subtract() {
    return intNum1 - intNum2;
}

double Calculator::subtract() {
    return doubleNum1 - doubleNum2;
}

int Calculator::multiply() {
    return intNum1 * intNum2;
}

double Calculator::multiply() {
    return doubleNum1 * doubleNum2;
}

int Calculator::divide() {
    if (intNum2 != 0) {
        return intNum1 / intNum2;
    }
    return 0;
}

double Calculator::divide() {
    if (doubleNum2 != 0.0) {
        return doubleNum1 / doubleNum2;
    }
    return 0.0;
}

int Calculator::power() {
    return std::pow(intNum1, intNum2);
}

double Calculator::power() {
    return std::pow(doubleNum1, doubleNum2);
}

Calculator::~Calculator() {}

int main() {
    Calculator intCalc(5, 3);
    Calculator doubleCalc(2.5, 1.5);
    Calculator charCalc("7", "2");
    
    std::cout << "Sum of integers: " << intCalc.add() << std::endl;
    std::cout << "Sum of doubles: " << doubleCalc.add() << std::endl;
    std::cout << "Sum of chars: " << charCalc.add() << std::endl;
    
    // Perform other operations and tests
    
    return 0;
}

