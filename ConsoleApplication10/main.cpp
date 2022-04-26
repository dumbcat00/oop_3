#include "circle.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	double r;
	circle circ1;
	cout << "Введите радиус круга: ";
	cin >> r;

	circ1.setR(r);
	cout << "D = " << circ1.diameter() << endl;
	cout<<"S = "<<circ1.square()<<endl;
	cout<<"l = "<<circ1.circ_length()<<endl;

	return 0;
}


