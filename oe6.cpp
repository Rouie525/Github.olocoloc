#include <iostream>

using namespace std;


int main(){
    int arr[100];
    int ch, ans=0;
    int size, i, j, temp, num;

    do{
       system("cls");
       cout << endl;
       cout << "Searching or Sorting Arrays" << endl;
       cout << "[1] Searching Array" << endl;
       cout << "[2] Sorting Array (Ascending)" << endl;
       cout << "[0] Exit the Program" << endl;
       cout << "Enter your choice: " << endl;
       cin >> ch;

       switch(ch){
           case 1:{
                cout << "SEARCHING ARRAY" << endl;
                {
                int arr[100], size, i, num;
       
                cout << "Enter Size of Array: ";
                cin >> size;
     
                cout << "Enter elements in array: ";
      
    
                for(i = 0; i < size; i++){
                    cin >> arr[i];
                }
      
                cout << "Enter a number to search in Array\n";
                cin >> num;
      
                // search num in inputArray from index 0 to elementCount-1 
                for(i = 0; i < size; i++){
                    if(arr[i] == num){
                        cout << "Element found at index " << i;
                        break;
                    }
                }
      
                if(i == size){
                    cout  << "Element Not Present in Array\n";
                }
 
                return 0;
            }
                            break;
                    }
           case 2:{  
               cout << "SORTING ARRAY (ASCENDING)" << endl;
               {
                int arr[100];
                int size, i, j, temp;
 
                // Reading the size of the array
                cout<<"Enter size of array: ";
                cin>>size;
 
                //Reading elements of array
                cout<<"Enter elements in array: ";
                for(i=0; i<size; i++)
                {
                    cin>>arr[i];
                }
                    //Sorting an array in ascending order
                    for(i=0; i<size; i++)
                {
                    for(j=i+1; j<size; j++)
                    {
                        //If there is a smaller element found on right of the array then swap it.
                        if(arr[j] < arr[i])
                        {
                            temp = arr[i];
                            arr[i] = arr[j];
                            arr[j] = temp;
                        }
                    }
                }
                    //Printing the sorted array in ascending order
                cout<<"Elements of array in sorted ascending order:"<<endl;
                for(i=0; i<size; i++)
                {
                cout<<arr[i]<<endl;
                }
 
                return 0;
            }
 
               break;
           }
           case 0:{
                cout << "Program Terminated \nThank You!";
                return 0;
           } 
            default: {
               cout << "Invalid Input!";
           }  
       }
    }while(ans = 0);
}