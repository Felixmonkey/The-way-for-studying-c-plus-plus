#include<iostream>
#include<vector>
//#include<string>
using namespace std;
int main()
{
    vector<int> value1;
    cout<<"Please enter some value: "<<endl;
    int value;
    while(cin>>value)
        value1.push_back(value);
    int *ia = new int[value1.size()];
    //size_t ix;
    int *p = ia;
    //for(int *q = p;q!= p+n;++q) P118 :p+n��̶�������Ҫ���Ƶ���һ��ָ�룻
    for(vector<int>::iterator iter = value1.begin();iter != value1.end();++iter,++p)
    {
        *p = *iter;

        cout<<*p<<endl;
    }
    delete [] ia;
    return 0;
}
