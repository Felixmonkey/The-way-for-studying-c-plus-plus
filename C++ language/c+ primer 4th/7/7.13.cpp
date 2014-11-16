#include<iostream>
using namespace std;
int sum1(const int *begin,const int *end){
    int sum = 0;
    while(begin!=end){
        sum += *begin++;
    }
    return sum;
}
int sum2(const int ia[],size_t size){
    int sum = 0;
    for(size_t ix = 0;ix != size; ++ix)
        sum += ia[ix];
    return sum;
}
int sum3(int *begin, size_t size){
    int sum = 0;
    int *p = begin;
    while(p != begin + size){
        sum += *p++;
    }
    return sum;
}
int main(){
    cout<<"enter"<<endl;
    int ia[] = {1,2,3,4};
    cout<<sum1(ia, ia + 4)<<endl;
    cout<<sum2(ia, 4)<<endl;
    cout<<sum3(ia, 4)<<endl;
    return 0;
}
