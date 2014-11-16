#include<iostream>
int main()
{
    int val;
    int i=0;
    std::cout<<"Please enter a set of number: "<<std::endl;
    while(std::cin>>val)
        if(val<0)
            i++;
    std::cout<<"Amount of all negative values is: "<<i<<std::endl;

}
