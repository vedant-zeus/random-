#include <iostream>

using namespace std;

int main () {
int m , n ;
cout<<"Enter the number of rows (n) : ";
cin>> n ;
cout<<"Enter the number of column (m) : ";
cin >> m ;
 
int array[n][m] ;
for ( int i ; i<n ; ++i ){
            for ( int j ; j<n ; ++j ){
                   array[i][j]=i*j;
            }
}
 cout << "Generated 2D array : " <<endl ;
 for( int i ; i < n ; ++i) {
            for (int j ; j< m ; ++j){
                        cout<<array[i][j]<<"\t";
            }
            cout<<endl;
 }
            return 0 ;
}