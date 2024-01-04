#include <iostream>
using namespace std;

int binary_search(int arr[],int size, int key){
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;

    while(start<end){
        if(arr[mid]==key){
            return mid;
        }

        if(key> arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1; 

}

int main(){

    int arr1[11]={12,13,14,15,17,18,19,20,21,22,23};
    int arr2[6]={1,2,3,4,5,7};

    int index=binary_search(arr1,11,22);
    cout<<"index of 22 is"<<index<<endl;

    int index1=binary_search(arr2,6,7);
    cout<<"index of 7 is"<<index1<<endl;


}