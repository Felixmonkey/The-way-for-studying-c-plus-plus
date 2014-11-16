#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    int ival = 1024;
    int *pi = &ival;
    int **ppi = &pi;
    int *pi2 = *ppi;
    cout<<ival<<endl<<*pi<<endl<<**ppi<<endl<<*pi2;

}
