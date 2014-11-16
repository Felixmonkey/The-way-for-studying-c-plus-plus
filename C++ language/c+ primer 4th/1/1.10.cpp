#include<iostream>
int main()
{
    int sum=0,i=50;
    /*for(int i=50;i<=100;++i)
        sum+=i;
    std::cout<<"The sum of 50 to 100 inclusive is "<<sum<<std::endl;
    */
    while(i<=100)
    {
        sum+=i;
        ++i;
    }
    std::cout<<"The sum of 50 to 100 inclusive is "<<sum<<std::endl;

}
