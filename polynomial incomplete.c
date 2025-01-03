#include<stdio.h>
main()
{
    int a,b,c,p,i,j;
    do{
    printf("Equation: ax²+bx+c\n");
    printf("\nEnter the value of a: ");
    scanf("%d",&a);
    printf("\nEnter the value of b: ");
    scanf("%d",&b);
    printf("\nEnter the value of c: ");
    scanf("%d",&c);

    if(a<0 && b>0 && c>0)
    printf("\nEquation: %dx² + %dx + %d\n",a,b,c);
 
    else if(a>0 && b<0 && c<0)
    printf("\nEquation: %dx²%dx%d\n",a,b,c);
 
    else if(a>0 && b>0 && c<0)
    printf("\nEquation: %dx²+%dx%d\n",a,b,c);
 
    else if(a>0 && b<0 && c>0)
    printf("\nEquation: %dx²%dx+%d\n",a,b,c);
 
    else if(a>0 && b<0 && c<0)
    printf("\nEquation: %dx²%dx%d\n",a,b,c);
 
    else if(a<0 && b<0 && c<0)
    printf("\nEquation: %dx²%dx%d\n",a,b,c);
 
    else
    printf("\nEquation: %dx²+%dx+%d\n",a,b,c);
 
    printf("\nSOLUTION: \n");
    for(i=-100;i<=100;i++)
    {
        for(j=-100;j<=100;j++)
        {
            if(i*j==a*c && i+j==b)
            {       if(i<0 && j<0)
                    printf("\n\t%dx²%dx%dx",a,i,j);
                    
                    else if(i<0 && j>0)
                    printf("\n\t%dx²%dx+%dx",a,i,j);
                    
                    else if(i>0 && j<0)
                    printf("\n\t%dx²+%dx%dx",a,i,j);
                    
                    else
                    printf("\n\t%dx²+%dx+%dx",a,i,j);
                  
                    if(c>0)
                    printf("+%d",c);
               
                    if(c<0)
                    printf("%d",c);
                    break;
            }
            if(i*j==a*c && i+j==b)
            break;
            }
            if(i*j==a*c && i+j==b)
            break;
    }
    
printf("\n\n");  
printf("Press 1 for re-start the program and 0 for exit. \nEnter: ");
scanf("%d",&p);
printf("\n\n");
}while(p==1);
printf("\t    T H A N K  Y O U\n\n");
}