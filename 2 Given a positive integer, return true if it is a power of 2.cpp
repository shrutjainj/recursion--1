#include<iostream>
using namespace std;
bool power(int n)
{
    if(n==1)
    {
        return true;
    }
    if(n%2 == 0)
    {
        return power(n/2);
    }
    else
    {
        return false;
    }
}
int main()
{
    cout<<power(4);
}