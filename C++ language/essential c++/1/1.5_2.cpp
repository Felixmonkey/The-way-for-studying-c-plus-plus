#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int main()
{
    const int nm_size=128;
    char user_name[nm_size];
    cout<<"Please enter your name: ";
    cin>>setw(nm_size)
       >>user_name;
    switch(strlen(user_name))
    {
        case 127:
            cout<<"That is a very big name,indeed----"
                <<"we may needed have to shorten it!\n"
                <<"in any case,\n";
        default:
            cout<<"hello, "
                <<user_name
                <<"--happy to make your acquaintance!";
        break;

    }

}
