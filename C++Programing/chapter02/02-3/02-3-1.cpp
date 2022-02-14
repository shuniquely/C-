#include <iostream>

using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
}Point;

Point& PntAdder(const Point& p1, const Point& p2)
{
	Point* result = new Point;
	result->xpos = p1.xpos + p2.xpos;
	result->ypos = p1.ypos + p2.ypos;

	return *result;
}

int main()
{
	Point* A = new Point;
	A->xpos = 2;
	A->ypos = 3;
	Point* B = new Point;
	B->xpos = 3;
	B->ypos = 2;

	Point &C = PntAdder(*A, *B);

	cout << C.xpos << endl << C.ypos << endl;

	delete A;
	delete B;
	delete &C;
}