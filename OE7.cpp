//Midterm Handson Exam
//Description: You are going to create a C++ program console conversion app. Your program should ask the user to input unsigned integer and 
//numbers with fraction part about a particular conversion method
//Name: Kenn Rouie M. Oloc-oloc

#include <iostream>

using namespace std;

void promptAndWait();
void convert1 (float a, double kilometer);
void convert2 (float b, double meter);
void convert3 (float c, double inches);
void convert4 (float d, double centimeter);

int main() {
    string username;
    string password;
    double kilometer;
    double meter;
    double inches;
    double centimeter;
    float result;
    float a = 1000;
    float b = 0.001;
    float c = 2.54 ;
    float d = 0.393701;
    int ch, ans=0;

    cout << "Please Enter your username : ";
    cin >> username;
    cout << "Please Enter your password : ";
    cin >> password;
    if (username == "Oloc"){
        if(password == "Kenn"){
            cout << "Login Successful! Welcome!" << endl;
        }else{
            cout << "Incorrect Password! " << endl;
        }
    }else {
        cout << "Incorrect Username! " << endl;
    }

    promptAndWait();
   do{
       system("cls");
       cout << endl;
       cout << "<<-------- Dollar to Peso Conversion App -------->>" << endl;
       cout << "[1] Kilometer to Meter" << endl;
       cout << "[2] Meter to Kilometer" << endl;
       cout << "[3] Inches to Centimeter" << endl;
       cout << "[4] Centimeter to Inches" << endl;
       cout << "[0] Exit Conversion App" << endl;
       cout << "Select Conversion" << endl;
       cin >> ch;

       switch(ch){
           case 1:{
               cout << "\n<< Convert Kilometer to Meter  >>" << endl;
               cout << "Enter Kilometers: ";
               cin >> kilometer;
               promptAndWait();
               convert1(a, kilometer);
               
               break;
           }
           case 2:{
               cout << "\n<< Convert Meter to Kilometer >>" << endl;
               cout << "Enter Meters: ";
               cin >> meter;
               promptAndWait();
               convert2(b, meter);
               
               break;
           }
           case 3:{
               cout << "\n<< Convert Inches to Centimeter  >>" << endl;
               cout << "Enter Inches: ";
               cin >> inches;
               promptAndWait();
               convert3(c, inches);
               
               break;
           }
           case 4:{
               cout << "\n<< Convert Centimeter to Inches  >>" << endl;
               cout << "Enter Centimeter: ";
               cin >> centimeter;
               promptAndWait();
               convert4(d, centimeter);
               
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
} //End
void promptAndWait () {
    cin.ignore(100, '\n');
    cout << "\nPress Enter or Return to continue..." << endl;
    cin.get();
    }

void convert1 (float a, double kilometer)
{
    float result;
    a = 1000;
    result =  a * kilometer;
    cout << "<< " << kilometer << " Kilometers = " << result << " Meters. >>" << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
}
void convert2 (float b, double meter)
{
    float result;
    b = 0.001;
    result = b * meter;
    cout << "<< " << meter << " Meters = " << result << " Kilometers. >>" << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
}
void convert3 (float c, double inches)
{
    float result;
    c = 2.54 ;
    result = c * inches;
    cout << "<< " << inches << " Inches = " << result << " Centimeters. >>" << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
}
void convert4 (float d, double centimeter)
{
    float result;
    d = 0.393701;
    result = d * centimeter;
    cout << "<< " << centimeter << " Centimeters = " << result << " Inches. >>" << endl;
    cout.setf(ios::fixed);
    cout.precision(2);
}
