// strings -: 

#include<iostream>
using namespace std;
int main()
{
    string str="ShivamShrivastav";
    cout<<str.substr(1)<<endl;   // hivam

    cout<<str.substr(3)<<endl;   // vam

    cout<<str.substr(0,3)<<endl; // Shi

    cout<<str.substr(1,3)<<endl; // hiv

    cout<<str.substr(2,1)<<endl; // i

    cout<<str.substr(9,4)<<endl; // ivas

    cout<<str.substr(6,5)<<endl;// Shriv

    string left = str.substr(13,3);
    cout<<left<<endl; // tav

    cout<<str.substr(5)<<endl; 

        cout<<str.substr(5+1)<<endl;

}