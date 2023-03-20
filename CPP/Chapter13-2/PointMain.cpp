#include "PointTemplate.h"
#include "PointTemplate.cpp"	// 헤더파일만 include 했을경우 에러
								// 컴파일은 파일단위로 이루어지고, 헤더파일에는 템플릿클래스의 구현정보가 없기때문에 추가필요
#include <iostream>

using namespace std;

int main(void)
{
	Point<int> pos1(1, 2);

	pos1.ShowPos();

	return 0;
}