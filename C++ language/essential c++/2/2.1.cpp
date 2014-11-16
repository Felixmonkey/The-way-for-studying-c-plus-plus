#include<iostream>
using namespace std;
bool fibon_elem(int,int &);
int main()
{
   int pos;
   cout<<"Please enter a position: ";
   cin>>pos;
   int elem;
   if(fibon_elem(pos,elem))
        cout<<"element #"<<pos<<"is"<<elem<<endl;
    else cout<<"sorry, could not calculate element #"
             <<pos<<endl;
    bool print_sequence(int pos){
   if (pos <= 0 || pos > 1024)
        {
        cerr << "invalid position: " << pos
             << " -- cannot handle request!\n";
       return false;}
   cout << "The Fibonacci Sequence for "
        << pos << " positions: \n\t";

   // prints 1 1 for all values except pos == 1
   switch (pos)
        {
       default:
       case 2:
          cout << "1 ";
          // no break;
       case 1:
          cout << "1 ";
          break;
        }

   int elem;
   int n_2 = 1, n_1 = 1;
   for (int ix = 3; ix <= pos; ++ix)
        {
       elem = n_2 + n_1;
       n_2 = n_1; n_1 = elem;

       // print 10 elements to a line
       cout << elem << (!(ix % 10) ? "\n\t" : " ");
        }
   cout << endl;

   // compiler error is generated here:
   // implicit exit point ... no return statement!
    }

}
