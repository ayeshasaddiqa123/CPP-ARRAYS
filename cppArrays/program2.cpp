// program2
#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	//arrays declaration
	int rollno[5];
	int score[5];
	
	// varaiables declaration
	int max=0;
	int loc=-1;
	
	//input arrays using loop
	for(int i=0;i<5;i++) {
		cout<<"Enter roll no : ";
		cin>>rollno[i];
	    cout<<"Enter score : ";
		cin>>score[i];
		 
		 if(score[i]>max)
		{
		  max=score[i];
		  loc=rollno[i];
         }
}
//output
 cout<<"The highest marks "<<max<<" is of student with roll no "<< loc;
 return 0; //return 0 to operating system
 
}
