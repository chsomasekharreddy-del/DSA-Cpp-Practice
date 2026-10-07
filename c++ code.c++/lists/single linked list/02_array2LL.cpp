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

Node *array2LL(vector<int> &nums)
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

int main()
{
    vector<int> nums = {4, 3, 6, 7, 1};
    Node *head = array2LL(nums);
    cout << head->next->next->data;
}