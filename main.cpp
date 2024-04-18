#include <iostream>

using namespace std;

int main()
{
string gender, car, bodyType;
    double salary;

    cout << "Enter your gender: ";
    cin >> gender;

    if (gender == "male") {
        cout << "How much is your salary? ";
        cin >> salary;

        cout << "What car do you drive? ";
        cin >> car;

        if (salary >= 7000 && car == "Mercedes Benz") {
            cout << "You are what every girl with a cheap mindset yearns for." << endl;
            cout << "Work on yourself, these girls don't want such nonsense!" << endl;
        } else {
            cout << "You have potential! Keep working hard." << endl;
        }
    } else if (gender == "female") {
        cout << "Enter your body type: ";
        cin >> bodyType;
 if (bodyType == "curves") {
            cout << "You are every man's type." << endl;
        } else {
            cout << "My sister, you have nothing to offer." << endl;
        }
    } else {
        cout << "Invalid gender input." << endl;
    }


    }
    return 0;
}
