// Creation of the singly linked list
// Time complexity at the beginning => O(1)
// Time complexity at the end => O(N)
// Time complexity at the given position => O(N)
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class linked_list
{
private:
    Node *head, *tail;

public:
    linked_list()
    {
        this->head = NULL;
    }
    void create_list();
    void delete_at_beg();
    void delete_at_end();
    void delete_at_index(int index);
    void display();
};
void linked_list ::create_list()
{
    Node *tempNode, *newNode;
    int data, choice = 1;
    while (choice)
    {
        cout << "Enter the data in the linked list" << endl;
        cin >> data;
        newNode = new Node(data);
        if (head == NULL)
        {
            head = tempNode = tail = newNode;
        }
        else
        {
            tempNode->next = newNode;
            tempNode = newNode;
            tail = tempNode;
        }
        cout << "Do you want to continue (0,1) " << endl;
        cin >> choice;
    }
}

void linked_list ::delete_at_beg()
{
    Node *tempNode = head;
    head = tempNode->next;
    delete tempNode;
}
void linked_list ::delete_at_end()
{
    Node *tempNode = head, *prevNode;
    if (tempNode->next == NULL)
    {
        delete_at_beg();
    }
    else
    {
        while (tempNode->next != NULL)
        {
            prevNode = tempNode;
            tempNode = tempNode->next;
        }
        prevNode->next = NULL;
        delete tempNode;
    }
}
void linked_list ::delete_at_index(int index)
{
    Node *tempNode = head, *prevNode;
    int i = 0;
    if (index == 0)
    {
        delete_at_beg();
    }
    else
    {
        while (i < index)
        {
            prevNode = tempNode;
            tempNode = tempNode->next;
            i++;
        }
        prevNode->next = tempNode->next;
        delete tempNode;
    }
}
void linked_list::display()
{
    Node *tempNode = head;
    while (tempNode != NULL)
    {
        cout << tempNode->data << "\t";
        tempNode = tempNode->next;
    }
    cout << endl;
}
int main(void)
{
    linked_list list;

    list.create_list();
    cout << "Elements of the singly linked list are => " << endl;
    list.display();

    list.delete_at_beg();
    cout << "Elements of the singly linked list after deleting the element from the beginning => " << endl;
    list.display();

    list.delete_at_end();
    cout << "Elements of the singly linked list after deleting the element from the end => " << endl;
    list.display();

    int index = 3;
    list.delete_at_index(index);
    cout << "Elements of the singly linked list after deleting the element at the index " << index << " are => " << endl;
    list.display();

    return 0;
}