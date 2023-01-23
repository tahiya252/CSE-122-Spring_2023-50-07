#include <iostream>
using namespace std;
int main()
{
    int x,num,sum,mem;
    cout<< "Armstrong numbers are: "<<endl;
    for(int i=1; i<=10000; i++)
    {
        sum=0;
        num=i;
        mem=num;
        while(num>0)
        {
            x=num%10;
            num=num/10;
            sum=sum+x*x*x;
        }
        if(sum==mem)
        {
            cout<<mem<<endl;
        }
    }

    return 0;
}

