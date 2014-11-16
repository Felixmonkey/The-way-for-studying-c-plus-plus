#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
    string line;
    vector<string> svec;
    while(cin>>line)
        svec.push_back(line);
    for(vector<string>::size_type ix=0;ix!=svec.size();ix++)
        {
            //int cnt;
            for(string::size_type index=0;index!=svec[ix].size();index++)
                if(islower(svec[ix][index]))
                    svec[ix][index]=toupper(svec[ix][index]);
            cout<<svec[ix]<<" ";
            //cnt++;
            if((ix+1)%8==0)
                cout<<endl;
        }
    return 0;
}
