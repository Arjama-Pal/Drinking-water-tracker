#include<iostream>
using namespace std;

float input_amt()
{
    float cup;
    cout<<"\nHow many cups in the last hour?: ";
    cin>>cup;
    return cup;
}
float conditions()
{
    float h;
    cout<<"\nHow many hours do you stay awake?: ";
    cin>>h;
    return h;
}
void output(float total)
{
    cout<<"\nTotal water intake (approx.): "<<total<<" mL"<<endl;
    if(total<2000)
    {
        cout<<"\nYou drank less than 2 lit of water! ";
        cout<<"\nYou're dehydrated! :(";
    }
    else
    {
        cout<<"\nGood work! ";
        cout<<"\nStay dehydrated everyday! :)";
    }
}
int main()
{
    input:
    float cup, total=0, hr, tcup=0;
    char ch;
    hr = conditions();
    for(int i=1; i<=hr; i++)
    {
        cup = input_amt();
        tcup+=cup;
    }
    total = tcup*250;
    output(total);
    cout<<"\nAre you registered for the next day?(Y/N): ";
    cin>>ch;
    if(ch=='Y'||ch=='y')
    goto input;
    return 0;
}
