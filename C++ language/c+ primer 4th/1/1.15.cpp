#include<iostream>
int main()
{
    int lower,upper,v1,v2;
    std::cout<<"Enter two number:  "<<std::endl;
    std::cin>>v1>>v2;
    if(v1>v2)
    {
        lower=v2;
        upper=v1;
    }
    else
    {
        lower=v1;
        upper=v2;
    }
    //int sum=0;
    //for(int i=lower;i<=upper;i++)
     //   sum+=i;
    //std::cout<<"The sum of "<<v1<<" and "<<v2<<" inclusive is "<<sum<<std::endl;
    std::cout<<"The biger number is "<<upper<<std::endl;
}
