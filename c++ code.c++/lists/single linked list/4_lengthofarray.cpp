#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *array2LL(vector<int> jay)
{
    Node *head = new Node(jay[0]);
    Node *mover = head;

    for (int i = 1; i < jay.size(); i++)
    {
        Node *temp = new Node(jay[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int lengthOfArray(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp != nullptr)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

int main()
{
    vector<int> jay = {6, 7, 2, 1, 2, 4};
    Node *head = array2LL(jay);
    cout << lengthOfArray(head);
}