#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int greatMarks = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > greatMarks)
        {
            greatMarks = arr[i];
        }
    }
    cout << "The student who get most number is: " << greatMarks;
    return 0;
}