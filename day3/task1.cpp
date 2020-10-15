#include<iostream>
using namespace std;

class Complex{
	float real, imag;
	
	public:
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
		
		Complex operator ++ ()
		{
			Complex temp;
			temp . real = ++real;
			temp.imag = ++imag;
			return temp;
		}
		
		Complex operator ++(int)
		{
			Complex temp;
			temp.real = real++;
			temp.imag = imag++;
			return temp;
		}
		void showdata()
		{
			cout << "The sum is: " << real << "+i" << imag << endl;
		}
		
		
	
};

int main()
{
	Complex c1(1, 4), c2(3.1, 4.2), c3, c4 ;
	c2 = ++c1;
	c3 = c2++;
	c4 = ++c3;
	c1.showdata();
	c2.showdata();
	c3.showdata();
	c4.showdata();
	return 0;
}
