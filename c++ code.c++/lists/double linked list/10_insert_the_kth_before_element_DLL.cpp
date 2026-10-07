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

    // If k is greater than the list size
    if (temp == NULL)
    {
        return head;
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

    temp->next = NULL;
    temp->back = NULL;

    delete temp;
}

Node *insertionbeforehead(Node *head, int val)
{
    Node *newHead = new Node(val, head, NULL);

    head->back = newHead;

    return newHead;
}

Node *insertionafterhead(Node *head, int val)
{
    Node *newafterhead = new Node(val, head->next, head);

    head->next = newafterhead;
    newafterhead->back = head;

    return head;
}

Node *insertionbeforetail(Node *head, int val)
{
    if (head->next == NULL)
    {
        return insertionbeforehead(head, val);
    }

    Node *tail = head;

    while (tail->next != NULL)
    {
        tail = tail->next;
    }

    Node *prev = tail->back;
    Node *newNode = new Node(val, tail, prev);
    prev->next = newNode;
    tail->back = newNode;

    return head;
}

Node *insertionaftertail(Node *head, int val)
{
    if (head->next == NULL)
    {
        return insertionafterhead(head, val);
    }

    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *newNode = new Node(val, NULL, tail);
    tail->next = newNode;
    newNode->back = tail;

    return head;
}

Node *insertKthelementDLL(Node *head, int k, int val)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(val);
        }
        else
        {
            return head;
        }
    }

    if (k == 1)
    {
        Node *newNode = new Node(val, head, NULL);
        return newNode;
    }

    Node *tail = head;
    int count = 0;

    while (tail->next != NULL)
    {
        tail = tail->next;
        count++;
        Node *prev = tail->back;
        if (count == k - 1)
        {
            Node *newNode = new Node(val, tail, prev);
            prev->next = newNode;
            tail->back = newNode;
        }
    }

    return head;
}

int main()
{
    vector<int> arr = {12, 5, 8, 7};
    Node *head = arrayToDLL(arr);
    head = insertKthelementDLL(head, 4, 10);
    print(head);
    return 0;
}