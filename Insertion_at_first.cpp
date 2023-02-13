#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data=val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node*n = new node(val);
    n->next=head;
    head=n;
}


void insertAtTail(node *&head, int val)
{
    node*n=new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}


void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head,4);
    display(head);
    return 0;
}


/**
 * @brief 
 * insertathead{
 *   in a given linked lsit we need to insert a node at the first position.
 *   to do this, we need to make a node in which we will insert the data and it should point towards the first node
 *   of the current linked list (accessed through head)
 *   and then we need to change the head pointer pointing towards the new node.
 *   (n has become the first node.)
 * }
 * 
 */