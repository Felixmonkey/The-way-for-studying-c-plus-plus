#include<iostream>
#include<string>
using namespace std;
int main(){
    string currword, preword;
    bool result = false;
    cout<<"Enter strings: "<<endl;
    while(cin>>currword){
        if(currword == preword){

            if(isupper(currword[0])){
                result = true;
                break;
            }

            else
                continue;

        }
        //else if(currword != preword && !currword.empty())
        else
            preword = currword;
    }
    //if(currword == preword && !currword.empty())
    if(!result)
        cout<<"No continue strings."<<endl;
    else
        cout<<currword<<" is repeated."<<endl;
    return 0;
}
