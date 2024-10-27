// task 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "ENTER FIRST NATURAL NUMBER:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "THE SUM OF " << n << " NATURAL NUMBER IS:" << sum << endl;
    return 0;
}

