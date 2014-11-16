#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string line;
    vector<string> ivec;
    cout<<"enter a string: "<<endl;
    while(cin>>line)
        ivec.push_back(line);
    if(ivec.size()==0)
    {
        cout<<"ERROR,no elements!"<<endl;
        return -1;
    }
    for(vector<string>::iterator iter=ivec.begin();iter!=ivec.end();iter++){
        for(string::size_type ix=0;ix!=(*iter).size();ix++)
            if(islower((*iter)[ix]))
                (*iter)[ix]=toupper((*iter)[ix]);
        cout<<*iter<<" ";
    }
    return 0;

}
