#include <iostream>

using namespace std;

class class_name{

    //data memeber
    int var1;
    int var2;
    int var3;

    //constructor
    class_name(int data1,int data2 ,int data3){
        this->var1=data1;
        this->var2=data2;
        this->var3=data3;
    }
};

int main(){
    class_name *obj_name=new class_name();
    

}