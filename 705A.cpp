#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        (i % 2 == 1) ? cout << "I hate " : cout << "I love ";
        (i != n) ? cout << "that " : cout << "it" << endl;
    }
}