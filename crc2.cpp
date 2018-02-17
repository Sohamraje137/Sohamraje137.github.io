#include<iostream>
using namespace std;
int main()
{
	int a[20],n1;
		int k[20];
	cout<<"Enter the size of the datwaord and enter the  dataword\t:";


	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
		k[i]=a[i];
	}
	int p[10],n2;
	cout<<"\nEnter the polynomial size and enter the polynomial\t:";
	cin>>n2;
	for(int i=0;i<n2;i++)
	{
		cin>>p[i];
	}
	int l=n1-n2+1;
	// for(int i=n1;i<l;i++)
	// {
	// 	a[i]=0;
	// }
	cout<<"The codeword is   \t:";
	for(int i=0;i<n1;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
		cout<<"The polynomial is\t:";

	for(int i=0;i<n2;i++)
	{
		cout<<p[i]<<"\t";
	}

	cout<<endl;
	for(int i=0;i<n1-n2+1;i++)
	{
		if(a[i]==1)
		{
			for(int j=0;j<n2;j++)
			{
				a[i+j]=a[i+j]^p[j];
			//cout<<i+1<<" "<<a[i+j]<<"  "<<a[i]<<endl;
			}
		}
		else if(a[i]==0)
		{
			for(int j=0;j<n2;j++)
			{
				a[i+j]=a[i+j]^0;
		//	cout<<i+1<<" "<<a[i+j]<<"  "<<a[i]<<endl;
			}
		}
	}
	int c=0;
	for(int i=0;i<n1;i++)
	{
         if(a[i]==0)
         {      c++;
	     }
	         	   //   	cout<<a[i]<<"\t";

	}
	if(c==n1)
	{
		cout<<endl<<"\t\tErrorless"<<endl<<"The dataword is\n";
		for(int i=0;i<n1-n2+1;i++)
	{ 
		cout<<k[i]<<"\t";
	}

	}
	else
	{
		cout<<"Error in coding\nRemainder is\n";
		for(int i=n1-n2+1;i<n1;i++)
		{  //cout<<k[i];
			cout<<k[i];
		}
		cout<<endl;
	}
}
