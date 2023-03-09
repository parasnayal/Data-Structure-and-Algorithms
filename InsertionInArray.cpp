// Insertion in an array
#include <iostream>
#define CAPACITY 10
using namespace std;
void insertion_at_beg(int array[], int size, int element);
void insertion_at_end(int array[], int size, int element);
void insertion_at_pos(int array[], int size, int element, int index);
void display(int array[], int size);
int main(void)
{
    int size = 5;
    int array[size] = {5, 10, 15, 20, 25};
    cout << "Elements of the array are => " << endl;
    display(array, size);
    int element = 2;
    size++;
    insertion_at_beg(array, size, element);
    cout << "Elements of the the array after inserting the element at the beginning => " << endl;
    display(array, size);

    element = 30;
    size++;
    insertion_at_end(array, size, element);
    cout << "Elements of the the array after inserting the element at the end => " << endl;
    display(array, size);

    element = 100;
    size++;
    int index = 3;
    insertion_at_pos(array, size, element, index);
    cout << "Elements of the the array after inserting the element at the index => " << index << " is => " << endl;
    display(array, size);
    return 0;
}
void insertion_at_beg(int array[], int size, int element)
{
    if (size >= CAPACITY)
    {
        cout << "Array is full" << endl;
        return;
    }
    else
    {
        for (int i = size - 1; i >= 0; i--)
        {
            if (i == 0)
            {
                array[i] = element;
            }
            else
            {
                array[i] = array[i - 1];
            }
        }
    }
}
void insertion_at_end(int array[], int size, int element)
{
    if (size >= CAPACITY)
    {
        cout << "Array is full" << endl;
        return;
    }
    else
    {
        array[size - 1] = element;
    }
}
void insertion_at_pos(int array[], int size, int element, int index)
{
    if (size >= CAPACITY)
    {
        cout << "Array is full" << endl;
        return;
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            if (i == index)
            {
                array[i] = element;
            }
            else
            {
                array[i] = array[i - 1];
            }
        }
    }
}
void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
    cout << endl;
}