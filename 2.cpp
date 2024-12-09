#include <iostream>
using namespace std;
double StepFinder(double n, int step) {
	if (step == 0) {
		return 1;
	}
	else if (step < 0) {
		return 1 / StepFinder(n, -step); //для отрицательной степени
	}
	else {
		return n * StepFinder(n, step - 1);
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	double n;
	int step;
	cout << "Введите основание: ";
	cin >> n;
	cout << "Введите степень: ";
	cin >> step;
	double result = StepFinder(n, step);
	cout << "Результат: " << result << endl;
	return 0;
}
