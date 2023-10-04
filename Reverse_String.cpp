#include <iostream>
# include <string.h>

using namespace std;
 
// Function to reverse a string
void reverse(string str)
{
    int n = str.length();
    while(n--)
        cout << str[n];
}
 
// Driver code
int main(void)
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
 
    reverse(s);
    return (0);
}

/*OUTPUT
Enter a string: Tarun
nuraT
*/
