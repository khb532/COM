#include <iostream>

using namespace std;

int main(void)
{
	int num1, num2;
	cout << "�� ���� �Է� : ";
	cin >> num1 >> num2;
	
	try
	{
		if (num2 == 0)
			throw num2;	// ���� num2�� 0 �̶�� throw�� ����, �̾ catch������ �Ѿ
						// throw���� �ɸ��� �ʴ´ٸ� ������ �ڵ� ������ catch�� �ǳʶ�

		cout << "�������� �� : " << num1 / num2 << endl;
		cout << "������ : " << num1 % num2 << endl;
	}
	catch (int expn)	// expn = num2, throw ���� ���� �����Ϳ� �ڷ����� ��ġ�ؾ���
	{
		cout << "������ " << expn << "�� �� �� �����ϴ�" << endl;
	}
	
	cout << "End of Main" << endl;

	return 0;
}