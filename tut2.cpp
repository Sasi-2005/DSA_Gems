#include<iostream>
using namespace std;

void PrintArr(int array_name[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array_name[i] << " ";
    }
}

int main() {
    cout << "hello world" << endl;
    cout << "hello sasi";

    int arr[20] = {2, 3, 45};
    int n = 50;

    PrintArr(arr, 20); // Added a semicolon here

    return 0;
}
