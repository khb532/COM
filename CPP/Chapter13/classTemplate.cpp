#include <iostream>
using namespace std;

template<typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0);	// ����Ʈ�� ���ο���
	void ShowPos() const;
	T SimpleFunc(T& ref);	// �ܺο� ����
};

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y)
{
	// �����ڸ� �ܺο� �����Ҷ���, �ܺ� �ڵ忡�� �̴ϼȶ����� ����.
	// ����Ʈ�� �����ڵ忡�� ����.
}

template <typename T>
void Point<T>::ShowPos() const
{
	cout << "[" << xpos << ',' << ypos << "]" << endl;
}

template<typename T>		// ����Լ��� �ܺο� �����Ҷ�, �� template<typename T> ����
T Point<T>::SimpleFunc(T& ref)
{
	return ref;
}

int main(void)
{
	Point<int> pos1(3, 4);
	Point<float> pos2(3.4, 1.2);
	Point<char> pos3('A', 'B');
	pos1.ShowPos();
	pos2.ShowPos();
	pos3.ShowPos();

	return 0;
}