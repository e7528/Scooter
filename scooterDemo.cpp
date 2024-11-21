//update 0.0.3

#include <iostream>
using namespace std;

string pickScooter(int choice) {

    string scooter1 = "Kiddie Scooter";
    string scooter2 = "3 Wheel Scooter";
    string scooter3 = "2 Wheel Scooter";


    switch (choice) {
    case 1:
        cout << "You chose the Kiddie Scooter!\n";
        return scooter1;
        break;
    case 2:
        cout << "You chose the 3 Wheel Scooter!\n";
        return scooter2;
        break;
    case 3:
        cout << "You chose the 2 Wheel Scooter!\n";
        return scooter3;
        break;
    default:
        return 0;
    }

}

int main() {

    int scooterPicked;

    cout << "Please enter your choice" << endl;
    cout << "[1] Kiddie Scooter" << endl;
    cout << "[2] 3 Wheel Scooter" << endl;
    cout << "[3] 2 Wheel Scooter" << endl;
    cin >> scooterPicked;
    pickScooter(scooterPicked);


    return 0;
}
