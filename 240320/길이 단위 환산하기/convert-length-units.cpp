#include <iostream>
using namespace std; 
int main() {
    // 여기에 코드를 작성해주세요.
    double a; 
    double b;
    cin >> a;
    b = a*30.48;
    cout << fixed;
    cout.precision(1);
    cout << b;
    return 0;
}