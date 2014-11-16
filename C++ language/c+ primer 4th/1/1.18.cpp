#include<iostream>
int main()
{
    std::cout<<"Please enter two number: "<<std::endl;
    /*int v1,v2,i,j;
    std::cin>>v1>>v2;
    if(v1>=v2)
    {
        for(int i=v2+1;i<v1;i++)
            std::cout<<i<<" ";
    }
    else
    {
        for(int j=v1+1;j<v2;j++)
            std::cout<<j<<" ";
    }
    */
    int v1,v2,lower,upper;
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
    std::cout<<"value of "<<lower<<" to "<<upper<<" inclusive are: "<<std::endl;
    int i=0;
    for(int val=lower+1;val<upper;val++)
    {
        std::cout<<val<<" ";
        i++;
        //std::cout<<"i is "<<i<<" ";
        if(!(i%10))
            std::cout<<std::endl;//exercise 1.19
    }


}
