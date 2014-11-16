#include<iostream>
using namespace std;
int comparation(int a,const int *b){
    return a>*b?*b:a;
}
int main(){
    cout<<"Enter two integers: "<<endl;
    int val1,val2;
    cin>>val1>>val2;
    cout<<comparation(val1,&val2)<<endl;
}
