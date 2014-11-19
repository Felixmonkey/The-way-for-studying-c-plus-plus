#include "get.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
ifstream& opean_file(ifstream &in, const string &file){
    in.close();
    in.clear();
    in.open(file.c_str());
    return in;
}
int main(){
    string filename;
    ifstream infile;
    cout<<"Enter the name of the file: "<<endl;
    cin>>filename;
    if(!opean_file(infile, filename)){
        cerr<<"error,can not open file: "<<filename<<endl;
        return -1;
    }
    get(infile);
    infile.close();
    //infile.clear();
    return 0;
}
