#include<iostream>
using namespace std;

int fibonacci(int x){
	if(x==0)
		return 0;
	else if(x==1)
		return 1;	
	else 
		return fibonacci(x-1) + fibonacci (x-2);
}
int main(){
	cout << "Fibonacci = " <<fibonacci(7);
	return 0;
}
