#include "SpecialCounter.h"
#include<string>
#include <iostream>
using namespace std;

int main(){

	int option,startnum,endnum,stepsize;
	int end;
	cout << " Choose from the following options : 1 to Count Up\n   2 to Count Down \n Enter Option:";
	cin >> option;
	cout << "Enter start number" << endl;
	cin >> startnum;
	cout << "Enter end number " << endl;
	cin >> endnum;
	cout << "enter step size" << endl;
	cin >> stepsize;
	cout << endl;

	cout << "Counter start:" << endl;
	end = (int)(endnum / stepsize);
	SpecialCounter c(startnum, endnum, 0, stepsize);
	if (option == 1)
	{
		for (int i = 0; i < end; i++)
		{
			c++;
			cout << c.getCurrent() << endl;
		}
	}
	else
	{
		for (int i = 0; i < end; i++)
		{
			c--;
			cout << c.getCurrent() << endl;
		}

	}
	system("pause");
	return 0;
}