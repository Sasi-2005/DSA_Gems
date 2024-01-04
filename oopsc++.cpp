#include <iostream>
using namespace std;

class car{
    public:
    int price1;
    int price2;

    void add(){
        cout<<"price is"<<price1+price2<<endl;

    }
    void sub(){
        cout<<"price is subtracted ->"<<price1-price2<<endl;
    }
};

int main(){
    car c1;
    car c2;

    cout<<"car1 and car2 price"<<c1.price1<<endl;
    cout<<"car1 and car2 price"<<c2.price1<<endl;

    c1.add();
    c2.sub();



}