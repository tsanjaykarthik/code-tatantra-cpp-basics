#include <iostream>
#include <vector>
using namespace std;

int main() {
    int i;
    cout << "Enter a number from 1 to 4: ";
    cin >> i;

    vector<string> greet = {"hello", "bello", "konichiwa", "vannakam"};

    if (i >= 1 && i <= 4) {
        cout << greet[i - 1] << endl;
    } else {
        cout << "Invalid number" << endl;
    }

    return 0;
}
