#include<iostream>
using namespace std;

class Matmul{
	int mat[3][3];
	
	public:
		void getdata()
		{
			for (int i=0; i<3; i++)
			{
				for (int j=0; j<3; j++)
				{
					cin >> mat[i][j];
				}
			}
		}
		void showdata()
		{
			for (int i=0; i< 3; i++)
			{
				for (int j=0; j<3; j++)
				{
					cout << mat[i][j] << "\t";
				}
				cout << endl;
			}
		}
		
		friend Matmul operator * (Matmul, Matmul);
};

Matmul operator * (Matmul m1, Matmul m2)
{
	int sum;
	Matmul temp;
	for (int i=0; i< 3; i++)
			{
				for (int j=0; j<3; j++)
				{
					sum = 0;
					for (int k=0; k<3; k++ )
					{
						sum = sum + m1.mat[i][k] * m2.mat[k][j];
					}
					temp.mat[i][j] = sum;
				}
			}
			return temp;
}

int main()
{
	Matmul mm1, mm2, mm3;
	mm1.getdata();
	mm2.getdata();
	mm3 = mm1*mm2;
	mm3.showdata();
	return 0;
}
