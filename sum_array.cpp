#include<iostream>

using namespace std;

int main(){

    int sum=0;


    int a[]={1,2,3,4,5,6};


    int n=sizeof(a)/sizeof(int);


    for(int i=0;i<n;i++){
        sum+=a[i];
    }

    cout<<"SUM of Elements are :"<<sum<<endl;

    return 0;
}