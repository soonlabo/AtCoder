#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/**
 * @file code.cpp
 * @brief ABC156-A
 * @author soon
 * @date 2020.02.22
 */
int main()
{
    int N;
    cin >> N;

    vector<int> X(N);

    for (int i = 0; i < N; i++)
    {
        cin >> X.at(i);
    }

    int A = 0;

    for (int i = 0; i < N; ++i)
    {

        A += ((X[i] - N) * (X[i] - N));
    }

    cout << A << endl;
}