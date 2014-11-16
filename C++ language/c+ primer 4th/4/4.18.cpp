#include<iostream>
using namespace std;
int main()
{
    const size_t ia=4;
    int a[ia]={1,2,3,4};
    //for(int *pbegin=a,*pend=a+ia;pbegin!=pend;pbegin++){
     //   *pbegin=0;
      //  cout<<*pbegin<<' ';
    //}
    //return 0;
    for(int *pbegin = a, *pend = a + ia; pbegin != pend; ++pbegin)
        cout<<*pbegin<<endl;
    return 0;

}
