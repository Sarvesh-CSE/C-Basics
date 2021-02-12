  #include<stdio.h>
   struct s 
    { 
      int i; 
      struct s *p; 
    }; 
   void main( ) 
   { 
        struct s var1,var2; 
        var1.i=100; 
        var2.i=200; 
        var1.p=&var2;  
        var2.p=&var1;    
                        
        
        printf("\n%d %d",var1.p->i,var2.p->i); 
   } 

 /*LINE 5 - pointer as a variable in
  structure.It stores address of the structure */
  
     
/*LINE 15-here address of var1 is
  stored in pointer of var2 and vice versa*/


/*LINE 18-The value of i of var1 will be 200 and 
  that of var2 will be 100 */
