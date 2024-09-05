//Pranit Visave FYMCA
//MC24101733
//Q1

#include<stdio.h>
void main(){
    printf("This is my first C program\n");
}

mca@mca-OptiPlex-3050-AIO:~/Desktop$ ./a.out
This is my first C program


//Q2

#include<stdio.h>
void main(){
    int a,b,c;
    a = 6;
    b = 2;
    c = a+b;
    printf("Sum of A And B : %d",c);
}

mca@mca-OptiPlex-3050-AIO:~/Desktop$ ./a.out
Sum of A And B : 8

//Q3


#include<stdio.h>
void main(){
    int a,b,c;
    a = 4;
    b = 5;
    c = a*b;
    printf("Product of a and b : %d",c);
}

mca@mca-OptiPlex-3050-AIO:~/Desktop$ ./a.out
Product of a and b : 20
*/

//Q4
void main(){
    int r = 10;
     float area, circum;
     area = 3.14 * r * r;
     circum = 2 * 3.14 * r;
     printf("Area of Circle : %f\nCircumference of Circle : %f\n",area,circum);
}

//Q5
#include<stdio.h>
void main(){
    int a,b;
    a = 10;
    b = 5;
    printf("Addition : %d\n",a+b);
    printf("Subtraction : %d\n",a-b);
    printf("Multiplication : %d\n",a*b);
    printf("Division : %d\n",a/b);
}
 //Q6-i,ii
void main(){
   //v= u+at;
    float v,u,a,t;
     u = 10;
     a = 1.6;
     t = 20;
     v = u + a*t;
     printf("Final Velocity : %f",v);

     float s = (u*t) + 1/2 * a*(t*t);
    printf("Speed : %f\n",s);
 }
//Q7
#include<stdio.h>
#include<math.h>
 void main(){
     float p,r,t,s,c;
     p = 30000;
     r = 6.5;
     t = 10;
     s = (p*r*t)/100;
     printf("Simple Interest : %f\n",s);
     //c = p*
 }

// //Q8
 void main(){
     int a=40,b=60;
     b=b+a;
     a=b-a;
     b=b-a;
     printf("Original Numbers : a = %d, b=%d\n,a,b");
     printf("Swaped Numbers a = %d, b = %d\n",a,b);
 }
 //Q9
 #include<stdio.h>
 void main(){
     int a = 10;
     float b = 2.5;
     double d = 3.0563;
     char c = 'a';
     printf("int = %lu",sizeof(a));
     printf("float = %lu",sizeof(b));
     printf("double = %lu",sizeof(d));
     printf("chaR = %lu",sizeof(c));
 }
 //Q10
 #include<stdio.h>
 void main(){
     int a=10,b=20,c=15;
     int largest = ((a>b)?(a>c):a:c)
 }
