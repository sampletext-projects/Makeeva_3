#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "��������� ������� ���� ��� ���������� ��� - 111\n";
	cout << "��������� ��� �������� ������� ���������\n";

	int n;
	cout << "������� N: ";
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

	cout << "���������� �������: " << correct << "; \n" << "������: ";
	if (correct == 10)
	{
		cout << "�������!\n";
	}
	else if (correct == 9)
	{
		cout << "������!\n";
	}
	else if (correct == 8)
	{
		cout << "�����������������!\n";
	}
	else
	{
		cout << "�������������������!\n";
	}

	system("pause");

	return 0;
}
