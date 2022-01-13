#include <iostream>
#include <vector>

using namespace std;

int BinarySearch(int element, const int *v, int size)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int middle = (left + right) / 2;

        if (v[middle] == element)
        {
            return middle;
        }
        else if (v[middle] < element)
        {
            left = middle + 1;
        }
        else if (v[middle] > element)
        {
            right = middle - 1;
        }
    }

    return -1;
};

void Print(const vector<int> &v)
{
    cout << "[";
    for (int x : v)
    {
        cout << x << ' ';
    }
    cout << "]\n";
};

int main()
{
    //int  kNotFound = -1;
    vector<int> v{11, 22, 33, 44, 55};
    Print(v);

    cout << "Enter the Element to search? :";
    int x;
    cin >> x;

    int pos = BinarySearch(x, v.data(), v.size());
    if (pos == -1)
    {
        cout << "Element not found.\n";
    }
    else
    {
        cout << "Element found at index " << pos << ".\n";
    }
}