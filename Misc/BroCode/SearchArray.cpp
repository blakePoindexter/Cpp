#include <iostream>
using namespace std;

int searchArray(int array[], int size, int element);

int main()
{
    int x = 0;
    int input = 0;
    int index;
    int myNum;
    int numbers[] = {};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    while(x < 5)
    {
        cout << "Enter an integer (-1 to quit): ";
        cin >> numbers[x];  
        x += 1;
    }

    cout << "Enter a number to search for: ";
    cin >> myNum;   
    
    index = searchArray(numbers, size, myNum);

    if (index != -1)
    {
        cout << myNum << " is at index " << index;
    }
    else
    {
        cout << myNum << " is not in the array";
    }

    return 0;
}

int searchArray(int array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;

}