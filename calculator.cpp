#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class CD
{
char choice;
int a,b,c;

public:
    CD()
    {
        cout<<"\nEnter operation to perform(+,-,*,/,%) : ";
        cin>>choice;
        cout<<"enter two values:";
        cin>>a>>b;
        switch(choice)
        {
            case '+':
            {
                c=a+b;
                break;
            }
            case '-':
            {
                c=a-b;
                break;
            }
            case '*':
            {
                c=a*b;
                break;
            }
            case '/':
            {
                c=a/b;
                break;
            }
            case '%':
            {
                c=a%b;
                break;
            }
        }
    }
void operation()
{
    switch(choice)
    {
        case '+':
        {
            cout<<"Sum of "<<a<<" and "<<b<<" is : "<<c;
            break;
        }
        case '-':
        {
            cout<<"Difference of "<<a<<" and "<<b<<" is : "<<c;
            break;
        }
        case '*':
        {
            cout<<"Multiplication of "<<a<<" and "<<b<<" is : "<<c;
            break;
        }
        case '/':
        {
            cout<<"Division of "<<a<<" and "<<b<<" is : "<<c;
            break;
        }
        case '%':
        {
            cout<<"Modulus of "<<a<<" and "<<b<<" is : "<<c;
            break;
        }
        default:
        {
            cout<<"you have entered wrong operator";
        }
    }
}
~CD()
{
    cout<<"\nDestructor called";
}
};
int main()
{
    int i=1,str;
    do
    {
        system("clear");
        CD obj;
        obj.operation();
        cout<<"\nDo you want to perform other operation(yes 1,no 0):";
        cin>>str;
        if(str==1)
          continue;
        else if(str==0)
          break;
    }while(str!=0);
}