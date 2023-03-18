#include <iostream>



int main() {
	setlocale(LC_ALL, "Russian");
	int X, Y;
	std::cout << "Задание №21\n";
	std::cout << "Введите числа -> ";
	std::cin >> X >> Y;
	int* xp = &X;
	int* yp = &Y;

	int res = (*xp + *yp) / 2;

	std::cout << "Средне арефметическое = " << res << std::endl;








	return 0;
}