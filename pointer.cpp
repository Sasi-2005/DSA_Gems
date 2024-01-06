#include <iostream>
using namespace std;

int main(){
    int a=10;
    int *aptr=&a;

    cout<<*aptr<<endl;
    cout<<aptr<<endl;
    cout<<a<<endl;

    *aptr=20;

    cout<<a<<endl;

    return 0;   
}
