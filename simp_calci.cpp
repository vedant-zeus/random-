#include<iostream>

using namespace std;

int main () {
int op , num1 , num2  ;
cout << "_________________MENU__________________"<<endl;
cout << " 1.ADD 2.SUB 3.MULTIPLY 4.DIV 5.MODULUS" << endl;
cout << " Enter your Choice: " ;
cin >> op ;

cout<< " Enter your number : ";
cin >> num1 ;

cout << "\n Enter your number : " ;
cin >> num2 ;

switch (op) {
            case 1 :
            cout<<" Result : " <<num1 + num2 <<endl;
            break;

            case 2 :
            cout<<" Result : " <<num1 - num2 <<endl;
            break;

            case 3 :
            cout<<" Result : " <<num1 * num2 <<endl;
            break;

            case 4 :
            cout<<" Result : " <<num1 / num2 <<endl;
            break;

            case 5 :
            cout<<" Result : " <<num1 % num2 <<endl;
            break;

}


            return 0 ;
}