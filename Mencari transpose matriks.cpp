#include<iostream>

using namespace std;
int main(){
	int i,j,m,n, matriks[5][5], transpose[5][5];
	
	cout<<"Masukan jumlah baris matriks : ";
	cin>>m;
	cout<<"Masukan jumlah kolom matriks : ";
	cin>>n;
	
	cout<<"Masukan elemen matriks : \n";
	for(i=0;i<m;i++){
		for (j=0;j<n;j++){
			cin>>matriks[i][j];
		}
	}
	
	for(i=0;i<m;i++){
		for (j=0;j<n;j++){
			transpose[j][i]=matriks[i][j];}
	}
	
	cout<<"Hasil transpose matriks : \n";
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<transpose[i][j] << "\t";
		} 
		cout<<endl;
	}
}
