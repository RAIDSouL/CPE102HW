#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
bool Image[N][M] = {};
int s,x,y;
do{
showImage(Image);
cout << "Input your brush size and location:";
cin >> s >> x >> y;
updateImage(Image,s,x,y);
}while(s != 0 && x != 0 && y != 0 );
return 0; 
}

void updateImage(bool Image[N][M],int s,int x ,int y)
{
	{
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<M;j++)
			{
				if(sqrt(pow((i-x),2)+pow((j-y),2))<=(s-1))
				{
					Image[i][j]=1;
				}
			}
		}
	}
}

void showImage(const bool Image[N][M])
{
	for(int k=-1;k<M+1;k++)
	{
		cout <<"-";
	}
	cout<<endl;
	for(int i=0;i<N;i++)
	{
		cout << "|";
		for(int j=0;j<M;j++)
		{
			if(Image[i][j]==1)
			{
				cout << "*";
			}
			else cout << " ";
		}
		cout << "|" << endl;
	}
	for(int k=-1;k<M+1;k++)
	{
		cout <<"-";
	}
	
		cout<<endl;
}
