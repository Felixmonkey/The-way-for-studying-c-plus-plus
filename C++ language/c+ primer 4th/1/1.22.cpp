#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item trans1,trans2;
    std::cout<<"Please enter two same transaction: "<<std::endl;
    std::cin>>trans1>>trans2;
    if(trans1.same_isbn(trans2))
    {
        std::cout<<"The total information: "<<std::endl
                 <<"ISBN, number of copies sold, "
                 <<"total revenue ,and average price are: "<<std::endl
                 <<trans1+trans2<<std::endl;
    }
    else
    {
        std::cout<<"The two transaction have different ISBN."<<std::endl;
    }
    return 0;
}
