#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;
void process(string s);
int main(){
    vector<string> files;
    cout<<"Enter the name of the files: "<<endl;//aa  bb
    string filesname, s;
    while(cin >> filesname)
        files.push_back(filesname);
    ifstream input;
    vector<string>::const_iterator it = files.begin();
    while(it != files.end()){
        input.open(it -> c_str());
        if(!input){
            cerr<<"error, can not open file: "<< *it <<endl;
            input.clear();
            it++;
            continue;
        }
        while(input >> s)
            process(s);
        cout<<endl;
        input.close();
        input.clear();
        it++;
    }
    return 0;
}

void process(string s){
    cout<<s<<flush;
}

