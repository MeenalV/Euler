//
// Created by Meenal on 06-06-2018.
//

#include <iostream>


using namespace std;

int MAX=0;

int Palindrome(int n)

{

    int b,a,number=0,e;

    b=n;

    // cout<<MAX<<"\n";

    // if (MAX<number)

    // {
    //     MAX=b;

    //     cout<<"\nHello "<< MAX<<"\n";

    // }

    while(n!=0)

    {

        a = n%10;

        n = n/10;

        number = number*10 + a;

        //b=number;

    }

    if (number==b)

    {

        //cout<<number<<"\n";

        e= number;

        if (MAX<number)

        {

            MAX=e;

            cout<<"\nHello "<< MAX<<"\n";

        }

    }

    //<<b<<"\n"<<n<< "\n Done \n";}

    //else

    //cout<<"Bye";



    return n;

}


int main()

{

    long i=999,j=999;

    long d[10000];

    for (i=999;i>0;i--)

        for (j=999;j>0;j--)

            Palindrome(i*j);

    //Palindrome(1);

    //cout<<"Hello World";


    return 0;

}

