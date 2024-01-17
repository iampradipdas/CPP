#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number for pattern 1 : ";
    cin >> n;
    int i = 1;
    // Pattern 1
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }

    // Pattern 2
    i = 1;
    cout << "Enter number for pattern 2 : ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}