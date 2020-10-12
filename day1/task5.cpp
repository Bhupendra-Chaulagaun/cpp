#include<iostream>
using namespace std;
void sum(int a, int b=4, int c= 6){
    cout<<a+b+c<<endl;
}
int main() {
    sum(10);
    sum(3, 5, 6);
}
