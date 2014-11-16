#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> ival;
    cout<<"Enter numbers: "<<endl;
    int val;
    while(cin>>val)
        ival.push_back(val);
    for(vector<int>::iterator iter=ival.begin();iter!=ival.end();++iter)
    {
        *iter = (*iter%2 ? *iter*2 : *iter);
        cout<<*iter<<endl;
    }
    return 0;
}
