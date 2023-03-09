// Deletion in an array
#include <iostream>
using namespace std;
void delete_at_beg(int array[], int size);
void delete_at_pos(int array[], int size, int index);
void display(int array[], int size);
int main(void)
{
    int size = 8;
    int array[size] = {5, 10, 15, 20, 25, 30, 35, 40};
    cout << "Elements of the array are => " << endl;
    display(array, size);

    size--;
    delete_at_beg(array, size);
    cout << "Elements of the array after deleting the array from the beginning are => " << endl;
    display(array, size);

    size--;
    int index = 3;
    delete_at_pos(array, size, index);
    cout << "Elements of the array after deleting the array from the index " << index << " are => " << endl;
    display(array, size);
    return 0;
}
void delete_at_beg(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = array[i + 1];
    }
}
void delete_at_pos(int array[], int size, int index)
{
    for (int i = index; i < size; i++)
    {
        array[i] = array[i + 1];
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