#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n: "; //Takeing total number of rows
    cin>> n;
    for(int i=1; i<=n; i++){ //Loop prints the rows
        int a=i-1;
        for(int k=1; k<=n-i; k++){ //Loop prints the blank spaces
                cout<<" ";
            }
        for(int j=1; j<=i; j++){ //Loop prints the numbers
            cout<<j;
        }
        for(int l=1; l<=i-1; l++){ //Loop prints the numbers in the reverse order
            cout<<a;
            a--;
        }
        cout<<endl;
    }
    return 0;
}

/*OUTPUT
Enter the value of n: 5
    1
   121
  12321
 1234321
123454321
*/
