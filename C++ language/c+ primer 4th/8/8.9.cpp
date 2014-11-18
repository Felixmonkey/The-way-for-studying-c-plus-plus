#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
int filetovector(string filesname, vector<string>& svec){
    string s;
    ifstream infile(filesname.c_str());
    if(!infile)
        return 1;
    while(getline(infile, s))
        svec.push_back(s);
    infile.close();
    if(infile.eof())
        return 4;
    if(infile.bad())
        return 2;
    if(infile.fail())
        return 3;
}
int main(){
    string filesname, s;
    vector<string> svec;
    cout<<"Enter the name of files: "<<endl;
    cin>>filesname;
    switch(filetovector(filesname, svec)){
        case 1:
            cout<<"error,can not open file: "<<filesname<<endl;
            return -1;
        case 2:
            cout<<"error: system failure"<<endl;
            return -1;
        case 3:
            cout<<"error, read failure"<<endl;
            return -1;
    }
    cout<<"the vector : "<<endl;
    for(vector<string>::iterator ix = svec.begin();ix != svec.end();ix++)
        cout<<*ix<<endl;
    return 0;
}
