#include<iostream>
#include<string>

using namespace std;

#include "Gui.h"
#include "CComplexNumber.h"

void Gui::application()
{
	CComplexNumber c, c1(3, 4);

	cout << "c = " << c.to_string() << endl << "c1 = " << c1.to_string();
	cout << "c: b =" << c.get_b;

}
