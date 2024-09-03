//Pranit Visave FYMCA
//MC241017733


//Q11
/*
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
*/
//Q12
/*
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

*/

//Q13
/*
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter 3 Numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	(a>b) ? ((a>c) ? printf("%d is largest\n",a) : ((b>c) ? (b>a) : printf("%d o is largest\n",b)):printf("%d is largest\n",c));
	} 

*/
//Q14
//Quadtratic eq

//Q15
/*
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
*/

//Q16
/*
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
*/
//Q17
/*

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
*/

//Q18

/*
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
*/
//Q19
/*
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
*/
//Q20
/*
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
/*
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
