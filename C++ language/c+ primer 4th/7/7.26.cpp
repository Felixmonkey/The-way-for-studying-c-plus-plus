#include<iostream>
#include<string>
using namespace std;
string make_plural(size_t ctr, const string &word, const string &ending = "s"){
    return (ctr == 1)?word:word + ending;
}
int main(){
    cout<<make_plural(1, "success","es")<<endl
        <<make_plural(0, "success","es")<<endl
        <<make_plural(1, "failure")<<endl
        <<make_plural(0, "failure")<<endl;
    return 0;
}
