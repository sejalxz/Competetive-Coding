//find_product.cpp
//Find Product
//Basic Programming
//Author: sejalxz


#include <iostream>
using namespace std;

int main(){

    long int x= 1000000000;
    int n;
    long long int answer=1;
    cin>>n;
    int Arr[n];
    for(int i=0;i<n;i++)
        cin>>Arr[i];

    for(auto j: Arr){
        answer = (answer * j) % (x+7);
    }

    cout<<answer;
    return 0;
}
