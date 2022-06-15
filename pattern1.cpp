#include<iostream>
using namespace std;

int main(){
    int row,col;
    //rectangle pattern printing
    cout<<"Rectangle pattern"<<endl;
    cout<<"enter row"<<endl;
    cin>>row;
    cout<<"enter col"<<endl;
    cin>>col;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}