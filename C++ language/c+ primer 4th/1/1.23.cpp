#include<iostream>
#include"Sales_item.h"
int main()
{
    Sales_item total,trans;
    std::cout<<"Please enter   transaction: "<<std::endl;
    if(std::cin>>total)
    {
        while(std::cin>>trans)
        {
            if(total.same_isbn(trans))
                total+=trans;
            else
            {
                std::cout<<"Differnent ISBN"<<std::endl;
                return -1;
            }
        }
        std::cout<<"The total information: "<<std::endl
                 <<"ISBN, number of copies sold, "
                 <<"total revenue ,and average price are: "<<std::endl
                 <<total<<std::endl;
    }
    else
    {
        std::cout<<"no date!"<<std::endl;
        return -1;
    }
    return 0;
}
