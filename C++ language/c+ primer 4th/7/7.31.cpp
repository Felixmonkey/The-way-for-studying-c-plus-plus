#include <iostream>
#include "Sales_item.h"
#include "Sales_item.cpp"
using namespace std;
int main(){
    Sales_item item;
    cout<<"Enter some transactions: "<<endl;
    while(item.input(cin)){
        cout<<"The transaction readed is: "<<endl;
        item.output(cout);
        cout<<endl;
    }
    return 0;
}
