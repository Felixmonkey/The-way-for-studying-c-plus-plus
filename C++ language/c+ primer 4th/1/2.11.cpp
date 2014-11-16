#include<iostream>
int main()
{
    int base,exponent;
    std::cout<<"please enter base and exponent: ";
    std::cin>>base>>exponent;
    int result=1;
    if(exponent>=0)
    {
        for(int i=0;i<exponent;i++)
        result*=base;
        std::cout<<base<<" result to the power of "<<exponent<<": "<<result<<std::endl;
    }
    else
    {
        std::cout<<"exponent can't be smaller than 0"<<std::endl;
        return -1;
    }

    return 0;
}
