#include<iostream>

using namespace std;

void print2(char a='6',char b= '9',int x= 6,int y= 9);

int main(){
	char a,b;
	int x,y;
	print2('0','x',5,2);
	return 0;
}

void print2(char a,char b,int x,int y){
	int c=1;
	for(int n = 1;n<=y;n++){
		for(int i = 1;i<=x;i++){
			if(c%2==1)
				cout << a; 
			if(c%2==0)
				cout << b;
			if (c%y==0){
				cout << endl;
			}
		c++;
		}
	}
}

