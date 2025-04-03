#include <iostream>
using namespace std;
int main(){
    int a,b,sum=0,rem;
    cout << "enter triple digit number";
    cin >> a;
    b=a;
    while(b!=0){
        rem = b%10;
        sum += rem*rem*rem;
        b/=10;
    }
    if(sum==a){
        cout<<"YES";
    }
    else{
        cout<< "NO";
    }
    return 0;
}