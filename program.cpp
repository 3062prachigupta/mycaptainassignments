#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"enter your marks :\n";
	cin>>marks;
	
	if(marks>=85)
	{
		cout<< "\n your grade is A.";
	}
	
	else
	{
		if(marks>=60 && marks<=84)
		{
			cout<<"\n your grade is B.";
		
		}
		else
		{
			if(marks>=45 && marks<=59)
			{
				cout<<"\n your grade is C.";
			}
			else
			{
				if(marks>=33 && marks<=44)
				{
					cout<<"\n your grade is D.";
				}
				else
				{
					if(marks>=22 && marks<=32)
					{
						cout<<"\n your grade is E.";
					}
					else
					{
						cout<<"\n sorry, you are fail.";
					}
			
				}
			}
		}		
   }}
	
	
