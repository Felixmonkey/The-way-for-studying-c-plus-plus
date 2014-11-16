#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> ivec;
    int ival;
    while(cin>>ival)
    {
        ivec.push_back(ival);
    }
    int sum,ix;
    for(sum=0,ix=0;ix<ivec.size();++ix)
        sum+=ivec[ix];
    int average=sum/ivec.size();
    cout<<"sum of "<<ivec.size()<<" elements: "<<sum<<'\n'
        <<"average: "<<average<<endl;
}
