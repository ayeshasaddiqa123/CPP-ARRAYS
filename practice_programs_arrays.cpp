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
