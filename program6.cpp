// program 6

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
#include<string>    //include the string library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	// arrray declaration
	int marks[10];
	
	// variables initialization
	 int gradeA=0,gradeB=0,gradeC=0,gradeF=0;
	 char grade;
	 
	 //input marks of 10 students
	cout<<"Enter marks of 10 students : ";
	for(int i=0;i<10;i++) {
		cin>>marks[i];
		
		if (marks[i]>=80)
		{
			grade='A';
			gradeA++;
			
		}
		else	if (marks[i]>=60)
		{
			grade='B';
			gradeB++;
			
		}
		else	if (marks[i]>=40)
		{
			grade='C';
			gradeC++;
			
		}
		else
		{
			grade='F';
			gradeF++;
			
		}
}
	cout<<"The total students with A grade are :"<<gradeA<<endl;
		cout<<"The total students with B grade are :"<<gradeB<<endl;
			cout<<"The total students with C grade are :"<<gradeC<<endl;
				cout<<"The total students with F grade are :"<<gradeF<<endl;
	
    return 0; //return 0 to operating system
}