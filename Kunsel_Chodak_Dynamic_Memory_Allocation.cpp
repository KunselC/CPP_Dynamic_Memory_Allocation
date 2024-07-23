#include <iostream>
using namespace std;

void display(int*, int);

int main()
{
    int size;
    cout << "How many elements for the array: ";
    cin >> size;

    int* arrPtr = new int[size];
    //int arr[size]; returns error

    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": ";
        cin >> *(arrPtr + i);
        //cin >> arrPtr[i];
    }
    cout << "Here's your values: " << endl;
    display(arrPtr, size);

    delete[] arrPtr;
    arrPtr = nullptr;

    return 0;
}

void display(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}