#include <iostream>

using namespace std;

void Divide(int n1, int n2)
{
	if (n2 == 0)
		throw n2;
	cout << "나머지의 몫 : " << n1 / n2 << endl;
	cout << "나머지 : " << n1 % n2 << endl;
}

int main(void)
{
	int n1, n2;
	cout << "두 수를 입력 :  ";
	cin >> n1 >> n2;

	try
	{
		Divide(n1, n2);
		cout << "Divide Complete" << endl;
	}
	catch (int expn)
	{
		cout << "제수는 " << expn << "이 될수 없음" << endl;
	}

	return 0;
}