#include<iostream>
using namespace std;
int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int x;
    cout<<"Enter x : ";
    cin>>x;
    int count = 0;

    for(int i=0; i<=9; i++){
    if(arr[i]>x) count++;
    }
    cout<<count<<" ";
}