#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    string str1;
    const size_t array_size = 10;
    char res_str[array_size + 1];
    cout<<"Please enter a string(<= "<<array_size<<" characters): "<<endl;
    cin>>str1;
    size_t len = strlen(str1.c_str());
    if (len > array_size)
    {
        len = array_size;
        cout<<"String is longer than "<<array_size<<" characters and is stored only "
        <<array_size<<" characters!"<<endl;
    }

    strncpy(res_str, str1.c_str(),len);
    cout<<res_str<<endl;
    res_str[len + 1] = '\0';
    cout<<res_str<<endl;
    for(size_t ix =0;ix<=len;++ix)
        cout<<res_str[ix];
    return 0;

}
