#include <iostream>
using namespace std;

int main()
{
    // Null value = a special value that means something has no value.
    //              When a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointer)

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when determining if an address
    // was successfully assigned to a pointer 

    // if a pointer = nullptr, dereferencing it with * causes undefined behavior
    // pointing to free memory (memory not is use) will also cause undefined behavior

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    //to check if pointer has valid address or is a null pointer
    if(pointer == nullptr)
    {
        cout << "address was not assigned!\n";
    }
    else
    {
        cout << "address assigned!\n";
    }

    return 0;
}