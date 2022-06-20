#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int orginal = n;
    int sum = 0;
    while(n>0){
        int lastdigit = n%10;
        sum+= pow(lastdigit,3);
        n = n/10;
    }
    if(sum==orginal){
        cout<<"Number is armstrong"<<endl;
    }
    else{
        cout<<"not armstrong"<<endl;
    }
    return 0;
}