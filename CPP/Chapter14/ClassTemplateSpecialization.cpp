#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

template <typename T>
class Point
{
private:
	T xpos, ypos;

public:
	Point(T x = 0, T y = 0) : xpos(x), ypos(y) {}
	void ShowPos(void) const
	{
		cout << "[" << xpos << "," << ypos << "]" << endl;
	}
};

template <typename T>
class SimpleDataWrap
{
private:
	T mData;

public:
	SimpleDataWrap(T data) : mData(data) {}
	void ShowData(void)
	{
		cout << "Data : " << mData << endl;
	}
};

template<>
class SimpleDataWrap<const char*>
{
private:
	char* mData;

public:
	SimpleDataWrap(const char* data)
	{
		mData = new char[strlen(data) + 1];
		strcpy(mData, data);
	}
	void ShowData(void)
	{
		cout << "Data Length : " << strlen(mData) << endl;
		cout << "String : " << mData << endl;
	}
	~SimpleDataWrap()
	{
		delete[] mData;
	}
};

template <>
class SimpleDataWrap<Point<int>>
{
private:
	Point<int> mData;

public:
	SimpleDataWrap(int x, int y) : mData(x,y) { }
	void ShowPos(void)
	{
		mData.ShowPos();
	}
};

int main(void)
{
	SimpleDataWrap<int> iwrap(50);
	//char str[] = "hello";
	SimpleDataWrap<const char*> swrap("Hello_delta");
	SimpleDataWrap<Point<int>> pwrap(2, 3);
	
	iwrap.ShowData();
	swrap.ShowData();
	pwrap.ShowPos();

	return 0;

}

