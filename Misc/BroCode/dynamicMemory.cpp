#include <iostream>

int main()
{
    // dynamic memory = Memory that is allocated after the program 
    //                  is already compiled and running.
    //                  Use the 'new' operator to allocate memory
    //                  in the heap rather than the stack.

    //                  Useful when we don't know how much memory 
    //                  we will need. Makes our programs more flexible,
    //                  especially when accepting user input.

    int *pNum = NULL;
    pNum = new int; //when using the "new" operator, it is good to also 
    //               "delete" the operand after usage is complete.
    *pNum = 21;
    cout << "address: " << pNum << '\n';
    cout << "value: " << *pNum << '\n';

    delete pNum; //if you don't "delete" what "new" created, you could get a memory leak
    
    char *pGrades = NULL; // to create a dynamic array
    int size;

    cout << "How many grades to enter in?: ";
    cin >> size;

    pGrades = new char[size]; //

    for(int i = 0; i < size; i++)
    {
        cout << "Enter grade #" << i + 1; ": ";
        cin >> pGrades[i];
    }
    for(int i = 0; i < size; i++)
    {
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}