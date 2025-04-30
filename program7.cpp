#include<iostream>    //include the iostream library (a preprocessor directive)
#include<iomanip>   //include the iomanip library (a preprocessor directive)
#include<string>    //include the string library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{

	// array declaration
	int mango[100];
	int orange[100];
	int banana[100];
	int total=0,alt=0,sum=0;
	int cn=1;
	 int n1,n2,n3;
	 
	 // input numbers of each fruit
	cout<<"Enter number of mangoes :";
	cin>>n1;
	cout<<"Enter number of oranges :";
	cin>>n2;
	cout<<"Enter number of bananas :";
	cin>>n3;
	
	
	// using loop to calculate bill
	for(int i=0;i<n1;i++) {
		sum=sum+20;
}
for(int i=0;i<n2;i++) {
		alt=alt+10;
}
for(int i=0;i<n3;i++) {
		total+=5;
}
	cout<<"-----------------------------------------------------------\n"<<"Customer No.\t"<<
	setw(8)<<"Mangoes\t"<<setw(8)<<"oranges\t"<<setw(8)<<" Bnaanas\t"<<setw(8)<<" Total Bill\n"<<
	"-----------------------------------------------------------\n";
	
	cout<<cn<<"\t"<<
	setw(7)<<n1<<"\t"<<setw(7)<<n2<<"\t"<<setw(7)<<n3<<" \t"<<setw(7)<<total+sum+alt;	
	
	
	return 0;  //return 0 to operating system
	
}