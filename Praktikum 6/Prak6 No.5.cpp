//tatas jati wikanta_20051397065//
#include <iostream>

using namespace std;

int ambil(int bil, int i){ 
	if (i == 1) { 
		return 1; 
	} 
	else if (bil % i == 0) { 
		return 1 + ambil(bil, --i); 
		} else { 
		return 0 + ambil(bil, --i); 
	} 
}
  
int cek(int bil){ 
	if (bil > 1) { 
		return (ambil(bil, bil) == 2);
	} 
	else 
		return false; 
}

int main(){
	
	int bil;
	cout<<"Masukan bilangan prima : ";
	cin>>bil;

	if (cek(bil)){
		cout<<"Bilangan prima"<<endl;
	}else {
		cout<<"Bukan bilangan prima"<<endl;
	}
	return 0;
} 
