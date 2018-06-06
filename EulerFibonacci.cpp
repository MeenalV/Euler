//
// Created by Meenal on 06-06-2018.
//

#include <iostream>

using namespace std;

int main()
{
    long a[50],total=0;
    int i=2, n;
    a[0]=a[1]=1;


    for (i=2;i<50;i++)
    {

        a[i]=a[i-1]+a[i-2];
        if (a[i]>=4000000)
        {
            cout<<i-1<<"\n";
            n=i-1;
            goto exit;
        }
    }

    exit:
    cout<<n<<"\n";
    cout<<"this is the index till which we actually need to loop "<<"\n";

    for(i=1;i<=n;i++)
    {
        if (a[i]%2==0)
            total=total + a[i];
    }

    cout<<total<<"\n";
}