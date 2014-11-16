#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> ivec;
    //const size_t vec_size = 5;
    cout<<"Enter numbers: "<<endl;
    int ival;
    while(cin>>ival)
        ivec.push_back(ival);
    //int int_arr[ival.size()];
    int *int_arr = new int[ivec.size()];
    size_t ix = 0;
    for(vector<int>::iterator iter= ivec.begin();iter != ivec.end(); ++ix,++iter)
    {
        int_arr[ix] = *iter;
        //cout<<*iter<<'\t'<<ix<<'\t'<<int_arr[ix]<<endl;
    }
    cout<<int_arr<<endl;
    delete [] int_arr;
    return 0;
}
