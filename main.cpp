#include "realHumanBeing.h"

int main(int argc, char** argv) {
	string input = "_";
	int p(0);
	int n(0);

	cout << "Введите p: ";
	cin >> p;

	cout << "Введите n: ";
	cin >> n;

	do {
		cout << "Введите строку: ";
		cin >> input;

		cout << "Хэш строки " << input << " = " << real_string_hash(input, p, n) << endl;
	} while (input != "exit");

	return 0;
}