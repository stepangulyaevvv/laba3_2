#include <iostream>
#include <clocale>

using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	int first;
	int second;
	cout << "Введите первое число: ";
	cin >> first;
	cout << "Введите второе число: ";
	cin >> second;
	if (first > second) {
		cout << "2";
	}
	else {
		cout << "1";
	}
}