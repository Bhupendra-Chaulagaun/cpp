#include<iostream>

using namespace std;

class Student{
	char name[20] , address[20];
	int roll, marks;
	public:
		void getdata()
		{
			cout << "Enter student name roll marks and address:" << endl;
			cin >> name >> roll >> marks >> address; 
		}
		void showdata()
		{
			cout <<"The entered detail is"<< endl ;
			cout << "name: "<< name << endl << "roll: "<< roll << endl << "marks: "<< marks <<endl << "address: "<< address;
		}
};
int main()
{
	Student s1;
	s1.getdata();
	s1.showdata();
	return 0;
}
