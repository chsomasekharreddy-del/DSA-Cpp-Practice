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

int length(Node *head)
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

int checkthenumber(Node *head, int val)
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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *deletionofhead(Node *head)
{
    if (head == NULL)
        return head;

    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *removeTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node *removeKelement(Node *head, int k)
{
    if (head == NULL)
        return head;

    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *removeelement(Node *head, int ele)
{
    if (head == NULL)
        return head;

    if (head->data == ele)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {

        if (temp->data == ele)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *insertionhead(Node *head, int val)
{
    Node *temp = new Node(val, head);

    return temp;
}

Node *insertiontail(Node *head, int val)
{
    if (head == NULL)
    {
        return new Node(val);
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    Node *newNode = new Node(val);
    temp->next = newNode;

    return head;
}

Node *insertionkinLL(Node *head, int ele, int k)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new Node(ele);
        }
        else
        {
            return head;
        }
    }

    if (k == 1)
    {
        Node *newHead = new Node(ele, head);
        return newHead;
    }

    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        if (count == k - 1)
        {
            Node *posele = new Node(ele);
            posele->next = temp->next;
            temp->next = posele;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    vector<int> nums = {2, 5, 6, 1, 7};
    Node *head = array2LL(nums);
    head = insertionkinLL(head, 20, 4);
    print(head);

    return 0;
}