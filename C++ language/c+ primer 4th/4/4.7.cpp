//#include<iostream>
#include<vector>
using namespace std;
int main()
{
    /*const size_t array_size=10;
    int ia[array_size],ib[]={1,2,3,4,5};
    for(size_t ix=0;ix!=array_size;ix++)
        ia[ix]=ib[ix];
    return 0;*/
    vector<int> ivec(10,20);
    vector<int> ival;
    for(vector<int>::iterator iter=ivec.begin();iter!=ivec.end();++iter)
        ival.push_back(*iter);
    return 0;
}
