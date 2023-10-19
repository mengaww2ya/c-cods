#include <iostream>//7
using namespace std;
int fact(unsigned long number){
    if(number == 1)
        return 1;
    return fact(number -1)*number;
}


int main()
{
    int N;
    cout<<"Enter N: ";
    cin>>N;
    if(N<1){
       cout<<"Incorrect data."<<endl;   
       system("pause");
       return 1;
    }
    long sum=0;
    for(int i=1;i<=N;i++)
        sum+=fact(i);
    system("pause");
    cout<<"Sum :"<<sum<<endl;
    return 0;
}
