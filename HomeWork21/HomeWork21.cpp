#include <iostream>



int main() {
	setlocale(LC_ALL, "Russian");
	int X, Y;
	std::cout << "������� �21\n";
	std::cout << "������� ����� -> ";
	std::cin >> X >> Y;
	int* xp = &X;
	int* yp = &Y;

	int res = (*xp + *yp) / 2;

	std::cout << "������ �������������� = " << res << std::endl;








	return 0;
}