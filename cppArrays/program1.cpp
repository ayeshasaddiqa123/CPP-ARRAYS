// program 1
#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	// arrays declaration
	int arr[10];
	 int count=0;
	 int p=1;
	
	
	// input array using for loop
	for(int i=0;i<10;i++) {
		cout<<"Enter number in array : ";
		cin>>arr[i];	


   //loop checks each number wether it is prime or not
   for(int c=2;c<=arr[i]/2;c++)
   		{
   			p=1;
			if(arr[i]%c==0)
   			  {
			   p=0;
   			   break;
			  }
				 if(p==1)
				   count++;
		}
   
}
    //display prime numbers' count
    cout<<"Total prime numbers in array are : "<<count;
    
	return 0; //return 0 to operating system
}
