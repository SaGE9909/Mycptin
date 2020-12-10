#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int array[4],i=0;
    cout<<"Enter elements:";
    for(i;i<4;i++)
    {
        cin>>array[i];
    }
    cout<<"you entered:";
    for(int i=0;i<4;i++)
    {
        cout<<array[i]<<endl;
    }
    return 0;
}
