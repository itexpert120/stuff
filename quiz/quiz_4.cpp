#include <iostream>
using namespace std;

// function prototypes
int* appendList(int *arr, int *size, const int n);
int getFirst(const int *arr);
int getLast(const int *arr, const int size);

int main() {
    // create an array of size 5
    int *array = new int[5]{1, 2, 3, 4, 5};
    int size = 5;
    
    // print array
    cout << "Old Array:" << endl;
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
   
    // print first and last elements of array
    cout << "First Element: " << getFirst(array) << endl;
    cout << "Last Element: " << getLast(array, size) << endl;

    // new array
    int *newArray = appendList(array, &size, 6);
    
    // print new array
    cout << "\nNew Array:" << endl;
    for (int i = 0; i < size; i++)
        cout << newArray[i] << " ";
    cout << endl;
    
    // print first and last elements of new array
    cout << "First Element: " << getFirst(newArray) << endl;
    cout << "Last Element: " << getLast(newArray, size) << endl;
    return 0;
}

// function to generate new array
int* appendList(int *arr, int *size, const int n)  {
    // create a new array of greater size
    int* newArray = new int[*size + 1];
    
    // transfer values of old array into new array
    for (int i = 0; i < *size + 1; i++)
        newArray[i] = arr[i];
    
    // make last element of newArray = n
    newArray[*size] = n;
    
    // increase size by 1
    ++(*size);
    return newArray;
}

// funciton to return first element of array
int getFirst(const int *arr) {
    return arr[0];
}

// functio to return last element of array
int getLast(const int *arr, const int size) {
    return arr[size - 1];
}
