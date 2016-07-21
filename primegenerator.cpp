#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int n;
    int flag=0;
    cin>>n;
    int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
    for(int q=0;q<n;q++)
    {
		for(int i=a[q];i<=b[q];i++)
		{
			if(i==2 || i==3)
			{
				cout<<i<<endl;
			}
			for(int j=2;j<=sqrt(i);j++)
			{
				if(i%j==0)
                { flag=0;
                    break;}
                else
                flag=1;
				
			}
            if(flag==1)
                cout<<i<<endl;	
        }
        
	}
	// your code here

	return 0;
}