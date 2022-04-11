
#include <iostream>

#include "Tank.h"
#include "MyTools.h"
#include "Bomb.h"

using namespace std;
using namespace MyTools;

bool Tank::isInside(double x1, double x2) const
{
	const double XBeg = x + 2;
	const double XEnd = x + width - 1;

	if (x1 < XBeg && x2 > XEnd)
	{
		return true;
	}

	if (x1 > XBeg && x1 < XEnd)
	{
		return true;
	}

	if (x2 > XBeg && x2 < XEnd)
	{
		return true;
	}

	return false;
}

void Tank::Draw() const
{
	MyTools::SetColor(CC_Brown);
	GotoXY(x, y - 3);
	cout << "    #####";
	GotoXY(x-2, y - 2);
	cout << "#######   #";
	GotoXY(x, y - 1);
	cout << "    #####";
	GotoXY(x,y);
	cout << " ###########";
}

bool Tank::HandleInsideCheck(Bomb* pbomb) {
	const double size = pbomb->GetWidth();
	const double size_2 = size / 2;
	const double x1 = pbomb->GetX() - size_2;
	const double x2 = x1 + size;
	return (isInside(x1, x2));
}
