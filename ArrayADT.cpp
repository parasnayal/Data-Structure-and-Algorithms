// Array as an abstract data type
// We know that programming language provide the get and set method for the array
#include <iostream>
using namespace std;
class Array
{
private:
    int size, capacity, *ptr;

public:
    Array(int capacity, int size)
    {
        this->capacity = capacity;
        this->size = size;
        this->ptr = new int[capacity];
    }
    void set(Array *array_obj_ptr);
    int get(Array *array_obj_ptr, int index);
    void display(Array *array_obj_ptr);
};
void Array ::set(Array *array_obj_ptr)
{
    int data;
    cout << "Enter the element of the array " << endl;
    for (int i = 0; i < array_obj_ptr->size; i++)
    {
        cin >> array_obj_ptr->ptr[i];
        // cin>>*(array_obj_ptr->ptr+i);
    }
}
int Array ::get(Array *array_obj_ptr, int index)
{
    int element = array_obj_ptr->ptr[index];
    return element;
}
void Array ::display(Array *array_obj_ptr)
{
    for (int i = 0; i < array_obj_ptr->size; i++)
    {
        cout << array_obj_ptr->ptr[i] << "\t";
    }
    cout << endl;
}
int main(void)
{
    int capacity = 10;
    int size = 5;
    int index = 2;
    Array array_obj(capacity, size);
    array_obj.set(&array_obj);

    cout << "Elements of the array are => " << endl;
    array_obj.display(&array_obj);

    int elementAtIndex = array_obj.get(&array_obj, index);
    cout << "Element of the array at the index " << index << " is => " << elementAtIndex << endl;
    return 0;
}