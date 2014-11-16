#include <iostream>
#include "Sales_item.h"
#include "Sales_item.cpp"
using namespace std;
int main(){
    Sales_item total, trans;
    cout<<"Enter some transactions: "<<endl;
    if(total.input(cin)){
        while(trans.input(cin))
            if(total.same_isbn(trans))
                total.add(trans);
            else{
                total.output(cout)<<endl;
                total = trans;
            }
        total.output(cout)<<endl;
    }
    else{
        cout<<"No Data?!!"<<endl;
        return -1;
    }
    return 0;

}
