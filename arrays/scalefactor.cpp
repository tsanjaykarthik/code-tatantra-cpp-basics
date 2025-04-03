#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "enter the number of elemets : ";
    cin >> n;

    vector<int>arr(n);
    cout << "starting capacity : " << arr.capacity() << endl;
    
    cout << "Enter the " << n << "elements : ";
    for(int i=0; i<n ; i++){
        cin >> arr[i];
    }
    cout << "size : " << arr.size() << " , capacity : " << arr.capacity() << endl;

    /*for(int i=0; i<=20; i++){
        arr.push_back(i);
        cout << "size : " << arr.size() << " , capacity : " << arr.capacity() << endl;
    }*/
    return 0;
}
