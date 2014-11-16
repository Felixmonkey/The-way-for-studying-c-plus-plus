#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int line;
    vector<int> ivec;
    while(cin>>line)
        ivec.push_back(line);
    int result=0;
    if(ivec.size()%2==0)
    {
        for(vector<int>::size_type ix=0;(2*ix)!=ivec.size();ix++){
            result=ivec[2*ix]+ivec[2*ix+1];
            cout<<"The sum of "<<ivec[2*ix]<<" and "<<ivec[2*ix+1]<<" is "<<result<<endl;
        }
    }
    else if((ivec.size()%2)!=0)
    {
        for(vector<int>::size_type ix=0;(2*ix)!=ivec.size()-1;ix++){
           result=ivec[2*ix]+ivec[2*ix+1];
           cout<<"The sum of "<<ivec[2*ix]<<" and "<<ivec[2*ix+1]<<" is "<<result<<endl;
           }
           cout<<"The last number "<<ivec[ivec.size()-1]<<" is single"<<endl;
    }
    return 0;
}
