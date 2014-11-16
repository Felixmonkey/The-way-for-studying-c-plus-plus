#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int ival;
    vector<int> ivec;
    cout<<"Enter number(Ctrl+Z to end): "<<endl;
    while(cin>>ival)
        ivec.push_back(ival);
    int sum=0;
    if(ivec.size()==0){
        cout<<"No elements?!"<<endl;
        return -1;
    }
    for(vector<int>::size_type ix=0;ix<(ivec.size()-1);ix+=2){
        sum=ivec[ix]+ivec[ix+1];
        cout<<"The sum of "<<ivec[ix]<<" and "<<ivec[ix+1]<<" is "<<sum<<endl;

    }
    if((ivec.size()%2)!=0){
        cout<<"The last element is not been summed "
            <<"and its value is "
            <<ivec[ivec.size()-1]
            <<endl;
    }
    return 0;

}
