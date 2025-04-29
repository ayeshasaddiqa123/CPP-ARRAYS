// program 4

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
#include<string>    //include the string library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	//arrays declaration
	string names[10];
	double salary[10];
	
	// input arrays
	for(int i=0;i<10;i++) {
		cout<<"Enter name :";
		cin>>names[i];
		cout<<"Enter salary : ";
		cin>>salary[i];				
}
// display tax status
   for(int i=0;i<10;i++)
   if (salary[i]>25000)
     {
     	cout<<"Name of employ is :" <<names[i]<<"\n The salary is : "<<salary[i]<<"\n pay your tax....";
		 }
	else
	cout<<"\nName of employ is :" <<names[i]<<"\n The salary is : "<<salary[i]<<"\n No  tax....";
	// return 0 to operating system
return 0; 		 	
}