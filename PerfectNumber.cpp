#include <iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<< "Enter number: ";
    cin>>n;
    for(int i=1; i<n; i++)
    {
        if(n%i==0){
            sum=sum+i;
        }
        else{
            sum=sum;
        }
    }
    if(n==sum)
    {
        cout<<n<<" is perfect number!!"<<endl;
    }
    else{
        cout<< "It is not a perfect number"<<endl;
    }
    return 0;
}
