#include<iostream>
using namespace std;

class Complex{
	float real1, imag1, real2, imag2, real, imag;
	public:
		void getdata()
		{
			cout << "Enter first complex number: "<< endl;
			cin >> real1 >> imag1;
			cout << "Enter second complex number: "<< endl;
			cin >> real2 >> imag2;
		}
		void addshow()
		{
			real = real1 + real2;
			imag = imag1 + imag2;
			cout << "The sum of two complex no is: " ;
			cout << real << "+i" << imag; 
		}
};

int main()
{
	Complex c;
	c.getdata();
	c.addshow();
	return 0;
}
