#include <iostream>
using namespace std;
int SumAB(int a, int b) {
    if (a > b) {
        return 0; 
    }
    return a + SumAB(a + 1, b);
}
int main() {
    int a, b;
    cout << "Введите a: \n";
    cin >> a;
    cout << "Введите b: \n";
    cin >> b;
    if (a > b) {
        cout << "a должна быть болже или ровно b";
        return 1; 
    }
    int res = SumAB(a, b);
    cout << "Сумма: " << a << " до " << b << " = " << res << endl;
    return 0;
}