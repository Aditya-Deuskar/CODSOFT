#include<iostream>
using namespace std;
float addition(int a,int b)
{
    return a+b;
}

float substraction(int a,int b)
{
    return a-b;
}

float multiplication(int a,int b)
{
    return a*b;
}

float division(int a,int b)
{
    return a/b;
}
int main(){
    int a,b,ch;
    do
    {    
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;
    cout<<"1. Perform Addition"<<endl;
    cout<<"2. Perform Substraction"<<endl;
    cout<<"3. Perform Multiplication"<<endl;
    cout<<"4. Perform Division"<<endl;
    cout<<"5. Exit"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<addition(a,b)<<endl;
            break;
        
        case 2:
            cout<<substraction(a,b)<<endl;
            break;
        
        case 3:
            cout<<multiplication(a,b)<<endl;
            break;
        
        case 4:
            cout<<division(a,b)<<endl;
            break;
    }
    } while (ch!=5);
    return 0;
}