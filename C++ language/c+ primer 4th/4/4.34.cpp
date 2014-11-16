#include<iostream>
#include<string>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
    string str;
    vector<string> ivec;
    cout<<"Enter a string: "<<endl;
    while(cin>>str)
        ivec.push_back(str);
    char **parr = new char *[ivec.size()];
    size_t ix = 0;
    for(vector<string>::iterator iter = ivec.begin();iter!=ivec.end();++iter, ++ix)
    {
        char *p = new char[(*iter).size() + 1];
        strcpy(p, (*iter).c_str());
        parr[ix] = p;
        //cout<<parr[ix]<<endl;
    }
    for(ix = 0;ix!=ivec.size();++ix)
    {
        cout<<*parr[ix]<<endl;
        delete [] parr[ix];
    }

    delete [] parr;
    return 0;
}
