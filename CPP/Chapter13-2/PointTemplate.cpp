#include <iostream>
#include "PointTemplate.h"

using namespace std;

template <typename T>							// �ܺ� ������ �� template <typename �Ǵ� class T> ���
Point<T>::Point(T x, T y) : xpos(x), ypos(y)	// Point<T>:: ����, Ŭ�����̸��ڿ� <T> �� ���̱�
{
	// Ŭ���� �ܺο� �̴ϼȶ�����, ����Ʈ�� ���ο�
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