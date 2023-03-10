// Creation of the singly linked list
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
    Node *head;

public:
    linked_list()
    {
        this->head = NULL;
    }
    void create_list();
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
            head = tempNode = newNode;
        }
        else
        {
            tempNode->next = newNode;
            tempNode = newNode;
        }
        cout << "Do you want to continue (0,1) " << endl;
        cin >> choice;
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
    return 0;
}