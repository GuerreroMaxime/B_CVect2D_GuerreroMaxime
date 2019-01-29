#pragma once
#include <iostream>

using namespace std;

class point
{
	int x, y;

public:

	~point();
	point(int abs = 0, int ord = 0) { x = abs; y = ord; }  // constructeur 


	void affiche() const
	{
		cout << "coordonnees : " << x << " " << y << "\n";
	}


	//surcharge op + avec fonction membre
	point operator+ (point) const;
	point operator/(point) const;
	point operator *(point)const;
	bool operator ==(point)const;
	bool operator !=(point) const;

	//Surcharge opérateur avec référence
	point operator+ (point&) const;
	point operator/(point&) const;
	point operator *(point&)const;
	bool operator ==(point&)const;
	bool operator !=(point&) const;



	point operator +=(const point&);



	point  operator ++ ();         // notation préfixée
	point  operator ++ (int n);    // notation postfixée


	point operator=(const point &p);





	friend ostream& operator<<(ostream& os, const point& mp);//surcharge cout

	friend istream& operator >> (istream& is, point& mp);//surcharge cin


};
