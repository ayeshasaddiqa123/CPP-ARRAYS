#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace

int main ()               // main function from where execution starts
{
	int d,m;
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	cout<<"Enter current day :";
	cin>>d;
	int total=d;
	
	cout<<"Enter current month :";
	cin>>m;
	for (int i=0;i<m-1;i++)
	{
		total+=month[i];
	}
	cout<<"Total days spent from thr year are :"<<total;
   return 0; //return 0 to operating system
}

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	int n,a,count=0;
	cout<<"Enter age of persons you want to enter :";
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cout<<"Enter age of person: ";
		cin>>a;
		if(a>50 && a<60)
		 count++;
	}
	cout<<"Total number of persons between 50 and 60  are :"<<count;
   return 0; //return 0 to operating system
}

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	int numbers[5],squares[5],cubes[5],sums[5];
	for(int i=0;i<5;i++)
	{
		numbers[i]=i;
		squares[i]=i*i;
		cubes[i]=i*i*i;
		sums[i]=numbers[i]+squares[i]+cubes[i];
			}
			int total=0;
			for(int i=0;i<5;i++)
			{
				total+=sums[i];
			}
			cout<<"Numbers : ";
			for(int i=0;i<5;i++)
			{
				cout<<numbers[i]<<"\t";
			}
			cout<<endl;
			cout<<"Squares : ";
			for(int i=0;i<5;i++)
			{
				cout<<squares[i]<<"\t";
			}
			cout<<"\n toatal "<<total;
		
			
   return 0; //return 0 to operating system
}

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	int a[10],count=0,p;
		for (int i=0;i<10;i++)
	{
		cout<<"Enter numbers in array ;";
		cin>>a[i];
		
	}
	
	for(int n=0;n<10;n++)
	{
		int p=1;
		for(int c=2;c<=a[n]/2;c++)
		{
			p=0;
			break;
			
		}
	
		if(p==1)
		count++;
		
}
cout<<"\n total are "<<count;
   return 0; //return 0 to operating system
}

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	int loc=-1,n;
	int a[5]={1,2,6,5,4};
	cout<<"Enter number to search from arry :";
	cin>>n;
	
	for (int i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			loc=i;
			break;
		}
		
	}
	if(loc==-1)
	{
		cout<<"Value not found;";
	}
	else
	   cout<<"Value found at loc "<<loc;
   return 0; //return 0 to operating system
}


#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	int loc=-1,n;
	int a[]={1,2,3,4,5};
	cout<<"Enter number to search from arry :";
	cin>>n;
	int start=0;
	int end=4;
	
	
    while(start<=end)
    {
    	int mid=(start+end)/2;
    	if(a[mid]==n)
    	 {
    	 	loc=mid;
    	 	break;
		}
	else if(n<a[mid])
	end=mid-1;
	else
	start=mid+1;	
    }
	if(loc==-1)
		cout<<"Value not found;";
	
	else
	   cout<<"Value found at loc "<<loc;
   return 0; //return 0 to operating system
}

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	int a[5],min;
	for (int i=0;i<5 ; i++)
	{
	
	 cout<<"Enter values in array :";
	cin>>a[i];
}

for (int i=0;i<4;i++)
{
	min=i;
	for(int j=i+1;j<5;j++)
	{
		if(a[j]<a[min])
		min=j;
	if(min!=i)
	{
		int   temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		}	
		
	}
}
	cout<<"The sorted array is :";
	for (int i=0;i<5;i++)
	cout<<a[i]<<"\t";

   return 0; //return 0 to operating system
}



#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	int a[5];
	cout<<"Enter values in array:";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
		cout<<"Values in array are:";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}
	int loc;
	cout<<"\nenter index from which you want to delete values :";
	cin>>loc;
	
	for (int i=loc;i<4;i++)
	{
		a[i]=a[i+1];
		
		
	}
	cout<<"Array after values delte from it";
	for (int j=0;j<4;j++)
	{
		cout<<a[j]<<"\t";
	}
   return 0; //return 0 to operating system
}



#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the stanadard namespace
int main ()               // main function from where execution starts
{
	int a[5];
	cout<<"Enter values in array:";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
		cout<<"Values in array are:";
	for(int i=0;i<5;i++)
	{
		cout<<a[i]<<"\t";
	}
	int loc;
	cout<<"\nenter index to which you want to insert value :";
	cin>>loc;
	int val;
	cout<<"Enter value you want to enter :";
	cin>>val;
	
	for (int i=4;i>=loc;i--)
	
		a[i+1]=a[i];
		a[loc]=val;
		
		
	
	cout<<"Array after values delte from it";
	for (int j=0;j<6;j++)
	{
		cout<<a[j]<<"\t";
	}
   return 0; //return 0 to operating system
}

#include<iostream>     // include the iostream library (a preprocessor directive)
using namespace std;     // use the standard namespace

class Sum {
    private:
        int a[5];
        int b[5];
    public:
        Sum() {
            // Initialize arrays with values 0 through 4
            for(int i = 0; i < 5; i++) {
                a[i] = i;
                b[i] = i;
            }
        }
        
        // Function to display array elements
        void display() {
            for(int i = 0; i < 5; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }

        // Overloading + operator
        Sum operator +(const Sum& obj) {
            Sum temp;
            for(int i = 0; i < 5; i++) {
                temp.a[i] = this->a[i] + obj.a[i];
            }
            return temp;
        }
};

int main() {
    Sum obj1;    // First object
    Sum obj2;    // Second object
    Sum result;  // Object to store result  

    cout << "First array: ";
    obj1.display();
    
    cout << "Second array: ";
    obj2.display();

    // Adding arrays using overloaded + operator
    result = obj1 + obj2;
    
    cout << "Result after addition: ";
    result.display();

    return 0;
}



#include<iostream>     // include the iostream library (a preprocessor directive)
#include<iomanip>
using namespace std;     // use the stanadard namespace
class Sum
{
	private:
		int a[3][4];
		int b[3][4];
		int c[3][4];
		
	public:
	     void input()
		{
			cout<<"Enter elements in first array :";
			for(int i=0;i<3;i++) 
				for(int j=0;j<4;j++)
					cin>>a[i][j];
					
    	          cout<<"Enter elements in second array :";
			for(int i=0;i<3;i++) 
				for(int j=0;j<4;j++)
					cin>>b[i][j];		

			}
		void adding_Arrays()
		{
		  for(int i=0;i<3;i++) 
				for(int j=0;j<4;j++)
				c[i][j]=a[i][j]+b[i][j];
					
			}	
		void display()	
		{
			cout<<"Array 1 :"<<endl;
				  for(int i=0;i<3;i++) 
			{
			     for(int j=0;j<4;j++)
				 cout<<a[i][j]<<"  ";
				 
				 cout<<endl;
			}
					cout<<"Array 2 :"<<endl;
				  for(int i=0;i<3;i++) 
			{
					for(int j=0;j<4;j++)
				cout<<b[i][j]<<"  ";
			
			cout<<endl;}
			
			
			cout<<"The concatenated array is :\n";
			 for(int i=0;i<3;i++) 
				{
				for(int j=0;j<4;j++)
				  cout<<c[i][j]<<"  ";
				  cout<<endl;
				  }
		}
			
};

int main ()               // main function from where execution starts
{
	Sum s;
	s.input();
	s.adding_Arrays();
	s.display();
	
   return 0; //return 0 to operating system
}
