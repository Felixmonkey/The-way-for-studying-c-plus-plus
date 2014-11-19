#include "get.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string line;
    cout<<"Enter a line of text: "<<endl;
    getline(cin, line);
    line += " ";
    istringstream isstr(line);
    get(isstr);
    return 0;


}
