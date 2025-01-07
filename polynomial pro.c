#include<stdio.h>
int a, b, c, p, i, j, d, d2, temp, temp2;

void split_mid_term(int i,int j,int a,int c)
{
                    if(i<0 && j<0)
                    printf("\n=>\t%dx² %dx %dx",a,i,j);
                    
                    else if(i<0 && j>0)
                    printf("\n=>\t%dx² %dx + %dx",a,i,j);
                    
                    else if(i>0 && j<0)
                    printf("\n=>\t%dx² + %dx %dx",a,i,j);
                    
                    else
                    printf("\n=>\t%dx² + %dx + %dx",a,i,j);
                  
                    if(c>0)
                    printf(" + %d",c);
               
                    if(c<0)
                    printf(" %d",c);
}

void common(int a, int i, int j, int c)
{
    for(d=100;d>=-100;d--)
  {
   if(a%d ==0 && i%d ==0)
   {
   a = a/d;
   i = i/d;
   
   if(d == 1 && i < 0){
    printf("\n=>\tx(%dx %d)",a ,i);
    break;}
    
    else if(d == 1 && i > 0){
    printf("\n=>\tx(%dx + %d)",a ,i);
    break;}
    
    else if(d != 1 && i < 0){
    printf("\n=>\t%dx(%dx %d)",d ,a ,i);
    break;}
    
    else{
    printf("\n=>\t%dx(%dx + %d)",d ,a ,i);
    break;}
   }
  }
  for(d2=100;d2>=-100;d2--)
  {
      if(j%d2 ==0 && c%d2 ==0 && j/d2 ==a && c/d2 ==i)
      {
          c = c/d2;
          j = j/d2;
          
          if(c < 0 && d2 < 0){
          printf(" %d(%dx %d)",d2 ,j ,c);
          break;}
          
          else if(c > 0 && d2 > 0){
          printf(" + %d(%dx + %d)",d2 ,j ,c);
          break;}
          
          else if(c < 0 && d2 > 0){
          printf(" + %d(%dx %d)",d2 ,j ,c);
          break;}
          
          else{
          printf(" %d(%dx + %d)",d2 ,j ,c);
          break;}
      }
  }
  if(i < 0)
  printf("\n=>\t(%dx %d)",a ,i);
  
  else
  printf("\n=>\t(%dx + %d)",a ,i);
  
  if(d2 < 0)
  printf(" (%dx %d)",d,d2);
  
  else 
  printf(" (%dx + %d)",d,d2);
  
  if(i < 0){
  printf("\n\n=>\t%dx %d = 0",a ,i);
  i = i*(-1);
  printf("\n=>\t%dx = %d",a ,i);
  temp = i/a;
  printf("\n=>\tx = %d/%d",i ,a);
  printf("\n=>\tx = %d\n",temp);
  }
  
  else{
  printf("\n=>\t%dx + %d = 0",a ,i);
  i = i*(-1);
  printf("\n=>\t%dx = %d",a ,i);
  temp = i/a;
  printf("\n=>\tx = %d/%d",i ,a);
  printf("\n=>\tx = %d\n",temp);
  }
  //Replacing i to d2 and a to d and temp to temp2
  if(d2 < 0){
  printf("\n=>\t%dx %d = 0",d ,d2);
  d2 = d2*(-1);
  printf("\n=>\t%dx = %d",d ,d2);
  temp2 = d2/d;
  printf("\n=>\tx = %d/%d",d2 ,d);
  printf("\n=>\tx = %d\n",temp2);
  }
  
  else{
  printf("\n=>\t%dx + %d = 0",d ,d2);
  d2 = d2*(-1);
  printf("\n=>\t%dx = %d",d ,d2);
  temp2 = d2/d;
  printf("\n=>\tx = %d/%d",d2 ,d);
  printf("\n=>\tx = %d\n",temp2);
  }
  printf("\n=>\tx = %d, %d Answer🥰",temp, temp2);
}

void main()
{
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
    printf("\nEquation: %dx² %dx %d\n",a,b,c);
 
    else if(a>0 && b>0 && c<0)
    printf("\nEquation: %dx² + %dx %d\n",a,b,c);
 
    else if(a>0 && b<0 && c>0)
    printf("\nEquation: %dx² %dx + %d\n",a,b,c);
 
    else if(a>0 && b<0 && c<0)
    printf("\nEquation: %dx² %dx %d\n",a,b,c);
 
    else if(a<0 && b<0 && c<0)
    printf("\nEquation: %dx² %dx %d\n",a,b,c);
 
    else
    printf("\nEquation: %dx² + %dx + %d\n",a,b,c);
 
    printf("\nSOLUTION: \n");
    for(i=-100;i<=100;i++)
    {
        for(j=-100;j<=100;j++)
        {
            if(i*j==a*c && i+j==b)
            {  
             split_mid_term(i,j,a,c);
             common(a,i,j,c);
            }
            if(i*j==a*c && i+j==b)
            break;
            }
            if(i*j==a*c && i+j==b)
            break;
    }
    
printf("\n\n");  
printf("Press 1 to re-start the program and 0 to exit. \nEnter: ");
scanf("%d",&p);
printf("\n\n");
}while(p==1);
printf("\t    T H A N K  Y O U\n\n");
}