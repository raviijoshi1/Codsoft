#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1;
    int guess = 0;
    cout<<"guess the numbers between 1 to 100 :- ";
    for(int i=0;i<100;i++)
    {
        cin>>guess;
        if(randomNumber>guess)
        {
            cout<<"ye bhai tune thoda kam guess krr lia fir se try krr !"<<endl;
        }
        else if(randomNumber<guess)
        {
            cout<<"ye bhai tune jyada guess krr lia fir se try krr !"<<endl;
        }
        else if(randomNumber==guess)
        {
            cout<<"ye huii na baat launde shi guess !"<<endl;
        }
        else
        {
            cout<<"bhai rhn de teri bss ki na hai ^_^ ";
        }
        cout<<"bhai random number ye tha !! -> "<<randomNumber;
    }
}
