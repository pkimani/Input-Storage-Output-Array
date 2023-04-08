#include <iostream>
#include <array>

using namespace std;

void setLength (int* arrayLength)
{
    cout << "Enter the length of the array: " << endl;
    cin >> *arrayLength;
    cout << "You have chosed 10 values " << *arrayLength << endl;
}

void initializeArray (int* &myArray, int* arrayLength) {
    cout << "Setting values..." << endl;
    for (int i = 0; i < *arrayLength; i++) {
        i[myArray] = 0;
        cout << "The value of index " << i << " has been set to 0." << endl;
    }
}

void putNumbers (int* &myArray, int *arrayLength)
{
    cout << "The size of the array is " << *arrayLength << endl;
    for (int i = 0; i < *arrayLength; i++) {
        cout << "There have been " << i << " spaces filled." << endl;
        cout << "Yet there are " << *arrayLength - i << " spaces available." << endl;
        int number;
        cout << "Enter a number: " << endl;
        cin >> number;
        
        i[&*myArray] = number;
    }
}

void printArray(int* &myArray, int *arrayLength)
{
    cout << "The values are:" << endl;
    for (int i = 0; i < *arrayLength - 1; i++) {
        cout << i[&*myArray] << ", ";
    }
    cout << ((int)((&*myArray))[*arrayLength - 1]) << "." << endl << "That's enough!" << endl;
}

int main()
{
 
    int *arrayLength = new int;
    setLength(arrayLength);
    int *myArray = new int[*arrayLength];
    initializeArray(myArray, arrayLength);
    putNumbers(myArray, arrayLength);
    printArray(myArray, arrayLength);
    
    return 0;
}