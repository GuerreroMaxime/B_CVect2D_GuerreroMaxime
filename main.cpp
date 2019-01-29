#include <iostream>;
#include <stdlib.h>;
#include "point.h";


int main() {


	point a1(2, 5), a2(2, 5), b, c;
	c = point(a1) + point(a2);



	a1 += a2;
	a1.affiche();


	b = ++a1;
	cout << "a1 : ";
	a1.affiche();   // affiche    a1 : 3 6
	cout << "b  : ";
	b.affiche();    // affiche    b  : 3 6
	b = a2++;
	cout << "a2 : ";
	a2.affiche();   // affiche    a2 : 3 6
	cout << "b  : ";
	b.affiche();    // affiche    b  : 2 5*/


	a1 = b;

	a1.affiche();






	system("pause");


	return 0;
}