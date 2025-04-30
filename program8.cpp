#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
    //array declaration
    float arr[10];
    int sum=0;
    float avg;

    //input array using for loop
    for(int i=0;i<10;i++) {
        cout<<"Enter number in array : ";
        cin>>arr[i];
        sum+=arr[i]; //sum of all elements in array	
    }
    avg=sum/10; //average of all elements in array

    for(int i=0;i<10;i++)
    if(arr[i]>avg) //check if element is greater than average
        cout<<arr[i]<<" is greater than average "<<avg<<endl; //display elements greater than average
   
        return 0; //return 0 to operating system
  

}    
    