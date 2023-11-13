#include <iostream>
#include<conio.h>
using namespace std;
void Login(int choice);
void displayCusMenu();
string userName[100];
string userPass[100];
string role[100];
int userCount=0;

int main()
{
     while(true)
{
    system("cls");
    cout<< "                    WELCOME TO ACCESSORIES ENTICE" << endl;
   
    cout << endl<< "Enter your choice:" << endl << "1- Sign Up" << endl << "2- Sign In"  << endl << "3- Exit" << endl;
    int choice;
    cin >> choice;
    Login( choice);
    if(choice==3)
    break;
}
}
void Login(int choice)
{ 
       
 
    if (choice==1)
    {
        cout << "Enter Username: " ;
        cin >> userName[userCount];
        cout << "Enter Password: ";
        cin >> userPass[userCount];
        cout<< "Enter Role(customer,worker or owner): ";
        cin>> role[userCount];
        userCount++;
        
    }
    else if(choice==2)
    {
        string name;
        string pass;
        cout << "Enter Username: " ;
        cin >> name;
        cout << "Enter Password: ";
        cin >> pass;
        for(int x=0; x<userCount; x++)
        {   
            cout << userName[x] << " " << userPass[x] << endl;
            if(pass==userPass[x] && name==userName[x])
            {
            cout << "successful LOGIN.";
           
            break;
            }
            getch();
        }
    }
     
 }

void  displayCusMenu()
{
   int  viewChoice;
    cout << "Enter: " <<endl<<"     1 to view Men Collection"<<endl<<"      2 to view Women Collection";
    cin >> viewChoice;
    if (viewChoice==1)
    {
        cout << "1- Watches" << endl << "2- Belts" << endl << "3- Rings"<< endl;
    }
}