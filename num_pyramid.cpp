#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = space; j >= 1; j--)
        {
            cout << " ";
        }
        space--;
        int count = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}