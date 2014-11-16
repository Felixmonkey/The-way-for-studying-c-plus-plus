#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    vector<string *> spvec;
    string str;
    cout<<"Enter strings: "<<endl;
    while(cin>>str)
    {
        string *pevc = new string;
        *pevc = str;
        spvec.push_back(pevc);
    }
    vector<string *>::iterator iter = spvec.begin();
    while(iter!=spvec.end())
    {
        cout<<**iter<<" "<<(**iter).size()<<endl;
        ++iter;
    }
    for(iter = spvec.begin();iter!=spvec.end();++iter)
    {
        delete *iter;
        ++iter;
    }
    return 0;
}
