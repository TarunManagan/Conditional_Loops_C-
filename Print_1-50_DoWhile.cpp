#include <iostream>
using namespace std;
//Do While loop executes the statement atleast once
int main() {
    int n=1; //Declaration and initialization of the variable n
    do{ //Prints from 1 to 50
        cout<<n<<"\t";
        n++; //Increments the value of n by 1
    }while(n<=50); //Condition
   
       return 0;
}

/*OUTPUT
1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18	19	20	21	22	23	24	25
26	27	28	29	30	31	32	33	34	35	36	37	38	39	40	41	42	43	44	45	46	47	48	49	50
*/
