#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main () {
string username ;
string * s ;
s = &username ;
int password ;
int * p ;
p = &password ;

// User input for username 

cout << "Username : " ;
cin >> username ;

// Conditions for specific Passcode 
cout.precision(8);
cout << "Password : ";
cin >> password ;

cout << "\nEncrypted for User " << *s << endl ;
            cout << "Login ID Genereated\n" << endl;

// Trying to make it more secure and more engaging
int authentication ;
cout << "USE yes = 1 & no = 0" << endl ;
cout << "I'm not a human ✅: " << endl ; 
cin >> authentication ;
if ( authentication == 1){
            cout << "Approved \n" << endl ;
} else {
            cout << "Authentication error " << endl;
            return 1 ;
}
// A better signing off for the user 
cout << "Account was Created " << endl ;
cout << *s << " is a Registered Account"; 
            




            return 0;
}