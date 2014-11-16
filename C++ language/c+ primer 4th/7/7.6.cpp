#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
/*void swap(int a,int b){
    int temp;
    temp = a;
    a = b;
    b =a;
}*/
int main(){
    int val1,val2;
    cout<<"Enter two integers: "<<endl;
    cin>>val1>>val2;
    swap(val1,val2);
    cout<<val1<<" "<<val2<<endl;
    return 0;
}
