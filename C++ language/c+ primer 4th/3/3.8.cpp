#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line,s1;
    while(cin>>line)
        //s1+=line;
        s1+=line+' ';
    cout<<s1;
    return 0;
}
