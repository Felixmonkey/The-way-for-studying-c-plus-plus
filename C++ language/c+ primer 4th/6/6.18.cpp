#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2,rep;
    do{
        cout<<"Enter two strings: ";
        cin>>str1>>str2;
        //cout<<(str1>str2?str2:str1)<<" is smaller in the dictionary."<<endl;
        if(str1 < str2)
            cout<<"The first string is smaller than the second one."<<endl;
        else if(str1 == str2)
            cout<<"Two strings are equal."<<endl;
        else
            cout<<"The second string is smaller thanthe first one."<<endl;
        cout<<"More[yes]or[no]: ";
        cin>>rep;
    }while(!rep.empty() && rep[0]!='n');
    return 0;
}
