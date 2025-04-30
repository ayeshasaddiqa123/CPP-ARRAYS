#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
    int score[5][5]={{34,434,43,43,34},{56,67,654,64,45},{546,54,54,48,87},{363,5345,35,35,345},{63,55,78,3,438}};//2D array to store scores
    int n;
    cout<<"Enter the number of students: "; //prompt user to enter number of students
    cin>>n; //take input from user and store it in variable n

   for(int i=0;i<n;i++)
   {
    cout<<"enter row number and student number to find score :";
    int row,col; //declare variables row and col    
    cin>>row>>col; //take input from user for row and column
    if(row<5 && col<5) //check if row and column are within bounds of the array
    {
        cout<<"score is : "<<score[row][col]<<endl; //print the score at the given row and column
    }
    else //if row or column is out of bounds
    {
        cout<<"invalid input"<<endl; //print invalid input message
    }
   }
return 0; //return 0 to indicate successful execution of the program


}