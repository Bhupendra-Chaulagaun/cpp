#include<iostream>

using namespace std;

class Complex{
	float real, imag;
	
	public:
		void getdata()
		{
			cout << "Enter complex number: ";
			cin >> real >> imag ;
			
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
		
		Complex operator +(Complex c)
		{
			Complex temp;
			temp.real = real + c.real;
			temp.imag = imag + c.imag;
			return temp;
		}
		void showdata()
		{
		cout << "The sum is:";
		cout << real << "+i" << imag << endl;
	}
};

int main()
{
	Complex c1(2, 4), c2, c3, c4;
	c2.getdata();
	c3 = c1 + c2;
	c4 = c3 + c2 + c1;
	c3. showdata();
	c4.showdata();
	return 0;
}
