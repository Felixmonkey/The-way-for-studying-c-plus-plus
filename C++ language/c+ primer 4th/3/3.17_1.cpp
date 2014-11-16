#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int line;
    vector<int> ivec;
    cout<<"enter a pair number: "<<endl;
    while(cin>>line)
        ivec.push_back(line);
    if(ivec.size()==0){
            cout<<"error ,no elements!";
            return -1;
    }
    vector<int>::size_type cnt=0;
    vector<int>::iterator first,last;
    for(first=ivec.begin(),last=ivec.end()-1;first<last;++first,--last){
        cout<<*first+*last<<"\t";
        ++cnt;
        if(cnt%6==0)
            cout<<endl;
    }
    if(first==last){
        cout<<endl<<"The certer element "<<*first<<" is not been summed "<<endl;
    }
    return 0;
}
