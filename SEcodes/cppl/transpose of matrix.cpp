//wap to transpose a matrix

#include<iostream>
using namespace std;

class matrix{
	private:
	int row,col,mat[10][10],tra[10][10],i,j;
	public:
	void getdata(){
		cout<<"\nenter no of rows : ";
		cin>>row;
		cout<<"enter no of columns : ";
		cin>>col;
		cout<<endl;
		
		//taking inputs
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				cout<<"enter element : ";
				cin>>mat[i][j];
			}
		}
			cout<<"\nyour matrix is : \n\t";
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				cout<<" "<<mat[i][j];
			}
			cout<<endl<<"\t";
		}
	}
		void transpose(){
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				tra[j][i]=mat[i][j];
			}
		}
	}
	void printdata(){
		cout<<"\ntranpose of your matrix is : \n\t";
		for(i=0;i<col;i++){
			for(j=0;j<row;j++){
				cout<<" "<<tra[i][j];
			}	cout<<endl<<"\t";
      	}
      }
};
int main(){
	matrix a;
	a.getdata();
	a.transpose();
	a.printdata();
	return 0;
}
