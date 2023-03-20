#include <iostream>

using namespace std;

template<typename T1, typename T2>
class AAA
{
public:
	void Func(void)
	{
		cout << "<typename T1, typename T2>" << endl;
		cout << "T1 : " << sizeof(T1) << endl;
		cout << "T2 : " << sizeof(T2) << endl;
		cout << "=====================" << endl << endl;
	}
};

template <>
class AAA <int, double>	// 전체특수화 : 우선순위 제일 높음
{

public:
	void Func(void)
	{
		cout << "<int, double>" << endl;
		cout << "INT : " << sizeof(int) << endl;
		cout << "DOUBLE : " << sizeof(double) << endl;
		cout << "=====================" << endl << endl;
	}
};

template <typename T1>	// typename T1 은 선언
class AAA<T1, double>	// T1, type
{
public:
	void Func(void)
	{
		cout << "<typename T1, double>" << endl;
		cout << "T1 : " << sizeof(T1) << endl;
		cout << "DOUBLE : " << sizeof(double) << endl;
		cout << "=====================" << endl << endl;
	}
};

int main(void)
{
	AAA<char, int> obj1;
	obj1.Func();

	AAA<int, double> obj2;
	obj2.Func();

	AAA<char, double> obj3;
	obj3.Func();


	return 0;
}