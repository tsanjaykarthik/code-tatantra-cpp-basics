#include <iostream>
using namespace std;
int main(){
    int a=42, b=45, c;
    //c=a;
    //a=b;
    //b=c;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a <<' '<< b << endl;
    return 0;
}