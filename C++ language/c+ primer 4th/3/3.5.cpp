#include<iostream>
#include<string>
using namespace std;
int main()
{
    string line;
    //while(cin>>line)

    while(getline(cin,line))
        cout<<line.size()<<" size "<<line<<endl;
    return 0;
}
