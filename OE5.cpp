//OE5
//Description: Use of Void funtcions and Parameters
//Name: Kenn Rouie M. Oloc-oloc
//Date: November 5, 2021


#include <iostream>

using namespace std;
void word (string ch);
void number (int h);

int main() {
    string ch;
    int h;
    int option, ans=0;
   do{
       system("cls");
       cout << endl;
       cout << "Revers a String or an unsigned Integer" << endl;
       cout << "[1] Reverse a String" << endl;
       cout << "[2] Reverse Unsigned Integer" << endl;
       cout << "[3] Exit" << endl;
       cout << "Select Function: " << endl;
       cin >> option;

       switch(option){
           case 1:{
               {
                int i,k=0;
                string ch;
                cout << "<<Reverse a String >>" << endl;
                cout << "Enter Any String: ";
                cin.ignore();
                getline(cin,ch);
                

                for (i=0; ch[i]!='\0';i++)
                {  
                    k++;
                }
                cout << "Reverse String: ";
                
                for (i=k-1;i>=0;i--)
                {
                    cout << ch[i];
                }
        }
               break;
           }
           case 2:{  
               number (h);
               break;
           }
           case 3:{
                cout << "Exit \nThank You!";
                return 0;
           } 
            default: {
               cout << "Invalid Input!";
           }  
       }
   }while(ans = 0); 
} 


void number(int h)
{
    int i,k=0;
    char ch[25];
    cout << "<<Reverse an unsigned Integer>>" << endl;
    cout << "Enter Any Integer [0-9] ";
    cin >> ch;

    for (i=0; ch[i]!='\0';i++)
    {  
        k++;
    }
    cout << "Reversed Integer: ";

    for (i=k-1;i>=0;i--)
    {
        cout << ch[i];
    }
}