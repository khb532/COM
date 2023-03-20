#include <iostream>

using namespace std;

int main(void)
{
	int num1, num2;
	cout << "두 수를 입력 : ";
	cin >> num1 >> num2;
	
	try
	{
		if (num2 == 0)
			throw num2;	// 만약 num2가 0 이라면 throw문 실행, 이어서 catch문으로 넘어감
						// throw문에 걸리지 않는다면 뒤이은 코드 실행후 catch를 건너뜀

		cout << "나눗셈의 몫 : " << num1 / num2 << endl;
		cout << "나머지 : " << num1 % num2 << endl;
	}
	catch (int expn)	// expn = num2, throw 에서 오는 데이터와 자료형이 일치해야함
	{
		cout << "제수는 " << expn << "이 될 수 없습니다" << endl;
	}
	
	cout << "End of Main" << endl;

	return 0;
}