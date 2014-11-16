#include<iostream>
using namespace std;
int main(){
    int x = 1;
    cout<<x<<endl;
    int *a = &x;
    //*a = 2;
    //cout<<x<<endl;
    int y = 5;
    int *b =&y;
    cout<<x<<" "<<y<<endl;
    *a = 2;
    a =b;
    cout<<x<<" "<<y<<" "<<*a<<endl;

}
