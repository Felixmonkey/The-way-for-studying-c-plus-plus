#include<iostream>
#include<string>
//#include<cctype>
#define NDEBUG//If NDEBUG haven't be defined ,the program
//will execute the statements between '#ifndef' and '#endif'.
using namespace std;
int main(){
    string currword, preword;
    bool result = false;
    cout<<"Enter strings: "<<endl;
    while(cin>>currword){
        #ifndef NDEBUG
        cout<<currword<<" ";
        #endif
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
