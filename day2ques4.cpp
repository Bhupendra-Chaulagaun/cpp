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
		Complex (float r, float i)
		{
			real =r;
			imag = i;
		}
		Complex (Complex &c)
		{
			real = c.real;
			imag = c.imag;
		}
		~Complex()
		{
			cout << "Destructor" << endl;
		}
		
		void showdata()
		{
			cout << "The complex no is:" << endl;
			cout << real << "+i" << imag << endl;
		}
		void getdata()
		{
			cout << "Enter the complex no: ";
			cin >> real >> imag;
		}
};
int main()
{
	Complex c1, c2(1, 3), c3, c4(c3);
	c1.showdata();
	c2.showdata();
	c3.getdata();
	c3.showdata();
	c4.showdata();
	return 0;
}
