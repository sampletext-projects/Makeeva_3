#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала Гузь Ева Евгеньевна УМЛ - 111\n";
	cout << "Программа для проверки таблицы умножения\n";

	int n;
	cout << "Введите N: ";
	cin >> n;

	int correct = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << n << " * " << (i + 1) << " = ";
		int t;
		cin >> t;
		if (t == n * (i + 1))
		{
			correct++;
		}
	}

	cout << "Правильных ответов: " << correct << "; \n" << "Оценка: ";
	if (correct == 10)
	{
		cout << "Отлично!\n";
	}
	else if (correct == 9)
	{
		cout << "Хорошо!\n";
	}
	else if (correct == 8)
	{
		cout << "Удовлетворительно!\n";
	}
	else
	{
		cout << "Неудовлетворительно!\n";
	}

	system("pause");

	return 0;
}
