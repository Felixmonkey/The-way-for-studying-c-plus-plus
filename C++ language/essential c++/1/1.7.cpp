#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<fstream>
using namespace std;
int main()
{
    ifstream in_file("D:\\C++ language\\text.txt");
    if(!in_file)
    {
        cerr<<"oops!unable to open input file\n";
        return -1;
    }
    ofstream out_file("D:\\C++ language\\text.sort");
    if(!out_file)
    {
        cerr<<"oops,unable to open output file\n";
        return -2;
    }
    string word;
    vector<string> text;
    while(in_file>>word)
        text.push_back(word);
    int ix;
    cout<<"unsorted text:\n";
    for(ix=0;ix<text.size();ix++)
        cout<<text[ix]<<" "<<endl;
    sort(text.begin(),text.end());
    out_file<<"sorted text:\n";
    for(ix=0;ix<text.size();ix++)
        out_file<<text[ix]<<" "<<endl;
    return 0;

}
