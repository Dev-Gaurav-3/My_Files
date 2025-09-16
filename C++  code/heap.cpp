#include <iostream>
using namespace std;

// Binary Heap => a complete binary tree is known as binary heap //
// max heap = parent value larger //
// min heap = child value larger //

int const n = 1e3;

void insertMinHeap(int minheap[], int &size, int value)
{

    size++;
    minheap[size] = value;
    int curr = size;

    while (curr / 2 > 0 && minheap[curr / 2] > minheap[curr])
    {
        swap(minheap[curr / 2], minheap[curr]);
        curr /= 2;
    }
}

void insertMaxHeap(int maxheap[], int &size, int value)
{
    size++;
    maxheap[size] = value;
    int curr = size;

    while (curr / 2 > 0 && maxheap[curr / 2] < maxheap[curr])
    {
        swap(maxheap[curr / 2], maxheap[curr]);
        curr /= 2;
    }
}

void deletionMinHeap(int minheap[], int &size)
{

    minheap[1] = minheap[size];
    size--;
    int curr = 1;

    while (2 * curr <= size)
    {
        int leftChild = 2 * curr;
        int rightChild = 2 * curr + 1;
        int minChild = leftChild;
        if (rightChild <= size && minheap[rightChild] < minheap[leftChild])
        {
            minChild = rightChild;
        }
        if (minheap[minChild] >= minheap[curr])
        {
            return;
        }
        swap(minheap[minChild], minheap[curr]);
        curr = minChild;
    }
}

void deletionMaxHeap(int maxheap[], int size)
{
    maxheap[1] = maxheap[size];
    size--;
    int curr = 1;

    while (2 * curr <= size)
    {
        int leftChild = 2 * curr;
        int rightChild = 2 * curr + 1;
        int minChild = leftChild;
        if (rightChild >= size && maxheap[rightChild] > maxheap[leftChild])
        {
            minChild = rightChild;
        }
        if (maxheap[minChild] <= maxheap[curr])
        {
            return;
        }
        swap(maxheap[minChild], maxheap[curr]);
        curr = minChild;
    }
}

void heapifyMin(int arr[], int size, int curr)
{
    while (2 * curr <= size)
    {
        int left = 2 * curr;
        int right = 2 * curr + 1;

        int minchild = left;

        if (right <= size && arr[right] < arr[minchild])
        {
            minchild = right;
        }

        if (arr[minchild] >= arr[curr])
        {
            return;
        }

        swap(arr[minchild], arr[curr]);
        curr = minchild;
    }
}

void heapifyMax(int arr[], int size, int curr)
{
    while (2 * curr <= size)
    {
        int left = 2 * curr;
        int right = 2 * curr + 1;

        int maxchild = left;

        if (right <= size && arr[right] > arr[maxchild])
        {
            maxchild = right;
        }

        if (arr[maxchild] <= arr[curr])
        {
            return;
        }

        swap(arr[maxchild], arr[curr]);
        curr = maxchild;
    }
}

// int main()
// {

//     // representation of heap using an array //
//     // 1) Root node will be at index 1
//     // 2) for node at index i , left child at 2*i and right child at 2*i+1
//     // 3) For node at index i , parent node is at i/2

//     // int minheap[n] = {-1, 10, 20, 30, 40, 50};
//     // int size = 5;

//     // int value;
//     // cout << "Write a value: ";
//     // cin >> value;

//     // insertMinHeap(minheap,size,value);

//     // for (int i = 0; i <= size; i++)
//     // {
//     //     cout << minheap[i] << " ";
//     // }
//     // cout << endl;

//     // deletionMinHeap(minheap, size); // always delete the root value in a heap //

//     // for (int i = 0; i <= size; i++)
//     // {
//     //     cout << minheap[i] << " ";
//     // }

//     // int maxheap[n] = {-1, 60, 50, 40, 30, 20, 10, 5};
//     // int size = 7;

//     // insertMaxHeap(maxheap,size,value);

//     // for (int i = 0; i <= size; i++)
//     // {
//     //     cout << maxheap[i] << " ";
//     // }

//     // deletionMaxHeap(maxheap, size);

//     // cout << endl;

//     // for (int i = 0; i <= size; i++)
//     // {
//     //     cout << maxheap[i] << " ";
//     // }

//     // HEAPIFY => arranging nodes in correct order so that they follow properties of min/max heap //

//     // GENERATE MIN HEAP //

//     int arr[n] = {-1, 60, 10, 80, 50, 5, 20, 70};
//     int size = 7;

//     // for (int i = 0; i < size; i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }
//     // cout << endl;

//     // for (int i = size / 2 + 1; i > 0; i--)
//     // {
//     //     // i -> parent Node
//     //     heapifyMin(arr, size, i);
//     // }

//     // for (int i = 0; i < size; i++)
//     // {
//     //     cout << arr[i] << " ";
//     // }

//     // Generate maxheap //

//     for (int i = 0; i <= size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     for (int i = size / 2 + 1; i > 0; i--)
//     {
//         // i -> parent Node
//         heapifyMax(arr, size, i);
//     }

//     for (int i = 0; i <= size; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }

void heapify(int arr[], int &n, int curr)
{

    while (2 * curr <= n)
    {
        int left = 2 * curr;
        int right = 2 * curr + 1;

        int maxchild = left;

        if (right <= n && arr[right] > arr[maxchild])
        {
            maxchild = right;
        }

        if (arr[maxchild] <= arr[curr])
        {
            return;
        }

        swap(arr[maxchild], arr[curr]);
        curr = maxchild;
    }
}

void remove(int arr[], int &n)
{
    swap(arr[1], arr[n]);
    n--;
    heapify(arr, n, 1);
}

void heapSort(int arr[], int n)
{

    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    while (n > 0)
    {
        remove(arr, n);
    }
}

int main()
{

    // HEAPSORT => 1) Convert the array into the heap data structure //
    // 2) one by one delete the root node pf the heap and reolace it with the last node in the heap and then heapify the root of the heap
    // In MAXHEAP we will get data in descending order and in MINHEAP data will be ascending //

    int n = 7;
    int arr[n] = {-1, 60, 10, 80, 50, 5, 20, 70};
    heapSort(arr, n);

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}