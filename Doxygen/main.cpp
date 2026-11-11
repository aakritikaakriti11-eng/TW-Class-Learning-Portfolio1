
#include <iostream>
using namespace std;

/**
 * @file main.cpp
 * @brief Demonstration of Doxygen documentation.
 * @author Aakriti
 */

/**
 * @class Calculator
 * @brief Performs basic mathematical operations.
 */
class Calculator {
public:

    /**
     * @brief Adds two numbers.
     * @param a First number.
     * @param b Second number.
     * @return Sum of two numbers.
     */
    int add(int a, int b) {
        return a + b;
    }

    /**
     * @brief Subtracts two numbers.
     * @param a First number.
     * @param b Second number.
     * @return Difference of two numbers.
     */
    int subtract(int a, int b) {
        return a - b;
    }

    /**
     * @brief Multiplies two numbers.
     * @param a First number.
     * @param b Second number.
     * @return Product of two numbers.
     */
    int multiply(int a, int b) {
        return a * b;
    }

    /**
     * @brief Divides two numbers.
     * @param a Numerator.
     * @param b Denominator.
     * @return Quotient of two numbers.
     */
    double divide(double a, double b) {
        if (b == 0) {
            cout << "Division by zero is not allowed." << endl;
            return 0;
        }
        return a / b;
    }
};

/**
 * @brief Main function of the program.
 * @return 0 when program executes successfully.
 */
int main() {
    Calculator c;

    cout << "Addition: " << c.add(10, 5) << endl;
    cout << "Subtraction: " << c.subtract(10, 5) << endl;
    cout << "Multiplication: " << c.multiply(10, 5) << endl;
    cout << "Division: " << c.divide(10, 5) << endl;

    return 0;
}
