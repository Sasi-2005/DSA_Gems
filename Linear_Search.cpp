#include <iostream>
using namespace std;

int linear_search(int array_name[],int size,int key){

    for(int i=0; i<=size; i++){

        if(array_name[size]==key){
            return 1;
        }
    }

    return 0;

}

int main(){

    int arr[17]={2,3,4,5,6,7,8,9,0,12,23,45,56,67,78,90,100};
    int key;
    cin>>key;

    bool found=linear_search(arr , 2, key);

    if (found){
        cout<<"Your element was found"<<endl;
    }
    else{
        cout<<"ELEMENT IS ABSENT"<<endl;
    }


}