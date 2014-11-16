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
    for(vector<int>::size_type ix=0;ix<(ivec.size()/2);ix++){
        sum=ivec[ix]+ivec[ivec.size()-1-ix];
        cout<<"The sum of "<<ivec[ix]<<" and "<<ivec[ivec.size()-1-ix]<<" is "<<sum<<endl;

    }
    if((ivec.size()%2)!=0){
        cout<<"The middle element is not been summed "
            <<"and its value is "
            <<ivec[ivec.size()/2]
            <<endl;
    }
    return 0;

}
