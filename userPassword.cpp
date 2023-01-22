#include<iostream>
#include<string>
using namespace std;

 
 
 
 /* This class contains most of the work that will be going into the functioning of the program. 
 Later plans are to make the username list modular so that it's actually useful to add or remove them.*/
class passwordManager 
{

 
public:
/* The usernames that the passwords will be based off of.*/
string usernames[4] = 
  {
  
"meg01", "alRight", "D33r", "parkPlace"};
  
 /* The passwords, each one is 1 to 1 with a username.*/
string passwords[4] = 
  {
  
"Runn3r", "p0llowThyL3ader", "Password1", "SAB0t"};
  
 /* The actual checker that makes sure you're entering the right things. */
void logIn () 
  {
    
/* Stores the username given by the user*/ 
string uName;
    
 
cout << "Please enter your username: ";
    
 
cin >> uName;
    
 
/* This is declared at this level to be used in both halves of the checker.*/
int uniqueIdentifier;
    
/* This is to ensure it won't let you in until you provide a valid username, a real site would have options to sign up instead, but those are for later.*/ 
while (true)
      
      {
	
 /*currently the number of usernames is hardcoded. in the future it would have to be made dynamic.*/
for (int i = 0; i < 4; i++)
	  
	  {
	    
 
if (uName == this->usernames[i])
	      
	      {
		
 /* adding 1 to the position of the array so that it doesn't fail the not null check*/
uniqueIdentifier = i + 1;
	      
 
}
	  
 
}
	
 
if (uniqueIdentifier != NULL)
	  
	  {
	    
 
break;
	  
 
}
	
 
cout <<
	  
"We don't have that username on file. Please enter your username: ";
	
 
cin >> uName;
      
 
 
}
    
 /* storing the password the user entered*/
string pWord;
    
 
cout << "Please enter your password: ";
    
 
cin >> pWord;
    
 /* restoring the unique identifier to a useful state*/
uniqueIdentifier--;
    
 
while (true)
      
      {
	
 /* checking if the password is the correct one on the list, not comparing it to all possible passwords.*/
if (pWord == this->passwords[uniqueIdentifier])
	  
	  {
	    
 
cout << "Welcome, " << this->usernames[uniqueIdentifier];
	    
 
break;
	  
 
}
	
	else
	  
	  {
	    
 
cout << "Incorrect Password. Please enter your password: ";
	    
 
cin >> pWord;
	  
 
}
      
 
}
  
 
 
}

 
 
};


 
 
 
 
 /* using a brief main function to actually execute the work above, constructs a password manager and runs the function within.*/
int 
main () 
{
  
 
passwordManager pManager;
  
 
pManager.logIn ();
  
 
return 0;

 
 
};
