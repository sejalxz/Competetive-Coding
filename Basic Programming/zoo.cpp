//zoo.cpp
//Zoos 
//Basic Programming
//Author: sejalxz


#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string str;
	cin>>str;

    int x1,x2,y1,y2;
	x1 = count(str.begin(),str.end(),'z');
	x2 = count(str.begin(),str.end(),'Z');
	y1 = count(str.begin(),str.end(),'o');
	y2 = count(str.begin(),str.end(),'O');

	if(((y1+y2)==(2*(x1+x2))))
		cout<<"Yes";
	else
		cout<<"No";

	return 0;
}