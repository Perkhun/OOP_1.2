#include <iostream>
#include"Vector.h"
using namespace std;

int main()
{
	
	Vector obj;

	obj.Read();
	//obj.Init(10);
		for (size_t i = 0; i < 10; i++)
		{
			obj.setVecElem(i, rand() % 20);
		}

	obj.Display();	
	obj.SortHight();
	obj.Display();
	obj.SortLow();
	obj.Display();
	obj.Free();

	return 0;
}