#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1("wife"),s2("lover");
    if(s1==s2)
        cout<<"s1 is equal to s2"<<endl;
    //else if(s1>s2)
    else if(s1.size()>s2.size())
        //cout<<"s1 is bigger than s2"<<endl;
        cout<<"s1 is longer than s2"<<endl;
    else
        //cout<<"s2 is bigger than s1"<<endl;
        cout<<"s2 is longer than s1"<<endl;
    return 0;

}
