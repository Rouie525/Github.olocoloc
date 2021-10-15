//Name: Kenn Rouie M. Oloc-oloc
//Activity Name: OE4
//Description: OE4: Postcard from Giza
//Date: October 15, 2021

#include <iostream>
#include <string>

using namespace std;
int main()
{
    int i, j, k, n;

    cout << "Enter Number of Rows: ";
    cin >> n;
    
    for (i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            cout << " ";
        }
        for(k=1;k<=(2*i-1);k++)
        {
            if (i==n || k==1 || k==(2*i-1))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}