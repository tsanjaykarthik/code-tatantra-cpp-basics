#include <iostream>
using namespace std;

int main() {
    int age;
    bool hasID;
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Do you have ID? (1 for Yes, 0 for No): ";
    cin >> hasID;
    
        if (age >= 18) {
        if (hasID) {
            cout << "You are eligible to vote" << endl;
            if (age >= 21) {
                cout << "You are also eligible to rent a car." << endl;
            } else {
                cout << "You are not yet eligible to rent a car." << endl;
            }
        } else {
            cout << "You are of legal age but need ID for verification." << endl;
        }
    } else {
        
        if (age >= 13) {
            cout << "not yet of legal age." << endl;
        } else {
            cout << "child.Please be accompanied by an adult." << endl;
        }
    }
    
    return 0;
}