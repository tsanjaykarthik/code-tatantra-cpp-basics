#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num = 55.9;
    float f = static_cast<float>(num);

    cout << fixed << setprecision(1) << f;

    return 0;
}
