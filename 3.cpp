#include <iostream>
using namespace std;
void Star(int n, char star) {
    if (n <= 0) {
        return; 
    }
    cout << "*"; 
    Star(n - 1, star); 
}
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    char star = '*';
    cout << "Введите количество звездочек: ";
    cin >> n;
    cout << "Результат: \n";
    Star(n, star);
    cout << endl;
    return 0;
}