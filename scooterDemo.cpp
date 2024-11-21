//update 0.0.4 axel

#include <iostream>
using namespace std;

int total = 0;

void pickScooter(int choice) {

    string scooter1 = "Kiddie Scooter";
    string scooter2 = "3 Wheel Scooter";
    string scooter3 = "2 Wheel Scooter";


    switch (choice) {
    case 1:
        cout << "You chose the Kiddie Scooter!\n";
        break;
    case 2:
        cout << "You chose the 3 Wheel Scooter!\n";
        break;
    case 3:
        cout << "You chose the 2 Wheel Scooter!\n";
        break;
    default:
        cout << "Invalid Response!\n";
    }

}

void scooterRate(int choice2) {


    if (choice2 == 1) {

        total = 30;
        cout << "The payment for basic is " << total << endl;
        
    }
    else if (choice2 == 2) {

        total = 50;
        cout << "The payment for advance is " << total << endl;

    }
    else if (choice2 == 3) {

        total = 80;
        cout << "The payment for pro is " << total << endl;

        
    }
    else {
        cout << "Invalid Response!\n";
    }

}

void currencySum(int hours) {

    int result = hours * total;
    cout << result;
    

}

int main() {

    int scooterPicked;
    int PickedRate;
    int hours;

    do {
        cout << endl;
        cout << "Please enter your choice\n";
        cout << "[1] Kiddie Scooter\n";
        cout << "[2] 3 Wheel Scooter\n";
        cout << "[3] 2 Wheel Scooter\n";
        cin >> scooterPicked;
        
        system("cls");

        pickScooter(scooterPicked);

        cout << "Please Choose the hour rate of your scooter\n";
        cout << "[1]Basic 30/hour\n";
        cout << "[2]Advanced 50/hour\n";
        cout << "[3]Pro 80/hour\n";
        cin >> PickedRate;

        system("cls");

        scooterRate(PickedRate);

        cout << "How many hours do you want to rent it?: ";
        cin >> hours;

        currencySum(hours);

    } while (scooterPicked <= 3);

    return 0;
}
