#include<stdio.h>
#include<conio.h>
void main()
{
    int r,g,b;   /*Colour input of RCB type*/
    float c,m,y,k,w=0.0;
    printf("Enter the value for red, blue and green"); 
    scanf("%d %d %d",&r,&b,&g);
    if (r/255 > g/255 && r/255 > b/255)
        w=r/255;
    else if(g/255> b/255)
        w=g/255;
    else
        w=b/255;
    if (w>0.0)
    {
        c=((w-r/255)/w);
        m=((w-g/255)/w);
        y=((w-b/255)/w);
        k=1-w;              
    }
    else
    {
        k=1;
    }
    printf ("Converted value of RGB into CMKY are");
    printf ("%f is cyan %f is magenta %f is yellow %f is black.",c, m, y, k );
    getch();
}
