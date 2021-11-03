#include<iostream>
using namespace std;
#define max a = 50;

//WAP to count blank spaces, digits, vowels, and consonants in a string
class statement{
	private: 
	int digit=0,space=0,vowel=0,consonant=0;
	string a;
	
	public:
		void getdata()
		{
			cout<<"enter your statement : ";
			getline(cin, a);
			for(int i = 0;i<a.length();i++){
				if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'){
					vowel++;
				}else if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
				consonant++;
			}else if(a[i]>+'0' && a[i]<='9'){
				digit++;
			}else if(a[i]==' '){
				space++;
			}
			}
		}
		void printdata(){
			cout<<"\n blank spaces = "<<space;
			cout<<"\n digits = "<<digit;
			cout<<"\n vowels = "<<vowel;
			cout<<"\n consonant = "<<consonant;
		}
};
int main()
{
statement s;
s.getdata();
s.printdata();
	return 0;
}

