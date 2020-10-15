#include<iostream>
using namespace std;

class Complex{
	float real, imag;
	
	public:
		Complex ()
		{
			real = 0.0;
			imag = 0.0;
		}
		
		Complex (float r,float i)
		{
			real = r;
			imag = i;
		}
		void getdata()
		{
			cout << "Enter a complex number: ";
			cin >> real >> imag;
		}
		void showdata()
		{
			cout << real << "+i" << imag << endl;
		}
		
	friend	Complex operator ++ (Complex &);
	friend Complex operator ++ (Complex &, int);
};

Complex operator ++ (Complex &n)
{
	Complex temp;
	temp.real = ++n.real;
	temp.imag = ++n.imag;
	return temp;
}
Complex operator ++ (Complex &n, int)
{
	Complex temp;
	temp.real = n.real++;
	temp.imag = n.imag++;
	return temp;
}

int main()
{
	Complex c1, c2, c3;
	c1.getdata();
	c2.getdata();
	c2 = ++c1;
	c1.showdata();
	c2.showdata();
	c3 = c2++;
	c2.showdata();
	c3.showdata();
	return 0;
	
}
