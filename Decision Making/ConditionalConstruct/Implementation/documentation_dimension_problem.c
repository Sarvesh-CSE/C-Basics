/* Question: Paper of size A0 has dimensions 1189mm*841mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides. 
          Thus paper of size A1 would have dimensions 841mm*594mm. Write a program to calculate and print paper sizes A0, A1, A2,...., A8.
Key idea: Cut perpendicular half of the side having greater dimension and repeat the process each time.
               
                For n=1, A(0) has dimensions 1189mm*841mm.
                For n=2, A(1) has dimensions 841mm*594mm.
                Here 594mm is half of greatest side, i.e.1189mm of previous sheet.
                Now, program for this question is as follows: */

                #include<stdio.h>
                 int main()
                {
                      int i,l=1189,b=841;
                      printf("\nThe dimensions of sheet A0 are %dmm*%dmm.",l,b);
                      for(i=1;i<9;i++)
                     {
                           if(l>b)
                              l=l/2;
                           else
                              b=b/2;
                           if(l>b)
                              printf("\nThe dimensions of sheet A%d are %dmm*%dmm.",i,l,b);
                           else
                              printf("\nThe dimensions of sheet A%d are %dmm*%dmm.",i,b,l);
                     }
                     return(0);
               }
  /*First we take int i because variable is stored as integer.Then we print the first statement,i.eThe dimensions of sheet A0 are 1189mm*841mm. 
  Here we are using for loop because we have to  repeat a same condition 9 times. Initially i is set to 1. Next the condition i<9 is tested. 
  Since, 1<9 is true  so body of loop is executed for first  time. Now, control is sent  back to for statement  where  the value of i  gets
  incremented by 1. This process goes on continuing till i becomes 8. When i=8, the control exits from loop and is transferred to statement 
  after the body of for  loop. Here if l>b then l/2 is executed and we print “The dimensions of sheet are b and l/2.” Else, if l<b then b/2
  is executed and we print “The dimensions of sheet are l and b/2.” By this way we can calculate and print paper sizes A0, A1, A2,...., A8. */
