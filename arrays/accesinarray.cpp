#include <iostream>
using namespace std;

int main(){
    //int rows, cols;
    /*cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;*/

    int matrix[3][3];
    cout << "Enter the elements row wise:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "The entered matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int n;
    cout << "enter the number to be searched : ";
    cin >> n; 
    bool found = false;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(matrix[i][j] == n){
                cout << "Found";
                found = true;
                break;
            }
        }
    }
    if (!found) {
        cout << "Invalid input" << endl;
    }
    return 0;
}
