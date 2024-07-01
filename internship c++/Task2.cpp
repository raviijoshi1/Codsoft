#include<iostream>  // calculator
using namespace std;
int main(){
    int a,b,c;
    char op;
    cout<<"enter a operation (like + , - , * , / , %) :-  ";
    cin>>op;
    cout<<"enter first number :- ";
    cin>>a;
    cout<<"enter sec. number :- ";
    cin>>b;
    switch(op)
    {
        case'+':
        c=a+b;
        break;
        case'-':
        c=a-b;
        break;
        case'*':
        c=a*b;
        break;
        case'/':
        c=a/b;
        break;
        case'%':
        c=a%b;
        break;
        default:
        cout<<"invalid";
        break;
    }
    cout<< a << op << b <<" = "<< c;
}
