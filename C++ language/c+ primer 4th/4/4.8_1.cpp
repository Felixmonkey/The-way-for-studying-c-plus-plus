#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> ivec1,ivec2;
    int ival;
    cout<<"enter numbers for ivec1: "<<endl;
    cin>>ival;
    while(ival!=-1){
        ivec1.push_back(ival);
        cin>>ival;
    }
    cout<<"enter numbers for ivec2: "<<endl;
    cin>>ival;
    while(ival!=-1){
        ivec2.push_back(ival);
        cin>>ival;
    }
    if(ivec1.size()!=ivec2.size())
        cout<<"ivec1 is not equal to ivec2!"<<endl;
    else if(ivec1.size()==0)
        cout<<"ivec1 is equal to ivec2!"<<endl;
    else
    {
        vector<int>::iterator iter1,iter2;
        iter1=ivec1.begin();
        iter2=ivec2.begin();
        while(*iter1==*iter2&&iter1!=ivec1.end()&&iter2!=ivec2.end()){
            iter1++;
            iter2++;
        }
        if(iter1==ivec1.end())
            cout<<"ivec1 is equal to ivec2!"<<endl;

    }
    return 0;
}
