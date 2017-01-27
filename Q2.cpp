#include<iostream>
using namespace std;
int gcd(int x, int y, int z){
	int i = 2, ans = 1;
	while(1){
		if(x%i==0 && y%i==0 && z%i==0){
			ans = i;
		}
		if(i>x || i>y || i>z){
			break;
		}
		i++;
	}
	return ans;
}

int main(){
	cout << "gcd(18,17,16) = " << gcd(18,17,16) << endl;
	cout << "gcd(480,320,1024) = " << gcd(480,320,1024) << endl;
	cout << "gcd(255,51,765) = " <<gcd(255,51,765) << endl;
	cout << "gcd(15,1,9) = " << gcd(15,1,9) << endl;
	cout << "gcd(2,6,222) = " << gcd(2,6,222) << endl;
	return 0;
}
