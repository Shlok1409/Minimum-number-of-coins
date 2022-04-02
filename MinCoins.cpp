#include<bits/stdc++.h>
using namespace std;

vector<int> minPartition(int N)
{
    vector<int> v;

    int r;

    if(N >= 2000)
    {
        r = N/2000;
        for(int i = 0; i < r ; i++)
            v.push_back(2000);
        N = N % 2000;
    }

    if(N >= 500)
    {
        r = N/500;
        for(int i = 0; i < r ; i++)
            v.push_back(500);
        N = N % 500;
    }

    if(N >= 200)
    {
        r = N/200;
        for(int i = 0; i < r ; i++)
            v.push_back(200);
        N = N % 200;
    }

    if(N >= 100)
    {
        r = N/100;
        for(int i = 0; i < r ; i++)
            v.push_back(100);
        N = N % 100;
    }

    if(N >= 50)
    {
        r = N/50;
        for(int i = 0; i < r ; i++)
            v.push_back(50);
        N = N % 50;
    }

    if(N >= 20)
    {
        r = N/20;
        for(int i = 0; i < r ; i++)
            v.push_back(20);
        N = N % 20;
    }

    if(N >= 10)
    {
        r = N/10;
        for(int i = 0; i < r ; i++)
            v.push_back(10);
        N = N % 10;
    }

    if(N >= 5)
    {
        r = N/5;
        for(int i = 0; i < r ; i++)
            v.push_back(5);
        N = N % 5;
    }

    if(N >= 2)
    {
        r = N/2;
        for(int i = 0; i < r ; i++)
            v.push_back(2);
        N = N % 2;
    }

    if(N >= 1)
    {
        r = N/1;
        for(int i = 0; i < r ; i++)
            v.push_back(1);
        N = N % 1;
    }

    return v;
}

int main()
{
    vector<int> v;
    int n;
    cout<<"Enter Amount : ";
    cin>>n;

    v = minPartition(n);
    cout<<"Denominations Of Coins For Entered Amount : ";
    for(int i = 0; i < v.size() ; i++)
        cout<<v[i]<<" ";

    return 0;
}
