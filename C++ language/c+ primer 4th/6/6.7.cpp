#include<iostream>
using namespace std;
int main()
{
    char ch;
    int aCnt = 0, oCnt = 0,uCnt = 0,eCnt = 0,iCnt = 0;
    int spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
    while(cin>>ch)
    {
        switch(ch)
        {
            case 'a':
            case 'A':
            aCnt++;
            break;
            case 'o':
            case 'O':
            oCnt++;
            break;
            case 'e':
            case 'E':
            eCnt++;
            break;
            case 'i':
            case 'I':
            iCnt++;
            break;
            case 'u':
            case 'U':
            uCnt++;
            break;
            case ' ':
            spaceCnt++;
            break;
            case '\t':
            tabCnt++;
            break;
            case '\n':
            newlineCnt++;
            break;

        }
    }
}
