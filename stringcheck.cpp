#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    char a[24][10], b[24][5];
    int flag=0;
     for(int i=0;i<1;i++)
     {
         int k=0;
        cin>>a[i]>>b[i];
        for(int j=0;j<5;j++)
         {
            while(k<10)
                { 
                    if(a[i][k]==b[i][j])
                        {
                        flag=1;
                        k++;
                        break;
                        }
                    else
                        {
                        j=0;
                        flag=0;
                        k++;
                        
                        }
                }
         
         }
         if(flag==1)
            cout<<1<<endl;
         else
         {
             cout<<0;
         }
    }
    return 0;
}