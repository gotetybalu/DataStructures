#include <iostream>
using namespace std;
int fun1(int num)
{
    int decimal=0,weight=1,rem;
    while(num!=0)
    {
        rem=num%10;
        decimal=decimal+rem*weight;
        weight=weight*2;
        num=num/10;
    }
    return decimal;
}
string fun2(int num)
{
    int rem,i=0;
    string k="";
    while(num!=0)
    {
        rem=num%2;
        k=to_string(rem)+k;
        num=num/2;
        i++;
    }
    return k;
}
int main()
{
    cout<<"what type of conversion do you want?"<<endl;
    cout<<"1.Binary to decimal"<<endl;
    cout<<"2.Decimal to Binary"<<endl;
    while(1)
    {
        int option;
        cout<<"choose option";
        cin>>option;
        switch(option)
        {
            case 1: int b;
                    cout<<"Enter binary number:";
                    cin>>b;
                    cout<<fun1(b)<<endl;
                    break;
            case 2: int c;
                    cout<<"Enter decimal number";
                    cin>>c;
                    cout<<fun2(c)<<endl;
                    break;
            default:cout<<"please choose correct option:"<<endl;
        }
    }
    
    
}