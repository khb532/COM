#include <iostream>

using namespace std;

void Divide(int n1, int n2)
{
	if (n2 == 0)
		throw n2;
	cout << "�������� �� : " << n1 / n2 << endl;
	cout << "������ : " << n1 % n2 << endl;
}

int main(void)
{
	int n1, n2;
	cout << "�� ���� �Է� :  ";
	cin >> n1 >> n2;

	try
	{
		Divide(n1, n2);
		cout << "Divide Complete" << endl;
	}
	catch (int expn)
	{
		cout << "������ " << expn << "�� �ɼ� ����" << endl;
	}

	return 0;
}