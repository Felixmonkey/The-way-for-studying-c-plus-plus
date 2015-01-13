#include <iostream>
#include <string>
#include "get.h"
#include <fstream>
using namespace std;
int main(){
    string filename;//aa.txt
    cout<<"Enter the name of the file: "<<endl;
    cin>>filename;
    ifstream input(filename.c_str());
    if(!input){
        cerr<<"Error:can not opean input file: "
            <<filename<<endl;
        return -1;
    }
    get(input);
    //infile.clear();
    return 0;

}
