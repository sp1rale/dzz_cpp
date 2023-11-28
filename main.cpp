#include <iostream>
#include <string>

using namespace std;

struct Car {
    double length;
    double groundClearance;
    double engineVolume;
    double enginePower;
    double wheelDiameter;
    string color;
    string transmissionType;
};

void setCarValues(Car& car) {
    cout << "Enter car details:\n";
    cout << "Length: ";
    cin >> car.length;

    cout << "Ground clearance: ";
    cin >> car.groundClearance;

    cout << "Engine volume: ";
    cin >> car.engineVolume;

    cout << "Engine power: ";
    cin >> car.enginePower;

    cout << "Wheel diameter: ";
    cin >> car.wheelDiameter;

    cout << "Color: ";
    cin.ignore();
    getline(cin, car.color);

    cout << "Transmission type: ";
    cin >> car.transmissionType;
}

void displayCar(const Car& car) {
    cout << "Car details:\n";
    cout << "Length: " << car.length << " meters\n";
    cout << "Ground clearance: " << car.groundClearance << " meters\n";
    cout << "Engine volume: " << car.engineVolume << " cc\n";
    cout << "Engine power: " << car.enginePower << " kW\n";
    cout << "Wheel diameter: " << car.wheelDiameter << " inches\n";
    cout << "Color: " << car.color << "\n";
    cout << "Transmission type: " << car.transmissionType << "\n";
}

void searchCar(const Car& car, double maxEnginePower) {
    if (car.enginePower <= maxEnginePower) {
        cout << "Car details:\n";
        cout << "Length: " << car.length << " meters\n";
        cout << "Ground clearance: " << car.groundClearance << " meters\n";
        cout << "Engine volume: " << car.engineVolume << " cc\n";
        cout << "Engine power: " << car.enginePower << " kW\n";
        cout << "Wheel diameter: " << car.wheelDiameter << " inches\n";
        cout << "Color: " << car.color << "\n";
        cout << "Transmission type: " << car.transmissionType << "\n";
    }
}

int main() {
    Car myCar;

    setCarValues(myCar);
    displayCar(myCar);

    double maxEnginePower;
    cout << "Enter the maximum engine power for the search: ";
    cin >> maxEnginePower;

    searchCar(myCar, maxEnginePower);

    return 0;
}