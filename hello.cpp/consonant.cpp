#include <iostream>
using namespace std;
int main(){
    char choice;
    cout << "Enter a chracter: ";
    cin >> choice;

    switch (tolower(choice)) {
        case 'a':
            cout << "vowel\n";
            break;
        case 'e':
            cout << "vowel\n";
            break;
        case 'i':
            cout << "vowel\n";
            break;
        case 'o':
            cout << "vowel\n";
            break;
        case 'u':
            cout << "vowel\n";
            break;
        default:
            cout << "Consonant\n";
    }

    return 0;
}