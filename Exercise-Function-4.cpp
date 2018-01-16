//*Sivapreetha Anbumuthu
#include <iostream>
#include <iomanip>
#include<conio.h>
using namespace std;

int main()
{
	void ombakKeluar();
	getch();
}

void petakPelik(int repeat=3,int height=5,int up=2,int down=2)
{
	while(repeat >0)
	{
		for(int i=1; i<=up;i++)
		cout<<setw(height)<<right<<"+"<<endl;
		for(int i=1; i<=down;i++)
		cout<<"+"<<endl;
		repeat --;
	}
}



void waveDemo()
{

	cout<<"\nwaveDemo\n";
	petakPelik();
}

