#include<iostream>
#include<string>
using namespace std;
int main(){
    string currword , preword;
    string repword;
    int currcnt =0,maxcnt = 1;
    cout<<"Enter words: "<<endl;
    while(cin>>currword){
        if(currword == preword){
            ++currcnt;
        }
        else{
            if(currcnt > maxcnt){
                    maxcnt = currcnt;
                    repword = preword;
            }
            currcnt = 1;
        }
        preword = currword;
    }
    if(maxcnt < currcnt)//ע�����һ��ѭ�����׺��� currwordΪ���ʱ
    {
        maxcnt = currcnt;
        repword = preword;
    }
    if(maxcnt != 1){
        cout<<'"'<<repword<<'"'<<" repeated for "<<maxcnt
            <<" times."<<endl;
    }
    else{
        cout<<"There is no repeated word."<<endl;
    }
    return 0;
}
