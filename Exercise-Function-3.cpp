//*Sivapreetha Anbumuthu

#include<iostream>
#include<conio.h>
using namespace std;

double avg(double x,double y);

 int main()
{
	double m=0.0;
	double n=0.0;

	cout<<"Enter first number"<<endl;
	cin>>m;
	cout<<"Enter second number"<<endl;
	cin>>n;


	cout<<"Average is: "<<avg(m,n)<<endl;
	return 0;
	
	
}

double avg(double x,double y)
{
	/*return the average value of x and y*/
    return(x+y/2);
	
}
