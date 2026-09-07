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
        return NULL;

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *tail = head;

    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *prev = tail->back;
    tail->back = NULL;
    prev->next = NULL;

    return head;
}

int main()
{
    vector<int> arr = {2, 5, 3, 4, 7};
    Node *head = arrayToDLL(arr);
    head = deletionOfHeadDLL(head);

    print(head);
    return 0;
}