#include "Header.h"

int main() {
    Complex num1, num2;

    cout << "Enter the real part of the first complex number: ";
    cin >> num1.real;

    cout << "Enter the imaginary part of the first complex number: ";
    cin >> num1.imaginary;

    cout << "Enter the real part of the second complex number: ";
    cin >> num2.real;

    cout << "Enter the imaginary part of the second complex number: ";
    cin >> num2.imaginary;

    cout << "First complex number: " << num1.real << " + " << num1.imaginary << "i" << endl;
    cout << "Second complex number: " << num2.real << " + " << num2.imaginary << "i" << endl;

    Complex sum = addComplex(num1, num2);
    cout << "Sum: " << sum.real << " + " << sum.imaginary << "i" << endl;

    Complex difference = subtractComplex(num1, num2);
    cout << "Difference: " << difference.real << " + " << difference.imaginary << "i" << endl;

    Complex product = multiplyComplex(num1, num2);
    cout << "Product: " << product.real << " + " << product.imaginary << "i" << endl;

    Complex quotient = divideComplex(num1, num2);
    cout << "Quotient: " << quotient.real << " + " << quotient.imaginary << "i" << endl;

    return 0;
}