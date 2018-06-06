//
// Created by Meenal on 06-06-2018.
//


#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a , b;
    long d,e;
    float c;

    for(a=100;a<1000;a++)
        for (b=100;b<1000;b++)
        {
            d = a*a + b*b;
            c = sqrt(d);
            e = a+b+c;
            //cout<<c<<"\n";
            if (e==1000)
            {
                cout << a<<"\t"<<b<<"\t"<<c<<"\n";
                cout << 375*200*425;
            }
        }

    // c= sqrt(100);
    // cout<<c;

    return 0;
}
