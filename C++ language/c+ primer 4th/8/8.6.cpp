#include <iostream>
#include <string>
#include "get.h"
#include <fstream>
using namespace std;
int main(){
    string filename;//aa.txt
    cout<<"Enter the name of the file: "<<endl;
    cin>>filename;
    ifstream infile(filename.c_str());
    if(!infile){
        cerr<<"Error:can not opean input file: "
            <<filename<<endl;
        return -1;
    }
    get(infile);
    //infile.clear();
    return 0;

}
