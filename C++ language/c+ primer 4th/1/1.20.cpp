#include<iostream>
int main()
{
    std::cout<<"Enter two number: "<<std::endl;
    int v1,v2;
    std::cin>>v1>>v2;
    int sum=0,i;
    for(i=v1+1;i<v2;i++)
            sum+=i;
    std::cout<<"sum of "<<v1<<" to "<<v2<<" inclusive is "<<sum<<std::endl;
}
