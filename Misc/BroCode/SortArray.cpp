//Code for sorting a one-dimensional array.
//Good example of nested for loops**
//Can sort in ascending and descending order, with minor modifications required.

#include <iostream>
using namespace std;

void sort(int array[], int size);

int main()
{
    int array[] = {10, 1, 8, 7, 6, 2, 3, 5, 4, 9};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    for (int element: array)
    {
        cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1]) // if descending order is desired, change > to <
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}