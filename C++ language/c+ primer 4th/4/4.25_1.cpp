#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    /*const int str_size = 5;
    char str1[str_size] = "qwe";
    char str2[str_size] = "qwer";
    */
    const char *str1 = "string1", *str2 = "string2";
    int result;
    result = strcmp(str1, str2);
    if(result > 0)
        cout<<str1<<" is bigger than "<<str2<<endl;
    else if(result < 0)
        cout<<str2<<" is bigger than "<<str1<<endl;
    else
        cout<<str1<<" is equal to "<<str2<<endl;
    return 0;

}
