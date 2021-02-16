#include<iostream>
using namespace std;

int main() {
  int matriksa[5][5], matriksb[5][5], hasil[5][5];
  int i, j, k, m, n, p, q, jumlah = 0;
  cout << "Masukkan banyak baris matriks A: ";
  cin >> m;
  cout << "Masukkan banyak kolom matriks A: ";
  cin >> n;
  cout << "Masukkan banyak baris matriks B: ";
  cin >> p;
  cout << "Masukkan banyak kolom matriks B: ";
  cin >> q;
  if(n != p){
    cout << "Matriks tidak dapat dikalikan.\n";
  } else {
    cout << "Masukkan elemen matriks A: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        cin >> matriksa[i][j];
      }
    }
    cout << "Masukkan elemen matriks B: \n";
    for(i = 0; i < p; i++){
      for(j = 0; j < q; j++){
        cin >> matriksb[i][j];
      }
    }
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < p; k++){
          jumlah = jumlah + matriksa[i][k] * matriksb[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }
  }
}
