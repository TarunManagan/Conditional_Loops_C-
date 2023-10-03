#include <iostream>
using namespace std;

int main() {
    int n; //Declaration of the variable n
    cout<<"Enter the value of n: ";
    cin>>n; //Initialization of n by taking input from the user
    while(n<=50){    //Prints from 1 to 50
        cout<<n<<"\t";
        n++; //Increments the value of n by 1
    }
    return 0;
}

/*OUTPUT
Enter the value of n: 1
1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18	19	20	21	22	23	24	25
26	27	28	29	30	31	32	33	34	35	36	37	38	39	40	41	42	43	44	45	46	47	48	49	50
*/
