#include<iostream>
using namespace std;

int main()
{
    char dir[10];
    int left, right;

    cout<<"What's your direction  i,e East, West"<<endl;
    cin>>dir;

    cout<<"Enter number of traffic from Left: "<<endl;
    cin>>left;

    cout<<"Enter Number of traffic from Right: "<<endl;
    cin>>right;

    if(left==0 && right==0)
        cout<<"GREEN LIGHT "<<endl;
    if(left<=9 && right<=9)
        cout<<"Ready For Go and YELLOW LIGHT "<<endl;
    if(left>9 && right>9)
        cout<<"RED LIGHT "<<endl;

        return 0;
}
