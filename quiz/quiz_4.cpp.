#include <iostream>
using namespace std;

void appendList(int *arr, int *size, const int n);
int getFirst(const int *arr);
int getLast(const int *arr, const int size);

int main() 
{
    // dummy array
    int *array = new int[]{1, 2, 3, 4, 5};
    
    // size variable
    int size = 5;
    cout << "Old Array:" << endl;
    
    // print array
    for (int i = 0; i < size; i++)
      cout << array[i] << " ";
    cout << endl;
    cout << "First Element: " << getFirst(array) << endl;
    cout << "Last Element: " << getLast(array, size) << endl;

    // append 6 to last of array
    appendList(array, &size, 6);
    
    // print new array
    cout << "\nNew Array:" << endl;
    for (int i = 0; i < size; i++)  cout << array[i] << " ";
    cout << endl;
    cout << "First Element: " << getFirst(array) << endl;
    cout << "Last Element: " << getLast(array, size) << endl;
    return 0;
}

// function to add an element at end of array
void appendList(int *arr, int *size, const int n) 
{
    // reallocate memory of array to be able to occupy more than size elements
    arr = (int*) realloc(arr, (*size + 1) * sizeof(int));
    arr[*size] = n;
    ++(*size);
}

// return first element of array
int getFirst(const int *arr) {
    return arr[0];
}

return last element of array
int getLast(const int *arr, const int size) {
    return arr[size - 1];
}
