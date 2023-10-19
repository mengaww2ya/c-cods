#include<iostream>
using namespace std;
int main(){
	int final_mark;
	int mid_mark;
	cout<<"Enter the final mark . The final mark must be between 0 and 60\n";
	cin>>final_mark;
	while(final_mark > 60 || final_mark<0){
		cout<<"Invalid final mark\n. Enter mark within a specified range\n";
		exit(0);
		
	}
	cout<<"Enter the mid mark. The mid mark must between 0 and 40\n";
	cin>>mid_mark;
	while(mid_mark > 40 || mid_mark<0){
		cout<<"Invalid final mark. Enter mark within a specified range\n";
		exit(0);
	}
	int average = mid_mark + final_mark ;
	
	if(average >=70 && average< 100){
		cout<<"Grade is: A";
	}
	else if(average >=60 && average< 70){
		cout<<"Grade is: B";
	}
	else if(average >=50 && average< 60){
		cout<<"Grade is: C";
	}
	else if(average >=40 && average< 50){
		cout<<"Grade is: D";
	}
	else if(average >=0 && average< 40){
		cout<<"Grade is: Fail";
	}
  
	
		
	
}
