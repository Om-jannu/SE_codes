//wap to find gcd of two numbers
#include<iostream>
using namespace std;

class gcd{
	private : 
	int num1,num2,i,gcd;
	
	public : 
	void getdata(){
		cout<<"\nenter first number : ";
		cin>>num1;
		cout<<"\nenter second number : ";
		cin>>num2;
		
		//processing
		for(i=1;i<=num1 && i<=num2;++i){
			if(num1%i==0 && num2%i==0){
				gcd = i;
			}
		}
	}
	void printdata(){
		cout<<"\ngcd of("<<num1<<") and ("<<num2<<") is : "<<gcd;
	}

};
	int main(){
		gcd a;
		a.getdata();
		a.printdata();
		return 0;
	}


