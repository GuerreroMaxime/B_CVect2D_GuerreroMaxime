#include "point.h"



point::~point()
{
}




//avec fct membre
point point::operator+(point a) const
{
	point p;
	p.x = x + a.x;
	p.y = y + a.y;
	return p;
}

point point::operator/(point a) const
{
	point p;
	p.x = x / a.x;
	p.y = y / a.y;

	return p;
}

point point::operator*(point a) const
{
	point p;
	p.x = x * a.x;
	p.y = y * a.y;

	return p;
}

bool point::operator==(point a) const
{
	if (x == a.x && y == a.y)
		return true;
	else
		return false;
}

bool point::operator!=(point a) const
{
	if (x != a.x || y != a.y)
		return true;
	else
		return false;
}


//Surcharge operateurs Avec référence
point point::operator+(point &a) const
{
	point p;
	p.x = x + a.x;
	p.y = y + a.y;
	return p;
}

point point::operator/(point &a) const
{
	point p;
	p.x = x / a.x;
	p.y = y / a.y;

	return p;
}

point point::operator*(point &a) const
{
	point p;
	p.x = x * a.x;
	p.y = y * a.y;

	return p;
}

bool point::operator==(point &a) const
{
	if (x == a.x && y == a.y)
		return true;
	else
		return false;
}

bool point::operator!=(point &a) const
{
	if (x != a.x || y != a.y)
		return true;
	else
		return false;
}




//

point point::operator+=(const point &a)
{
	this->x += a.x;
	this->y += a.y;

	return *this;

}


//Proto sans paramètre
point point::operator++()//notation préfixée
{
	x++;
	y++;
	return *this;
}

//Proto avec paramètre
point point::operator++(int a)//notation postfixée
{
	point p = *this;
	x++;
	y++;
	return p;
}

point  point::operator=(const point & p)
{
	this->x = p.x;
	this->y = p.y;

	return *this;

}





ostream & operator<<(ostream & os, const point & mp)
{
	// TODO: insert return statement here

	cout << "Val en x,y,z" << endl;

	os << mp.x << " " << mp.y << endl;

	return os;
}

istream & operator>>(istream & is, point & mp)
{
	// TODO: insert return statement here

	cout << "saisi de x" << endl;
	is >> mp.x;
	cout << "saisi de y" << endl;
	is >> mp.y;

	return is;
}
