#include<iostream>
using namespace std;
int count_calls(){
    static int ctr = -1;
    return ++ctr;
}
int main(){
    for(int i = 0;i!=10;++i)
       cout<<count_calls()<<endl;
    return 0;
}
