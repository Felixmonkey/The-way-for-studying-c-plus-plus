#include<iostream>
int main()
{

    int result=1,value=2,pow=10;
    int i;
    for(i=0;i<pow;i++)
        result*=value;
    std::cout<<" 2 raised to the power of 10: "<<result<<std::endl;
    return 0;
}
