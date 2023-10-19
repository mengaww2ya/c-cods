#include <iostream>
#include<math.h>
using namespace std;
int main()
{    int j;
	cout << "\n The prime numbers between 2 and 100"<<endl;
    for(int i=2;i<=100;i++)
       {for(j=2;j<100;j++){
               {
               if(i%j==0)
               i++;
               }
               if(j!=1&&j!=i)
               { i++;
                 cout<<i<<" ";}
                 
               }
       }}
