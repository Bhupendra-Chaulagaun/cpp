#include<iostream>
using namespace std;

class Complex{
	int real, imag;
	public:
		Complex()
		{
			real = 0;
			imag = 0;
		}
		Complex(int r, int i)
		{
			real = r;
			imag = i;
		}
		
		void showdata()
		{
			cout << "The sum is: " ;
			cout << real << "+i" << imag;
		}
		friend Complex add(Complex, Complex);
		
};
Complex add(Complex c1, Complex c2)
{
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.imag = c1.imag + c2.imag;
	return temp;
}

int main()
{
	Complex c1(3, 5), c2(4, 7), c3;
	c3 = add(c1, c2);
	c3.showdata();
	return 0;
}
