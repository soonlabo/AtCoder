#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, A;
    cin >> N;

    if (N % 2 == 0)
    {
        A = N / 2;
    }
    else
    {
        A = N / 2 + 1;
    }

    cout << A << endl;
}