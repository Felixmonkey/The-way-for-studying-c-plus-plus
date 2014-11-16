#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int line;
    vector<int> ivec(10,20);
    //cout<<"enter 10 number: "<<endl;
    //while(cin>>line)
        //ivec.push_back(line);
    if(ivec.size()==0)
    {
        cout<<"Error ,no elements!?"<<endl;
        return -1;
    }
    vector<int>::size_type cnt=0;
    for(vector<int>::iterator iter=ivec.begin();iter!=ivec.end();iter++){
        *iter*=2;
        ++cnt;
        cout<<*iter<<" ";
        if(cnt%5==0)
            cout<<endl;

    }
    return 0;
}
