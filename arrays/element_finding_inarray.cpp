#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];
    }

    int a;
    cout << "Enter a number to search: ";
    cin >> a;

    bool found = false;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == a) {
            cout << "Found: " << arr[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Invalid input" << endl;
    }

    return 0;
}
