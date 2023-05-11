#include <iostream>
#define accuracy 0.00001
using namespace std;
int main()
{
	double x = 1, y = 7, x_next = -3, z, fx, fy, lambda = 0.001;
	
	while (abs(x-x_next) > accuracy)
	{
		x = x_next;
		cout << "?" << x << " " << y << endl;
		cout.flush();
		cin >> z >> fx >> fy;
		x_next = x - lambda*fx;
		y = y - lambda * fy;
	}
	
	cout << "!" << x_next <<" "<< y << endl;  //вывод заканчивается переводом строки.
	cout.flush();            //flush после каждой операции вывода
}