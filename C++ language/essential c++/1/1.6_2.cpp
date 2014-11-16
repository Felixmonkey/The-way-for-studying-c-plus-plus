#include<iostream>
using namespace std;
int main()
{
    const int array_size=120;
    int ia[array_size];
    int ival=0,icnt=0;
    while(icnt<array_size&&cin>>ival)
        ia[icnt++]=ival;
    int sum,average,ix;
    for(sum=0,ix=0;ix<icnt;ix++)
        sum+=ia[ix];
    average=sum/icnt;
    cout<<"sum of "<<icnt<<" elements:"<<sum<<'\n'
        <<"average: "<<average<<endl;


}
