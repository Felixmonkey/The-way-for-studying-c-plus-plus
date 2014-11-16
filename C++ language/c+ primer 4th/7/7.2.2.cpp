#include<iostream>
using namespace std;
void ptrswao(int *&v1, int *&v2){
    int *tmp = v2;//v2´ú±íÖ¸Õë¡£
    v2 = v1;
    v1 = tmp;
}
int main(){
    int i = 10,j = 20;
    int *pi = &i,*pj = &j;
    cout<<*pi<<" "<<*pj<<endl;
    ptrswao(pi,pj);
    cout<<*pi<<" "<<*pj<<endl;
    cout<<i<<" "<<j<<endl;
    return 0;
}
