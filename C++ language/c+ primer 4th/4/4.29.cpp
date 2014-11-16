#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    const char *str1 = "sdasd";
    const char *str2 = "sdfasdf";
    size_t len = strlen(str1) + strlen(str2);
    char *result_str = new char[len + 1];
    strcpy(result_str, str1);
    strcat(result_str, str2);

    //delete [] str2;
    cout<<*result_str<<endl;
    cout<<result_str<<endl;
    cout<<*(result_str+1)<<endl;
    delete [] result_str;
}
