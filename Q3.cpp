#include<iostream>
using namespace std;
int gcd(int x, int y){
	if(x%y==0){
		return y;
	}
	if(x%y!=0){
		return gcd(y,x%y);
	}
}

int main(){
	cout << gcd(12,8);
	return 0;
}
