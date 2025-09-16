#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{

    vector<int> pushed = {1, 2, 3, 4, 5};
    vector<int> popped = {4, 3, 5, 1, 2};

    stack<int> st;
    int j = 0;
    for (int i : pushed)
    {
        st.push(i);
        if (st.top() == popped[j])
        {
            while (!st.empty() && popped[j] == st.top() && j < popped.size())
            {
                st.pop();
                j++;
            }
        }
    }

    cout << st.empty();

    return 0;
}
