#include<iostream>
using namespace std;

class pattern{
	private:
		int i=0,j=0,n;
		public:
			void getdata(){
				cout<<"enter number of lines : ";
				cin>>n;
			}
			void printpattern(){
				for(i=0;i<n;i++){
					for(j=0;j<=i;j++){
						cout<<"*";
					}cout<<"\n"; 
				}
			}
};
int main()
{
pattern p;
p.getdata();
p.printpattern();
	return 0;
}

