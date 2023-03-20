#include <iostream>
#include "ArrayTemplate.h"
#include "PointTemplate.h"

using namespace std;

int main(void)
{
	BoundCheckArray<Point<int>> oarr(3);
	oarr[0] = Point<int>(1, 2);
	oarr[1] = Point<int>(3, 4);
	oarr[2] = Point<int>(5, 6);

	for (int i = 0; i < oarr.GetArrlen(); i++)
		oarr[i].ShowPos();

	typedef Point<int>* POINT_PTR;
	BoundCheckArray<POINT_PTR> poarr(3);
	poarr[0] = new Point<int>(11, 22);
	poarr[1] = new Point<int>(33, 44);
	poarr[2] = new Point<int>(55, 66);

	for (int i = 0; i < poarr.GetArrlen(); i++)
		poarr[i]->ShowPos();
	for (int i = 0; i < poarr.GetArrlen(); i++)
		delete poarr[i];

	return 0;
	
}