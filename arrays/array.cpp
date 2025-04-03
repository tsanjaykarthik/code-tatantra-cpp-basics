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

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " ";
    }

    int a;
    cout <<  "select an index value";
    cin >> a;
    cout << arr[a] << " ";
    return 0;
}
