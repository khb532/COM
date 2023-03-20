#include <iostream>

using namespace std;

template <typename T = int, int len = 7>	// template parameter �� ����Ʈ�� ���� ����
class AAA
{
private:
	T arr[len];

public:
	T& operator[] (int idx)
	{
		return arr[idx];
	}
	AAA<T, len>& operator= (const AAA<T, len>& ref)	//��������
	{
		for (int i = 0; i < len; i++)
			arr[i] = ref.arr[i];
		return *this;
	}
};




int main(void)
{
	AAA<> obj;
	for (int i = 0; i < 7; i++)
		obj[i] = i * 10;

	for (int i = 0; i < 7; i++)
		cout << obj[i] << " ";

	return 0;

}