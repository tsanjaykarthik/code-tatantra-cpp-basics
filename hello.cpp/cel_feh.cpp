#include <iostream>
using namespace std;
int main(){
    float a,b;
    cout << "enter temp in cel"<<endl;
    cout << "enter temp in far"<<endl;
    cin >> a;
    cin >> b;
    cout << "far" <<' '<< ((a * 9/5) + 32) << endl;
    cout << "cel" <<' '<< ((b - 32) * 5/9) << endl;
    return 0;
}