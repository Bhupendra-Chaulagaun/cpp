#include<iostream>
using namespace std;

class Student{
	char name[20], address[20];
	int roll, marks, n;
	public:
		void getdata()
		{
			cout << "Enter the numbers of student: ";
			cin >> n;
			cout << "Enter name roll marks add: " << endl;
			for (int i=0; i<n; i++)
			{
				cin >> name >> roll >> marks >> address ;
			}
		}
		void showdata()
		{
		
			cout << "The details of students: " << endl;
				for (int i=0; i<n; i++)
				{
					cout <<name <<"\t" <<roll <<"\t" <<marks <<"\t" << address << endl ;
				}
		}
};
int main()
{
	Student s;
	s.getdata();
	s.showdata();
	return 0;
}
