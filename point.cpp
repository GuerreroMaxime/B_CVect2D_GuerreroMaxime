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


//Surcharge operateurs Avec r�f�rence
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


//Proto sans param�tre
point point::operator++()//notation pr�fix�e
{
	x++;
	y++;
	return *this;
}

//Proto avec param�tre
point point::operator++(int a)//notation postfix�e
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
