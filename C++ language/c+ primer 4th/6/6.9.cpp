#include<iostream>
using namespace std;
int main()
{
    int ffCnt =0,flCnt = 0,fiCnt = 0;
    char currch, prech = '\0';
    while(cin>>currch)
    {
        if(prech == 'f')
        {
            switch(currch)
            {
                case 'f':
                ++ffCnt;
                break;
                case 'l':
                ++flCnt;
                break;
                case 'i':
                ++fiCnt;
                break;
            }
        }
        prech = currch;
    }
    cout<<"ffCnt is "<<ffCnt<<endl
        <<"flCnt is "<<flCnt<<endl
        <<"fiCnt is "<<fiCnt<<endl;
    return 0;

}
