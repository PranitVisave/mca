//Pranit Visave FYMCA
//MC24101733

//Q22
/*
#include<stdio.h>
void main(){
    int n,rev=0,rem;
    printf("Enter Number : ");
    scanf("%d",&n);
    while (n!=0){
        rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }
    printf("Reverse : %d\n",rev);
}

*/
//Q23
/*
#include<stdio.h>
void main(){
    int n,sum=0,i,rem;
    printf("Enter a number : ");
    scanf("%d",&n);
    for (i=n;i>0;i=i/10){
        rem = i%10;
        sum += rem;
    }
    printf("Sum of Digits in given integer : %d",sum);
}*/
//Q24
/*
#include<stdio.h>
void main(){
    int n,rev=0,rem;
    printf("Enter Number : ");
    scanf("%d",&n);
    int num = n;
    while (n!=0){
        rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }
    if (rev == num){
        printf("Number is palindrome\n");
    }
    else{
        printf("Number is not palindrome\n");
    }
}*/
//Q25
/* 
#include<stdio.h>
void main(){
    int num,sum=0,n;
    printf("Enter 4 digit number : ");
    scanf("%d",&num);
    n=num%10;
    sum+=n;
    for (int i=0;i<=2;i++){
        num=num/10;
    }
    sum+=num;
    printf("Sum of 1st and 4th digit : %d",sum);
}*/
//Q26
/*
#include<stdio.h>
void main(){
    int a,b,i,gcd,lcm,max;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    for (i=1;i<=a && i<=b;++i){
        if (a%i==0 && b%i==0)
            gcd=i;
    }
    if (a>b)
        max = a;
    else
        max = b;
    lcm = max;
    while ((lcm % a != 0) || (lcm %b !=0))
        lcm+=max;
    printf("GCD : %d\nLCM : %d\n",gcd,lcm);
}
*/
//Q27
/*
#include<stdio.h>
void main(){
    int i,j;
    for (i=0;i<=6;i++){
        for (j=0;j<=i;j++)
            printf(" * ");
        printf("\n");
    }
}
 * 
 *  * 
 *  *  * 
 *  *  *  * 
 *  *  *  *  * 
 *  *  *  *  *  * 
 *  *  *  *  *  *  * 
 */
//Q28
/*
#include<stdio.h>
void main(){
    int a[10],i,n,flag=0;
    printf("Enter array of size 8 : ");
    for (i=0;i<8;i++)
        scanf("%d",&a[i]);
    printf("Enter number to search : ");
    scanf("%d",&n);
    for (i=0;i<8;i++){
        if (a[i] == n){
            flag = 1;
            break;
        }
    }
    if (flag == 1)
            printf("%d found at position %d\n",n,i);
    else
        printf("not found");
        
}*/
//Q29
/*
#include<stdio.h>
void main(){
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int sum=0;
    for (int i=0;i<10;i++)
        sum+=a[i];
    printf("Sum of array elements : %d\n",sum);
}*/

//Q30
/*
#include<stdio.h>
void main(){
    int a[8]={3,1,5,7,4,21,45,23};
    int min=a[0],max=a[0];
    for (int i=1;i<8;i++){
        if (max < a[i]){
            max = a[i];
        }
        if (min > a[i]){
            min = a[i];
        }
    }
    printf("Min : %d\nMax : %d\n",min,max);
}*/

//Q31
/*
#include<stdio.h>
void main(){
    int a[8]={1,2,3,4,5,6,7,8};
    int t,start=0,end=7;
    while (start <= end){
        t=a[start];
        a[start]=a[end];
        a[end]=t;
        start++;
        end--;
    }
    for (int i=0;i<8;i++)
        printf("%d\t",a[i]);
}
*/
//Q32
/*
#include<stdio.h>
void main(){
    int a[10]={1,2,3,4,5,6,7,8,9,0};
    int pos;
    printf("Enter position to delete element : ");
    scanf("%d",&pos);
    for (int i=pos;i<10;i++){
        a[i]=a[i+1];
    }
    for (int i=0;i<9;i++)
        printf("%d\t",a[i]);
}*/
//Q33
/*
#include<stdio.h>
void main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }

}*/
//Q34
#include<stdio.h>
void main(){
    int r1,c1,r2,c2,i,j,sum=0;
    int a[10][10],b[10][10],c[10][10];
    printf("Enter no  of rows : ");
    scanf("%d",&r1);
    printf("Enter no of columns : ");
    scanf("%d",&c1);
    printf("Enter first matrics : ");
    for (i=0;i<r1;i++)
        for (j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
    printf("Enter no  of rows : ");
    scanf("%d",&r2);
    printf("Enter no of columns : ");
    scanf("%d",&c2);
    printf("Enter Second matrics : ");
    for (i=0;i<r2;i++)
        for (j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
    if (r1!=r2 || c1!=c2)
        printf("Addition cannot be performed");
    else{
        for (i=0;i<r1;i++)
            for (j=0;j<c1;j++)
                c[i][j]=a[i][j]+b[i][j];
    }
    printf("Addition : \n");
    for (i=0;i<r1;i++){
        for (j=0;j<c1;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }
}

//Q35
#include<stdio.h>
void main(){
        int a[3][3],b[3][3],m[3][3],i,j;
        printf("Enter Elements in first matrix : ");
        for (i=0;i<3;i++)
                for (j=0;i<3;j++)
                        scanf("%d",&a[i][j]);
        printf("Enter Elements in second matrix : ");
        for (i=0;i<3;i++)
                for (j=0;i<3;j++)
                        scanf("%d",&b[i][j]);    
        for (i=0;i<3;i++){
            for (j=0;i<3;j++){
                m[i][j]=0;
                for (int k=0;k<3;k++)
                    m[i][j] += a[i][j]*b[j][k];
            }
        }
        printf("Multiplication of two matrices : \n");
        for (i=0;i<3;i++){
            for (j=0;k<3;j++)
                printf("%d ",m[i][j]);
            printf("\n");
        }
}
