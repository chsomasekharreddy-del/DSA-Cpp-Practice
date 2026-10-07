#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1)
    {
        data = data1;
        next = NULL;
        back = NULL;
    }
};

Node *arrayToDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], NULL, prev);
        prev->next = temp;
        prev = prev->next;
    }
    return head;
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";

        head = head->next;
    }
}

Node *deletionOfHeadDLL(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *prev = head;
    head = head->next;
    head->back = NULL;
    prev->next = NULL;
    delete prev;

    return head;
}

Node *deletionTail(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *prev = temp->back;
    temp->back = NULL;
    prev->next = NULL;
    delete temp;
    return head;
}

Node *deletionofkposition(Node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        if (count == k)
        {
            break;
        }
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *front = temp->next;

    if (prev == NULL)
    {
        return deletionOfHeadDLL(head);
    }
    else if (front == NULL)
    {
        return deletionTail(head);
    }
    else
    {
        prev->next = front;
        front->back = prev;
        temp->next = NULL;
        temp->back = NULL;
        delete temp;
    }
    return head;
}

void deleteNode(Node *temp)
{
    Node *prev = temp->back;
    Node *front = temp->next;

    if (front == NULL)
    {
        prev->next = NULL;
        temp->back = NULL;
        delete temp;
        return;
    }
    prev->next = front;
    front->back = prev;

    temp->next = temp->back = NULL;
    delete temp;
}

int main()
{
    vector<int> arr = {2, 5, 3, 4, 7};
    Node *head = arrayToDLL(arr);
    deleteNode(head->next);

    print(head);
    return 0;
}