#include <iostream>
#include <queue>
using namespace std;

void f(priority_queue<int, vector<int>, greater<int>> &pq, int k)
{

    while (k--)
    {
        int n = pq.top();
        pq.pop();
        int m = pq.top();
        pq.pop();
        pq.push(n * m);
    }
}

int main()
{

    // priority_queue<int> pq; // MAx Heap by Default //

    // // To create a Min Heap //

    // priority_queue<int, vector<int>, greater<int>> pq2; // This is the syntax for min heap //

    // pq.push(1);
    // pq.push(2);
    // pq.push(3);

    // while (!pq.empty())
    // {
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }

    // Q1) Given an array of n integers. You are supposed to perform k operations on it. At each operation, the smallest 2
    // elements of the array are removed from the array, multiplied by each other, and the product is added back to the array.
    // Return the largest element of the array after the k operations.
    // It is guaranteed that at least one element will remain after the k operations.

    vector<int> arr = {2, 4, 3, 1, 5};
    int k = 3;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int ele : arr)
    {
        pq.push(ele);
    }
    f(pq, k);
    int max = -1;
    while (!pq.empty())
    {
        if (pq.top() > max)
            max = pq.top();
        pq.pop();
    }

    cout << max;

    return 0;
}
