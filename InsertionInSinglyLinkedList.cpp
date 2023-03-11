// Creation of the singly linked list
// Time complexity at the beginning => O(1)
// Time complexity at the end => O(N) after optimizing it becomes O(1)
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
    void insert_at_beg();
    void insert_at_end();
    void insert_at_index(int index);
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

void linked_list ::insert_at_beg()
{
    int data, choice = 1;
    Node *newNode;
    while (choice)
    {
        cout << "Enter the element at the beginning of the linked list" << endl;
        cin >> data;
        newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        cout << "Do you want to continue (0,1) " << endl;
        cin >> choice;
    }
}
void linked_list ::insert_at_end()
{
    int data, choice = 1;
    Node *newNode;
    while (choice)
    {
        cout << "Enter the element at the end of the linked list" << endl;
        cin >> data;
        newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
        cout << "Do you want to continue (0,1) " << endl;
        cin >> choice;
    }
}
void linked_list ::insert_at_index(int index)
{
    if (index == 0)
    {
        insert_at_beg();
    }
    else
    {
        int data;
        Node *newNode, *tempNode = head;
        for (int i = 0; i < index - 1; i++)
        {
            tempNode = tempNode->next;
        }
        cout << "Enter the element" << endl;
        cin >> data;
        newNode = new Node(data);
        newNode->next = tempNode->next;
        tempNode->next = newNode;
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

    list.insert_at_beg();
    cout << "Elements of the singly linked list after inserting element at the beginning  => " << endl;
    list.display();

    list.insert_at_end();
    cout << "Elements of the singly linked list after inserting element at the end  => " << endl;
    list.display();

    int index = 3;
    list.insert_at_index(index);
    cout << "Elements of the singly linked list after inserting element at the given position  => " << endl;
    list.display();
    return 0;
}