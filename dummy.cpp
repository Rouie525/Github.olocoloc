//Performance Task 2
//Description: Conversion Console App using functions [Dollar to Peso to Dollar]
//             This is also a debugging activity
//Name: Kenn Rouie M. Oloc-oloc

#include <iostream>

using namespace std;

void promptAndWait();
void dollarstopeso (float rate, unsigned dollar);
void pesotodollar (float rate, unsigned peso);
int main() {
    float Rate = 50.73; // $1 = 50.73 Pesos
    unsigned dollar;
    unsigned peso;
    float result;
    int ch, ans=0;
   do{
       system("cls");
       cout << endl;
       cout << "Dollar to Peso Conversion App" << endl;
       cout << "[1] Dollar to Peso" << endl;
       cout << "[2] Peso to Dollar" << endl;
       cout << "[0] Exit the Conversion App" << endl;
       cout << "Select Conversion" << endl;
       cin >> ch;

       switch(ch){
           case 1:{
               cout << "\n<< Convert Dollar to Peso >>" << endl;
               cout << "Enter a US Dollar amount (without the dollar sign, commas or a decimal): ";
               cin >> dollar;
               promptAndWait();
               dollarstopeso(Rate, dollar);
               
               
               break;
           }
           case 2:{
               cout << "\n<< Convert Peso to Dollar >>" << endl;
               cout << "Enter a Philippine Peso amount (without the peso sign, commas or a decimal): ";
               cin >> peso;
               promptAndWait();
               pesotodollar(Rate, peso);
               
               
               break;
           }
           case 0:{
               
                cout << "Conversion App Terminated \n Thank You for using the app!";
                promptAndWait();
                return 0;
           } 
            default: {
               cout << "Invalid Input!";
               promptAndWait();
               return 0;
           }  
       }
   }while(ans = 0); 
} //End of Main Function 
void promptAndWait () {
    cin.ignore(100, '\n');
    cout << "\nPress Enter or Return to continue..." << endl;
    cin.get();
    }

void dollarstopeso (float rate, unsigned dollar)
{
    float result;
    rate = 50.73;
    result = dollar * rate;
    cout << "$ " << dollar << " is equal to " << result << " Pesos." << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
}
void pesotodollar (float rate, unsigned peso) 
{
    float result;
    rate = 50.73;
    result = peso / rate;
    cout << peso << " Pesos is equal to " << result << " Dollars. " << endl;
cout.setf(ios::fixed);
cout.precision(2);
}