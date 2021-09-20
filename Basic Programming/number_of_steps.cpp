//number_of_steps.cpp
//Number Of Steps
//Basic Programming
//Author: sejalxz
 
#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
 
    long int N;
    long int count =0;
    cin>>N;
 
    long int A[N];
    long int B[N];
 
    for(int i=0;i<N;i++)
        cin>>A[i];
 
    for(int i=0;i<N;i++)
        cin>>B[i];    
 
    long int &min_no = *min_element( A,A+N);
 
    for(int j=0;j<N;j++){
        
        while(A[j]>min_no){
            A[j]=A[j]-B[j];
            count++;
        } 
     
        if(A[j]<min_no){
            min_no=A[j];
            count=0;
            j=-1;
        }
     
        if(A[j]<0){
            count=-1;
            break;
        }
    }
    
    cout<<count;
    return 0;
}