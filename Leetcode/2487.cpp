#include <bits/stdc++.h>
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
    ListNode *head = new ListNode(5);
    head->next = new ListNode(2);
    head->next->next = new ListNode(13);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(8);

    stack<int> st;

    ListNode *temp = head;
    while (temp != NULL)
    {
        int x = temp->val;
        if (st.empty())
        {
            st.push(x);
        }
        else
        {
            if (x <= st.top())
            {
                st.push(x);
            }
            else
            {
                while (!st.empty() && x > st.top())
                {
                    st.pop();
                }
                st.push(x);
            }
        }
        temp = temp->next;
    }

    stack<int> st2;

    while (!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }

    ListNode *dummy = new ListNode(0);
    temp = dummy;

    while (!st2.empty())
    {
        temp->next = new ListNode(st2.top());
        temp = temp->next;
        st2.pop();
    }

    return 0;
}
