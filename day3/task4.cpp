#include<iostream>
using namespace std;

class Complex{
	float real, imag;
	public:
		void getdata()
		{
			cout << "Enter the complex number: ";
			cin >> real >> imag;
		}
		Complex()
		{
			real = 0.0;
			imag = 0.0;
		}
		Complex(float r, float i)
		{
			real = r;
			imag = i;
		}
		
		friend Complex operator +(Complex, Complex);
		
		void showdata()
		{
			cout << "The sum is: ";
			cout << real << "+i" << imag;
		}
};

Complex operator + (Complex c1, Complex c2)
{
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}

int main()
{
	Complex c1, c2, c3;
	c1.getdata();
	c2.getdata();
	c3 = c1 + c2;
	c3.showdata();
	return 0;
}
