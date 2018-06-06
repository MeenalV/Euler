//
// Created by Meenal on 06-06-2018.
//


#include <iostream>

using namespace std;

int
main ()
{
    long sumssquare = 0, sumofsquares = 0, diff = 0, i, a = 0;

    for (i = 1; i <= 100; i++)
    {
        a = a + i;
    }
    sumssquare = a * a;
    cout << sumssquare << "\n";

    for (i = 1; i <= 100; i++)
    {
        sumofsquares = sumofsquares + (i * i);
    }

    cout << sumofsquares << "\n";

    diff = sumssquare - sumofsquares;
    cout << diff;
    return 0;
}
