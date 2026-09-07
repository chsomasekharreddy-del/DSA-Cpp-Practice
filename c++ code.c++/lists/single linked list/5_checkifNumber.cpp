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

Node *a2l(vector<int> &nums)
{
    Node *head = new Node(nums[0]);
    Node *mover = head;

    for (int i = 1; i < nums.size(); i++)
    {
        Node *temp = new Node(nums[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int len(Node *head)
{
    Node *temp = head;
    int count = 0;

    while (temp != nullptr)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

int checkifnumber(Node *head, int val)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        if (temp->data == val)
            return 1;
        temp = temp->next;
    }
    return 0;
}

int main()
{
    vector<int> nums = {6, 5, 4, 3, 2};
    Node *head = a2l(nums);
    cout << checkifnumber(head, 5);
}