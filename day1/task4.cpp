#include<iostream>
using namespace std;
inline int max(int a, int b){
    if(a>b)
        return a;
    else 
        return b;
}
int main() {
    cout<<max(1,2)<<endl;
    cout<<max(3,2)<<endl;
    cout<<max(2,2)<<endl;
}
