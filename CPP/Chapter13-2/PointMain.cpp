#include "PointTemplate.h"
#include "PointTemplate.cpp"	// ������ϸ� include ������� ����
								// �������� ���ϴ����� �̷������, ������Ͽ��� ���ø�Ŭ������ ���������� ���⶧���� �߰��ʿ�
#include <iostream>

using namespace std;

int main(void)
{
	Point<int> pos1(1, 2);

	pos1.ShowPos();

	return 0;
}