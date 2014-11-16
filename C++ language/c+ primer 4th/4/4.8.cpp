#include<iostream>
using namespace std;
int main()
{
    const size_t array_size=5;
    int ia[array_size],ib[array_size];
    size_t ix;
    cout<<"enter "<<array_size<<" number for ia: "<<endl;
    for(ix=0;ix!=array_size;ix++)
        cin>>ia[ix];
    cout<<"enter "<<array_size<<" number for ib: "<<endl;
    for(ix=0;ix!=array_size;ix++)
        cin>>ib[ix];
    for(ix=0;ix!=array_size;ix++){
        if(ia[ix]!=ib[ix]){
            cout<<"ia is not equal to ib"<<endl;
            return 0;
        }
    }
    cout<<"ia is  equal to ib"<<endl;
    return 0;
}
