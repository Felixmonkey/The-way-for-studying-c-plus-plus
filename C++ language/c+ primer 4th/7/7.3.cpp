#include<iostream>
using namespace std;
int power(int a,int b){
    int result = 1;
    for(int ix = 0;ix != b;++ix)
        result = result*a;
    return result;
}
int main(){
    cout<<"Enter two integers(>=0): "<<endl;
    int val1,val2;
    cin>>val1>>val2;
    cout<<power(val1,val2)<<endl;
    return 0;
}
