#include<iostream>
using namespace std;
void area(int r){
    cout<<"Area of circle: "<<3.14*r*r<<endl;
}
void area(int l,int b){
    cout<<"Area of rectangle: "<<l*b<<endl;
}
int main() {
    int r,l,b;
    cout<<"enter radius:";
    cin>>r;
    area(r);
    cout<<"enter length and breadth:";
    cin>>l>>b;
    area(l,b);
}
