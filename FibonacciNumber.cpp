#include <iostream>
using namespace std;
int main()
{
    int num, a=0, b=1, sum=0;
    cout<< "Enter number: ";
    cin>>num;
    cout<<endl;

    cout<< "Fibonacci series---"<<endl;
    for(int i=0; i<num; i++)
    {
        cout<< " "<<a<<endl;
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
}

