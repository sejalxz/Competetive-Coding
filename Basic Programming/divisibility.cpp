//divisibility.cpp
//Divisibility
//Basic Programming
//Author: sejalxz

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    long int N;
    cin>>N;
    
    long int Arr[N];
    
    for(int i=0;i<N;i++)
        cin>>Arr[i];
	
    if(Arr[N-1]%10==0)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}