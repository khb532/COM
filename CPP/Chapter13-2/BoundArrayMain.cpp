#include <iostream>
#include "ArrayTemplate.h"
#include "Point.h"

using namespace std;

int main(void)
{
	BoundCheckArray<int> iarr(5);

	for (int i = 0; i < iarr.GetArrlen(); i++)
	{
		iarr[i] = (i + 1) * 11;
	}

	for (int i = 0; i < iarr.GetArrlen(); i++)
	{
		cout << iarr[i] << endl;
	}

	cout << "=============" << endl << endl;


	BoundCheckArray<Point> parr(5);

	for (int i = 0; i < parr.GetArrlen(); i++)
	{
		parr[i] = Point((i + 1), (i + 1) * 10);
	}

	for (int i = 0; i < parr.GetArrlen(); i++)
		cout << parr[i];

	cout << "=============" << endl << endl;


	typedef Point* POINT_PTR;

	BoundCheckArray<POINT_PTR> ptrarr(3);
	for (int i = 0; i < ptrarr.GetArrlen(); i++)
		ptrarr[i] = new Point(i + 1, (i + 1) * 10);

	for (int i = 0; i < ptrarr.GetArrlen(); i++)
		cout << *(ptrarr[i]);

	for (int i = 0; i < ptrarr.GetArrlen(); i++)
		delete ptrarr[i];

	return 0;
}