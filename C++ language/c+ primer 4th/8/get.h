#ifndef GET_H_INCLUDED
#define GET_H_INCLUDED
#include <iostream>
#include<stdexcept>
using namespace std;
istream& get(istream& in){
    int ival;
    while(in >> ival, !in.eof()){
        if(in.bad())
            throw runtime_error("Io stream corrupted");
        if(in.fail()){
            cerr<<"bad data, try again";
            in.clear(istream::goodbit);
            //in.clear();
            in.ignore(200,' ');

            continue;
        }
        cout<<ival<<endl;
    }
    in.clear();
    return in;
}


#endif // GET_H_INCLUDED
