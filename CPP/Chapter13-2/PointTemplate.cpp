#include <iostream>
#include "PointTemplate.h"

using namespace std;

template <typename T>							// 외부 구현시 꼭 template <typename 또는 class T> 명시
Point<T>::Point(T x, T y) : xpos(x), ypos(y)	// Point<T>:: 먼저, 클래스이름뒤에 <T> 꼭 붙이기
{
	// 클래스 외부에 이니셜라이저, 디폴트는 내부에
}

template <typename T>
void Point<T>::ShowPos(void) const
{
	cout << "[" << xpos << ',' << ypos << "]" << endl;
}

template <typename T>
T Point<T>::SimpleFunc(T ref)
{
	T i = ref;
	return i;
}