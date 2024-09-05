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

//Q11

#include<stdio.h>
void main(){
	int a = 10;
	printf("a = %d\n",a);
	a++;
	printf("a++ = %d\n",a);
	++a;
	printf("++a = %d\n",a);
	printf("a = %d\n",a);
}

mca@mca-OptiPlex-3050-AIO:~$ ./a.out
a = 10
a++ = 11
++a = 12
a = 12

//Q12

#include<stdio.h>
void main(){
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	(a>b) ? printf("%d is greater",a):printf("%d is greater",b);
}
mca@mca-OptiPlex-3050-AIO:~$ ./a.out
Enter two numbers : 23 11
23 is greater(base)



//Q13

#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter 3 Numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	(a>b) ? ((a>c) ? printf("%d is largest\n",a) : ((b>c) ? (b>a) : printf("%d o is largest\n",b)):printf("%d is largest\n",c));
	} 


//Q14
//Quadtratic eq

//Q15

#include<stdio.h>
void main(){
	float a,b,c;
	char name[10];
	float per;
	char g;
	printf("Enter Name : ");
	scanf("%s",name);
	printf("Enter Marks in 3 Subjects : ");
	scanf("%f %f %f",&a,&b,&c);
	printf("Total Marks : %f\n",a+b+c);
	per = (a+b+c)/3;
	printf("Percentage : %f\n",per);
	if (per >=75 )
		printf("Grade 1ST Class\n");
	else if (per >=60)
		printf("Grade 2ND Class\n");
	else if (per >=35)
		printf("Grade PASS\n");
	else
		printf("FAIL");
}

Enter Name : Pranit
Enter Marks in 3 Subjects : 60 70 89
Total Marks : 219.000000
Percentage : 73.000000
Grade 2ND Class


//Q16

#include<stdio.h>
void main(){
	int year;
	printf("Enter Year : ");
	scanf("%d",&year);
	if (year % 4 == 0 || year % 100 == 0 && year % 400 == 0)
		printf("Year %d is Leap \n",year);
	else
		printf("Year %d is not leap year\n",year);
}

Enter Year : 2017
Year 2017 is not leap year
(base) mca@mca-OptiPlex-3050-AIO:~$ ./a.out
Enter Year : 2000
Year 2000 is Leap 

//Q17

#include<stdio.h>
void main(){
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	int fact = 1;
	for (int i=n;i>=1;i--)
		fact = fact*i;
	printf("Factorial of %d ",fact);
}

Enter number : 5
Factorial of 120 (base) mca@mca-OptiPlex-3050-AIO:~$ ./a.out
Enter number : 7
Factorial of 5040 (base) mca@mca-OptiPlex-3050-AIO:~$ ./a.out
Enter number : 3
Factorial of 6 


//Q18


#include<stdio.h>
void main(){
	int n;
	printf("Enter number : ");
	scanf("%d",&n);
	int num = n;
	int sum=0,rem;
	while (n!=0){
		rem = n%10;
		sum += rem*rem*rem;
		n/=10;
	}
	if (sum == num)
		printf("%d is an Armstrong number \n",num);
	else	
		printf("%d is not an armstrong number\n",num);
}

Enter number : 153
153 is an Armstrong number 

//Q19

#include<stdio.h>
void main(){
	int n;
	int sum=0,rem;
	printf("Enter number : ");
	scanf("%d",&n);
	for (int i=n;i>0;i=i/10){
		rem = n%10;
		sum += rem;
	}
	printf("Sum = %d",sum);
}

Enter number : 444
Sum = 12

//Q20

#include<stdio.h>
void main(){
	int num,n=0;
	printf("Enter number : ");
	scanf("%d",&num);
	while (num!=0){
		n++;
		num/=10;
	}
	printf("%d",n);
}

Enter number : 111
3(base) mca@mca-OptiPlex-3050-AIO:~$ ./a.out
Enter number : 12334
*/

//Q21

#include<stdio.h>
void main(){
	int n1=0,n2=1,it=10;
	int n3=n1+n2;
	printf("%d\t%d\t",n1,n2);
	for (int i=3;i<=it;i++){
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
		n3=n1+n2;
	}
}

0	1	1	2	3	5	8	13	21	34	*/
