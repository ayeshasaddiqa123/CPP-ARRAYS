// proogram 3

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	// arrays declaration
	int numbers[10],squares[10],cubes[10],sums[10];
	
	// variable declaration
	int total=0;
	
	//inpt values in array
	for(int i=0;i<10;i++) {
		numbers[i]=i;
		squares[i]=i*i;
		cubes[i]=i*i*i;
		sums[i]=numbers[i]+squares[i]+cubes[i];
		total =total+sums[i];
}

   // disply the values of sums array
   for(int i=0;i<10;i++) {
      cout<< "The value in sums array at location "<<i<<" is : "<<sums[i]<<endl;   }
	  
	 // total of sums array
	 cout<<"Total of sums array : "<<total; 
return 0; //return 0 to operating system
}