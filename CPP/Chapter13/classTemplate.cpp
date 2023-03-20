#include <iostream>
using namespace std;

template<typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0);	// 디폴트는 내부에만
	void ShowPos() const;
	T SimpleFunc(T& ref);	// 외부에 정의
};

template <typename T>
Point<T>::Point(T x, T y) : xpos(x), ypos(y)
{
	// 생성자를 외부에 정의할때는, 외부 코드에만 이니셜라이저 기재.
	// 디폴트는 내부코드에만 기재.
}

template <typename T>
void Point<T>::ShowPos() const
{
	cout << "[" << xpos << ',' << ypos << "]" << endl;
}

template<typename T>		// 멤버함수를 외부에 정의할때, 꼭 template<typename T> 선언
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