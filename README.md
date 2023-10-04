# Conditional_Loops_C++

In Programming, sometimes there is a need to perform some operation more than once or (say) n number of times. 
Loops come into use when we need to repeatedly execute a block of statements. 
For example: Suppose we want to print “Hello World” 10 times.
Using Loops
In Loop, the statement needs to be written only once and the loop will be executed 10 times as shown below. 
In computer programming, a loop is a sequence of instructions that is repeated until a certain condition is reached. 

# Types of Loops:
--> For Loop-
A For loop is a repetition control structure that allows us to write a loop that is executed a specific number of times.
The loop enables us to perform n number of steps together in one line.
* Syntax:
  for (initialization expr; test expr; update expr)
{    
     // body of the loop
     // statements we want to execute
  }

--> While Loop-
While studying for loop we have seen that the number of iterations is known beforehand, i.e. the number of times the loop body is needed to be executed is known to us. 
while loops are used in situations where we do not know the exact number of iterations of the loop beforehand. 
* Syntax:
initialization expression;
while (test_expression)
{
   // statements
 
  update_expression;
}

--> Do-while loop
In Do-while loops also the loop execution is terminated on the basis of test conditions. The main difference between a do-while loop and the while loop is 
in the do-while loop the condition is tested at the end of the loop body, i.e do-while loop is 
exit controlled whereas the other two loops are entry-controlled loops. 
Note: In a do-while loop, the loop body will execute at least once irrespective of the test condition.

* Syntax:
  initialization expression;
do
{
   // statements
   update_expression;
} while (test_expression);


# EXPERIMENT NO: 1
AIM: To throw an error if denominator is 0
Algorithm:

--> STEP 1: START
--> STEP 2: Take numerator and denominator from user
--> STEP 3: try{ //If exception occurs this gets executed
        if(b!=0){
            cout<<"Division: "<<a/b<<endl;
        }
        else{
            throw(b); //If exception occurs it throws b to 'catch'
        }
      } catch(float e){ //If an exception has occured, it gets executed
               cout<<"Number cannot be 0: ERROR";
            }
--> STEP 4: STOP

OUTPUT
Enter 2 numbers: 3 5
Division: 0.6
Enter 2 numbers: 2 0
Number cannot be 0: ERROR

# EXPERIMENT NO: 2
AIM: To print hello world 10 times using FOR loop
Algorithm:

--> STEP 1: START
--> STEP 2: Initialize a variable int i = 1
--> STEP 3: Put condtion i<=10 and print "Hello World!!" that many times
--> STEP 4: for(int i=1; i<=10;i++){
       cout<<"Hello World!!"<<"\n";
    }
--> STEP 5: STOP

OUTPUT
Hello World!!
Hello World!!
Hello World!!
Hello World!!
Hello World!!
Hello World!!
Hello World!!
Hello World!!
Hello World!!
Hello World!!

# EXPERIMENT NO: 3
AIM: Print 1-50 using while loop
Algorithm:

--> STEP 1: START
--> STEP 2: Initialize a variable int i = 1
--> STEP 3: Put condtion i<=50 and print i 
--> STEP 4: while(i<=50){   
                cout<<i<<"\t";
                i++; 
                }
--> STEP 5: STOP

OUTPUT
1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18	19	20	21	22	23	24	25
26	27	28	29	30	31	32	33	34	35	36	37	38	39	40	41	42	43	44	45	46	47	48	49	50

# EXPERIMENT NO: 4
AIM: Print 1-50 using do-while loop
Algorithm:

--> STEP 1: START
--> STEP 2: Initialize a variable int i = 1
--> STEP 3: Put condtion i<=50 and print i
--> STEP 4: do{ //Prints from 1 to 50
              cout<<n<<"\t";
              n++; 
              }while(n<=50); 
--> STEP 5: STOP


OUTPUT
1	2	3	4	5	6	7	8	9	10	11	12	13	14	15	16	17	18	19	20	21	22	23	24	25
26	27	28	29	30	31	32	33	34	35	36	37	38	39	40	41	42	43	44	45	46	47	48	49	50

# EXPERIMENT NO: 5
AIM: Reverse a string using loop
Theory: We can find the lenght of the string using .lenght() function and can start the loop in the reverse direction.
Algorithm:

--> STEP 1: START
--> STEP 2: Initialize a variable int i = s.lenght()
--> STEP 3: Put condtion i--
--> STEP 4: Print the string in the reverse directon
--> STEP 5: int i = str.length();
            while(i--){
               cout << str[n];
               }
--> STEP 6: STOP


OUTPUT
Enter a string: Tarun
nuraT

# EXPERIMENT NO: 6
AIM: To print number pyramid
Theory: We can use nested loops concept. We can run outermost loop ROW times and 2 inner loops: One for blank and other for numbers,Print new line after every row
Algorithm:

--> STEP 1: START
--> STEP 2:  Take the Rows as input from the user
--> STEP 3:  Run outer loop Rows times.
--> STEP 4:  Use two inner loops to print the blank and numbers. 
            Print blank for row - i - 1 times and 
            Numbers for i + 1 times,
            where i is the current row as indicated by the loop.
--> STEP 5:  Add one blank after each numbers and don’t add any space between spaces.
--> STEP 6:  Add one new line after each row.
--> STEP 7: STOP

OUTPUT
Enter the value of n: 5
    1
   121
  12321
 1234321
123454321

