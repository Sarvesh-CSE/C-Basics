  #include<stdio.h>
   struct s 
    { 
      int i; 
      struct s *p; /*pointer as a variable in 
                     structure.It stores 
                     address of the structure */
    }; 
   void main( ) 
   { 
        struct s var1,var2; 
        var1.i=100; 
        var2.i=200; 
        var1.p=&var2; /*here address of var1 is 
        var2.p=&var1;   stored in pointer of 
                        var2 and vice versa*/
        
        printf("\n%d %d",var1.p->i,var2.p->i); 
   }


 
