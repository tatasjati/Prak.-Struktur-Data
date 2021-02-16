#include<iostream>
using namespace std;

int main (){
    int i, j, k, n;
    double a[5][5]={0}, d;
   
    cout<<"Masukan banyak matriks : ";
    cin>>n;
    cout<<"Masukan elemen matriks : "<<endl;
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)   
            cin>>a[i][j];
           
    for (i=1;i<=n;i++)
        for (j=1;j<=2*n;j++)
            if (j==(1+n))
                a[i][j]=1;
               
    for (i=n;i>1;i--){
        if (a[i-1][1]<a[i][1])
        for (j=1;j<=n*2;j++){
            d=a[i][j];
            a[i][j]=a[i-1][j];
            a[i-1][j]=d;
        }
    }
    cout<<"Matriks : "<<endl;
    for (i=1;i<=n;i++){
        for (j=1;j<=n*2;j++)
            cout<<a[i][j]<<"    ";
            cout<<endl;   
    }
    for (i=1;i<=n;i++){
        for (j=1;j<=n*2;j++)
        if (j!=1){
            d=a[j][i]/a[i][i];
            for (k=1;k<=n*2;k++)
                a[j][k]-=a[i][k]*d;
        }
    }
    for (i=1;i<=n;i++){
        d=a[i][i];
            for (j=1;j<=n*2;j++)
                a[i][j]=a[i][j]/d;
    }
    cout<<"Invers Matrix : "<<endl;
    for (i=1;i<=n;i++){
        for (j=n+1;j<=n*2;j++)
            cout<<a[i][j]<<"    ";
            cout<<endl;
    }
    return 0;
}
