#include<iostream>
#include<vector>
using namespace std;
int main()
{
    cout<<"Enter number: "<<endl;
    int line;
    vector<int> ivec;
    while(cin>>line)
        ivec.push_back(line);
    if(ivec.size()==0){
        cout<<"error,no elements!"<<endl;
        return -1;
    }
    vector<int>::size_type cnt=0;
    for(vector<int>::iterator iter=ivec.begin();iter<ivec.end()-1;iter+=2){
        cout<<*iter+*(iter+1)<<"\t";
        ++cnt;
        if(cnt%6==0)
            cout<<endl;
    }

    if((ivec.size()%2)!=0)
        cout<<endl<<"The last value : "<<*(ivec.end()-1)<<" is "<<" single "<<endl;

    return 0;

}
