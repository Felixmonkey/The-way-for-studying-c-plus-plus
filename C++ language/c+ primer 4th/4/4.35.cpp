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
        parr[ix] = p;//p�ĵ�ַ�ŵ�parr��ȥ��*parrΪp�ĵ�ַ��**parrΪ*p����vector�е�һ��ֵ��
        //cout<<parr[ix]<<endl;
        cout<<*iter<<endl;
    }

    for(ix = 0;ix!=ivec.size();++ix)
    {
        cout<<parr[ix]<<endl;
        delete [] parr[ix];
    }

    delete [] parr;
    return 0;
}
