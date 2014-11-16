#include<iostream>
using namespace std;
extern bool fibon_elem(int,int &);
int main()
{
    char ch;
    bool more=true;
    int elem,pos;
    while(more)
    {
        cout<<"please enter aposition: ";
        cin>>pos;

    if(fibon_elem(pos,elem))
        cout<<"element#"<<pos<<"is"<<elem<<endl;
    else cout<<"sorry ,could not calculate element #"<<pos<<endl;
    cout<<"would you want try again?y/n";
    cin>>ch;
    if(ch!='Y'||ch!='y')
        more=false;

    }

}
