#include<iostream>
using namespace std;
int factorial(int a){
    int result = 1;
    for(int b = a;b!=0;--b)
        result *= b;
    return result;

}
int main(){
    cout<<"enter integer: "<<endl;
    int ival;
    cin>>ival;
    cout<<factorial(ival)<<endl;
    return 0;
}
/*int main(){
    long x,j=1,sum=0;
    for(x=1;x<=10;++x){
        j*=x;
        sum+=j;
    }
cout<<sum<<endl;
}*/
//1!+2!...+10!
