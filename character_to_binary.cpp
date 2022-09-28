#include<bits/stdc++.h>
using namespace std;
void printInbinary(int num)
{
    for(int i=10;i>=0;i--)
    {
        cout<<((num>>i)&1);


    }
    cout<<"\n";


}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)//print first n number in binary.
    {
        printInbinary(i);
    }
    for(char c='A';c>='Z';c++)
    {
        cout<<c<<endl;
        printInbinary(int(c));//insert ascii value of upper case letter
    }
     for(char c='a';c>='z';c++)
    {
        cout<<char(c)<<endl;
        printInbinary(int(c));//insert ascii value of upper case letter
    }
    for(char c='A';c>='Z';c++)
    {
        cout<<char(c |(1<<5))<<endl;//upercase to lowercase convertion
    }
    for(char c='a';c>='z';c++)
    {
        cout<<char(c &(~(1<<5)))<<endl;//lowercse to uppercase convertion
    }



}
