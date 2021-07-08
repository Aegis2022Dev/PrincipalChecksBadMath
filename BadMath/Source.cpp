#include <iostream>
#include <iomanip>
using namespace std;


//average method corrected for math formula and logical input errors.  

float average(int i1, int i2, int i3)
{
	return (float)(i1 + i2 + i3) / 3.0f; //corrected logical math error to take correct mean 
                                         //additionally cast numerator as float to make implict 
	                                     //type conversion of numerator so quotient will be an
	                                     //exact float for float average variable 
}

int main()
{
	int n1 = 0 , n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3; //corrected logical error for n3 instead of n2

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}