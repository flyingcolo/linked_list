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
    return 0;
}

/**
 * @brief head pointer stores the address of the first nide of ll.
 * null->last node.
 * class node{
 *     pointer is pointing next node.=>node* next
 *     constructor (node) and giving it some value and putting null in next field.   
 * }
 * insertattail{
 *     node*&head - by reference
 *     node*n=new node(val) => a node whose data field contains val and next contains null.
 *     to traverse the linked list we need a iterator, so we use a ponter node*temp, when temp->next is null we will 
 *     know that it's the last element. and when we reach that point we add n to the next of the temp.
 *     
 *     if head is null,then head=n, head becomes first node.
 * }
 * 
 * display{
 *     to display the linked list.
 *     we need to make temp pointer which starts with head. and traverse till temp is not equal to null
 *     and print.
 * }
 * 
 * 
 */
 