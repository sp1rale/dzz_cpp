#include <iostream>

using namespace std;

struct Complex {
    double real;
    double imaginary;
};

Complex addComplex(const Complex& num1, const Complex& num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

Complex subtractComplex(const Complex& num1, const Complex& num2) {
    Complex result;
    result.real = num1.real - num2.real;
    result.imaginary = num1.imaginary - num2.imaginary;
    return result;
}

Complex multiplyComplex(const Complex& num1, const Complex& num2) {
    Complex result;
    result.real = num1.real * num2.real - num1.imaginary * num2.imaginary;
    result.imaginary = num1.real * num2.imaginary + num1.imaginary * num2.real;
    return result;
}

Complex divideComplex(const Complex& num1, const Complex& num2) {
    Complex result;
    double denominator = num2.real * num2.real + num2.imaginary * num2.imaginary;
    result.real = (num1.real * num2.real + num1.imaginary * num2.imaginary) / denominator;
    result.imaginary = (num1.imaginary * num2.real - num1.real * num2.imaginary) / denominator;
    return result;
}