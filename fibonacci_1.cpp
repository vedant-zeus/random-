#include<iostream>

 using namespace std;
 int fibonnaci(int n){
            if(n<2 && n>=0){
                        return 1;
            }
 return fibonnaci(n-2) + fibonnaci(n-1) ;
 }
 int main () {
int a ; 
cout << "Enter the nth term : " ;
cin >> a ;
cout << "The nth position is " << a << " the value is " << fibonnaci(a);

            return 0 ;
  }