#include<iostream>
#include<vector>
using namespace std;
double vectorsum(vector<double>::iterator beg,
                 vector<double>::iterator end){
    double sum = 0.0;
    while(beg != end)
        sum += *beg++;
    return sum;
}
int main(){
    vector<double> dvec;
    cout<<"Enter double type of elements for vector: "<<endl;
    double ival;
    while(cin>>ival)
        dvec.push_back(ival);
    cout<<vectorsum(dvec.begin(), dvec.end())<<endl;
    return 0;



}

