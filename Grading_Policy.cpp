#include <iostream>
using namespace std;
int main()
{
    double num;
    cout<< "Enter students obtained number: ";
    cin>>num;

    if(num>=80)
    {
        cout<< "Student got A+"<<endl;
    }
    else if(num>=75&&num<=79)
    {
        cout<< "Student got A"<<endl;
    }
    else if(num>=70&&num<=74)
    {
        cout<< "Student got A-"<<endl;
    }
    else if(num>=65&&num<=69)
    {
        cout<< "Student got B+"<<endl;
    }
    else if(num>=60&&num<=64)
    {
        cout<< "Student got B"<<endl;
    }
    else if(num>=55&&num<=59)
    {
        cout<< "Student got B-"<<endl;
    }
    else if(num>=50&&num<=54)
    {
        cout<< "Student got C+"<<endl;
    }
    else if(num>=45&&num<=49)
    {
        cout<< "Student got C"<<endl;
    }
    else if(num>=40&&num<=44)
    {
        cout<< "Student got D"<<endl;
    }
    else if(num<40){
        cout<< "Failed."<<endl;
    }
    return 0;
}
