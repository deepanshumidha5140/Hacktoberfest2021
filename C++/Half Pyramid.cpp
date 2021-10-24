#include <iostream>
using namespace std;

int main()
{
    
    int i, j, rows;

    cout << "Enter the number of rows in the pyramid: ";
    cin >> rows;
    cout << "\n\nThe required pyramid pattern containing " << rows << " rows is:\n\n";

    for (i = 1; i <= rows; i++)
    {
       
        for (j = 1; j <= i; j++)
        {
            cout << j << " "; 
        }

        cout << endl;
    }

    cout << "\n\n";

    return 0;
}
