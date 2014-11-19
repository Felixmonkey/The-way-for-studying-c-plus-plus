#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;
int filetovector(string filename, vector<string>& svec){
    string s;
    ifstream infile(filename.c_str());
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
    string filename, s;
    cout<<"Enter the name of file: "<<endl;
    cin>>filename;
    vector<string> svec;
    switch(filetovector(filename, svec)){
        case 1:
            cout<<"error,can not open file: "<<filename<<endl;
            return -1;
        case 2:
            cout<<"error: system failure"<<endl;//系统故障
            return -1;
        case 3:
            cout<<"error, read failure"<<endl;//读数据失败
            return -1;
    }
    string word;
    istringstream isstr;
    for(vector<string>::const_iterator iter = svec.begin();iter != svec.end();++iter){
        isstr.str(*iter);
        while(isstr >> word)
            cout<<word<<endl;
        isstr.clear();//将istringstream流置为有效状态
    }
    return 0;
}
