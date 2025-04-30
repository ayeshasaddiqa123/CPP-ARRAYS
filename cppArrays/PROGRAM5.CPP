// PROGRAM 5

#include<iostream>    //include the iostream library (a preprocessor directive)
#include<math.h>   //include the math library (a preprocessor directive)
#include<string>    //include the string library (a preprocessor directive)
using namespace std ;   //use standard namespace
int main()             // built-in function (main) from where execution starts
{
	// array declaration
	int arr [10];
	
	// input 10 integers
	cout<<"Enter 10 integers : \n";
	for(int i=0;i<10;i++) {
		cin>>arr[i];
}

     //count occurences
     for(int i=0;i<10;i++)
     {
     	if(arr[i]==-1)
     	continue;//skip if already counted
	 
	 
	 int count=1;
	 for(int j=i+1;j<10;j++) {
	 	if(arr[i]==arr[j])
	 	{
	 		count++;
	 		arr[j]=-1; //Mark as counted
	 		
		 }
}
cout<<arr[i]<<" stored "<<count<<" times in array ."<<endl;


return 0; // return 0 to operating system

}
}

// ANOTHER METHOD

#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int counted[10]; // 0 means not counted, 1 means counted

    // Initialize the counted array with 0
    for (int i = 0; i < 10; i++) {
        counted[i] = 0;
    }

    // Input 10 integers
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Count occurrences
    for (int i = 0; i < 10; i++) {
        if (counted[i] == 1)
            continue; // Skip if already counted

        int count = 1;
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = 1; // Mark as counted
            }
        }

        cout << arr[i] << " is stored " << count << " times in the array." << endl;
    }

    return 0;
}
 