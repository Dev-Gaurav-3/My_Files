#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main()
{
    ListNode *head = new ListNode(9);
    head->next = new ListNode(9);
    head->next->next = new ListNode(9);
    ListNode *temp = head;
    vector<int> v;
    while (temp != NULL)
    {
        v.push_back(temp->val);
        temp = temp->next;
    }
    int carry = 0;

    reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        int sum = 2 * v[i] + carry;
        v[i] = sum % 10;
        carry = sum / 10;
    }

    while (carry > 0)
    {
        v.push_back(carry % 10);
        carry /= 10;
    }

    ListNode *dummy = new ListNode(0);
    ListNode *ans = dummy;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        ans->next = new ListNode(v[i]);
        ans = ans->next;
    }

    return 0;
}