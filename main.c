//
//  main.c
//  pass_interview
//
//  Created by Zitong on 2021/1/22.
//
/*
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include "myfunctions.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
int hello(int a)
{
    return printf("hello!\ntest %d\n",a);
    
}
    int main(void)
{
    int a;
    for(a=1;a<4;a=a+1)
    {
        int (* p)(int)= & hello;
    int c;
        c = p(a);
   }
    return 0;
}
int main()
{
    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("You name is %s \n", name);
    return 0;

}
 
int main()
{
    double num1, num2;
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Answer: %f\n", num1 + num2);
    return 0;
}
 
int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrity[20];
    printf("Enther a color: ");
    scanf("%s", color);
    printf("Enter a pluraNoun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s", celebrity);
    
    printf("Rose is %s\n", color );
    printf("%s is blue\n", pluralNoun);
    printf("I love %s\n", celebrity);
    
    return 0;
    
}

int main()
{
    int luckyNumbers [] = {4,8,15,16,23,42};
    luckyNumbers[1] = 200;
    printf("%d\n",luckyNumbers[1]);
    return 0;
 }


void hello(char name[],int age)
{
    printf("hello %s, you are %d years old\n",name,age);

}
 int main()
 {
     hello("Tome",10);
     hello("Sam",20);
     hello("Jone",30);
     return 0;
 }

double cube(double num)
{
    double result = num * num * num;
    return result;
}
int main()
{
    printf("Answer: %f\n",cube(3.0));
    
    return 0;
}
 
int max(int num1, int num2, int num3, int num4)
{
    int result;
    if(num1 >= num2 && num1 >=num3 && num1 >= num4)
    {
        result = num1;
    }
    else if(num2 >= num1 && num2 >=num3 && num2 >= num4)
    {
        result = num2;
    }
    else if(num3 >= num1 && num3 >=num2 && num3 >= num4)
    {
        result = num3;
    }
    else
    {
        result = num4;
    }
    return result;
}

int main()
{
    int num1 ,num2 ,num3 ,num4 ;
    scanf("%d %d %d %d", &num1,&num2,&num3,&num4);
    //scanf("%d", &num2);
    //scanf("%d", &num3);
    //scanf("%d", &num4);
    printf("%d\n", max(num1,num2,num3,num4));
    return 0;
}

int main()
{
    double num1;
    double num2;
    char op;
    
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);
    printf("Enter a number: ");
    scanf("%lf", &num2);
    
    if (op == '+')
    {
        printf("%f", num1 + num2);
    }
    else if (op == '-')
    {
        printf("%f", num1 - num2);
    }
    else if (op == '/')
    {
        printf("%f", num1 / num2);
    }
    else if (op == '*')
    {
        printf("%f", num1 * num2);
    }
    else
    {
        printf("Invalid Operator");
    }
    return 0;
}
 #include <stdio.h>
 #include <stdlib.h>
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade = 'A';
    switch(grade)
    {
        case 'A':
            printf("you did great!");
            break;
        case 'B':
            printf("you did alright!");
            break;
        case 'C':
            printf("you did poorly!");
            break;
        case 'D':
            printf("you did very bad");
            break;
        case 'F':
            printf("you failed!");
            break;
        default:
            printf("Invalid Gread!");
    }
    
    return 0;
}
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tran(int a, int b)
{
    char c [b-a];
    int i;
    for(i =0 ;i<=b-a;i++)
    {
        c[i] = a + i;
        char n = c[i];
        if(n >= 1 && n <=9)
        {
            switch(n)
            {
                case '1':
                    printf("one");
                    break;
                case '2':
                    printf("two");
                    break;
                case '3':
                    printf("three");
                    break;
                case '4':
                    printf("four");
                    break;
                case '5':
                    printf("five");
                    break;
                case '6':
                    printf("six");
                    break;
                case '7':
                    printf("seven");
                    break;
                case '8':
                    printf("eight");
                    break;
                case '9':
                    printf("nine");
                    break;
            }
        }
        else
        {
            if (n%2 == 0)
            {
                printf("even");
            }
            else
            {
                printf("odd");
            }
        }
    }
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    tran(a,b);
    
    return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    char name[50];
    char major[50];
    int age;
    double gpa;
};
int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.5;
    strcpy( student1.name, "Tom");
    strcpy( student1.major, "CS");
    
    printf("");
    return 0;
    
}
 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int index = 6;
    do
    {
        printf("%d\n",index);
        index++;
    }while(index<=5);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int secretNumber = 5;
    int guess;
    int guessCount =0;
    int guessLimit = 3;
    int outOfGuess = 0;
    while( guess != secretNumber && outOfGuess == 0  )
    {
        if(guessCount < guessLimit)
        {
            printf("Enter a number: ");
            scanf("%d", &guess);
            guessCount++;
        }
        else
        {
            outOfGuess = 1;
        }
        
    }
    if(outOfGuess == 1)
    {
        printf("out of guess!");
    }
    else
    {
        printf("You Win!");
    }
    
    return 0;
}
 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    
    //int i =1;
    //while(i<=5)
    //{
    //    printf("%d\n",i);
   //     i++;
        
   // }
     
    int luckyNumber[] ={4,8,15,16,23,42};
    //luckyNumbee[]
    int i;
    for(i=0;i<6;i++)
    {
        printf("%d\n",luckyNumber[i]);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nums [3][2]={
        {1,2},
        {3,4},
        {5,6}
    };
    printf("%d",nums[1][1]);
    return 0;
    
}
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int nums[3][2]= {
        {1,2},
        {3,4},
        {5,6}
    };
    
    int i, j;
    for(i = 0;i<3;i++)
    {
        for(j = 0; j<2; j++){
            printf("%d,",nums[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    double gpa =3.4;
    char grade = 'A';
    
    printf("age: %p\ngpa: %p\ngarde: %p\n", &age, &gpa, &grade);
    return 0;
}
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade ;
    
    
    printf("age's memory address: %p\n", &age);
    return 0;
    
}
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age =30;
    int *pAge = &age;
    
    printf("%p\n",pAge);
    printf("%d\n",*pAge);
    printf("%d\n",*&age);
    printf("%d\n",&*&age);
    printf("%d\n",*&*&age);
    //printf("%d\n", *pAge);
    return 0;
}
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    FILE  * fpointer = fopen("employees.txt", "r");
    //fprintf(fpointer, "\nKelly, Customer Service" );
    fgets(line,255, fpointer);
    fgets(line,255, fpointer);
    printf("%s",line);
    
    fclose(fpointer);
    return 0;
}
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int i,a, b;
    scanf("%d %d", &a, &b);
    for(i = a; i <= b; i++)
    {
       if (i == 1)
       {
           printf("one\n");
       }
       else if (i == 2)
       {
           printf("two\n");
       }
       else if (i == 3)
       {
           printf("three\n");
       }
       else if (i == 4)
       {
           printf("four\n");
       }
       else if (i == 5)
       {
           printf("five\n");
       }
       else if (i == 6)
       {
           printf("six\n");
       }
       else if (i == 7)
       {
           printf("seven\n");
       }
       else if (i == 8)
       {
           printf("eight\n");
       }
       else if (i == 9)
       {
           printf("nine\n");
       }
       else if (i >9)
       {
           if (i%2 == 0)
           {
               printf("even\n");
           }
           else if (i%2 == 1)
           {
               printf("odd\n");
           }
       }
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    a = a+b;
    b = a - b;
    a = a -b;
    printf("Swap of the number: %d %d\n", a, b);
    
    return 0;
    //printf("Hello World!");
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a%2 == 1)
    {
        printf("%d is odd", a);
    }
    else
    {
        printf("%d is even", a);
    }
    return 0;
}
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int reverse = 0;
    int rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n != 0)
    {
        rem = n % 10;
        reverse = rem + reverse * 10;
        n /= 10;
    }
    printf("Reverse of the number is = %d\n", reverse);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int factorial = 1;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("%d 's factorial is %d", n, factorial);
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float r, area;
    printf("Enter the radius of the circle:");
    scanf("%f", &r);
    area = 3.14 * pow(r,2);
    printf("area = %f", area);
    return 0;
}
 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100];
    int n,i,j,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    
    for (i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 1; i <n;i++)
    {
        for (j = 0; j < (n-1); j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Array after sorting:");
    for (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
 
 
//bubble sort
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100];
    int i,j,n,temp;
    printf("Enter the number of the array:");
    scanf("%d", &n);
    printf("Enter the array:");
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=1; i<n; i++)
    {
        for (j=0; j<(n-1); j++)
        {
            if (a[j]>a[j+1])
            {
                
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                
                 a[j] = a[j] + a[j+1];
                 a[j+1] = a[j] - a[j+1];
                 a[j] = a[j] - a[j+1];
                 
            }
        }
    }
    printf("array after sorting:");
    for (i = 0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

 //insertion sort
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,temp;
    int array[100];
    printf("Enter the number of element: ");
    scanf("%d", &n);
    printf("Enter the element: ");
    for (i=0;i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    for (i=1;i <=(n-1);i++)
    {
        j = i;
        while (j>0 && array[j-1] > array[j])
        {
            temp = array[j];
            array[j] = array[j-1];
            array[j-1] = temp;
            j--;
        }
    }
    printf("after sorting: ");
    for(i =0; i< n;i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}


//selection sort
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100];
    int n,i,j;
    int position, swap;
    
    printf("Enter the number of the element: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    for(i=0; i< n-1 ; i++)
    {
        position = i;
        for (j = i+1 ; j<n; j++)
        {
            if (array[position] > array[j])
            {
                position = j;
            }
        }
        if (position != i)
            {
                swap = array[i];
                array[i] = array[position];
                array[position] = swap;
            }
    }
    printf("after sorting: ");
    for (i=0; i<n; i++)
    {
        printf("%d ", array[i]);
    }
    
    return 0;
}
 
#include <stdio.h>
#include <stdlib.h>

int binary(int search, int array[],int n)
{
    int first, last, middle;
    first = 0;
    last = n-1;
    middle = (first + last)/2;
    while(first < last)
    {
        if (array[middle] < search)
        {
            first = middle + 1;
        }
        else if(array[middle] > search)
        {
            last = middle - 1;
        }
        else if(array[middle] == search)
        {
            printf("%d found at position %d", search, middle+1);
            break;
        }
        middle = (first + last)/2;
    }
    if (first > last)
    {
        printf("Not found!");
    }
    return 0;
}
int main()
{
    int i, n, search;
    int array[100];
    printf("Enter array size: ");
    scanf("%d", &n);
    
    printf("Enter %d integers", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    
    printf("Enter value to find\n");
    scanf("%d", &search);
    
    binary(search, array, n);
    
    return 0;
}

//half pyramid
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    int rows;
    printf("Enter the row of the pyramid: ");
    scanf("%d", &rows);
    for(i=1;i <= rows; i++)
    {
        for (j = 1; j<= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
 
//exercise
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, rows;
    printf("Enter the rows of the pyramid: ");
    scanf("%d", &rows);
    for (i=1; i <= rows; ++i)
    {
        for (j = 1; j<=i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}

//full pyramid

#include <stdio.h>
#include <stdlib.h>
 
int main()

{
     int i, space, rows;
     int k = 0;
     printf("Enter number of rows: ");
     scanf("%d", &rows);
     for(i=1;i <= rows; i++, k=0)
     {
         for (space = 1; space<= rows -i; space++)
         {
             printf("  ");
         }
         while(k != 2*i -1)
         {
             printf("* ");
             k++;
         }
         
         printf("\n");
     }
     return 0;
 
}

#include <stdio.h>
#include <stdlib.h>
void minmax(int array[], int n, int i)
{
    int max = array[0];
    int min = array[0];
    for (i=0; i<n; i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }
        else if(array[i]<min)
        {
            min = array[i];
        }
    }
    printf("largest element is %d\n", max);
    printf("smallest element is %d\n", min);
}
int main()
{
    int array[10];
    int i,n;
    printf("Enter the number of the element: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (i = 0; i<n;i++)
    {
        scanf("%d", &array[i]);
    }
    minmax(array, n, i);
    return 0;
}
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    long x;
    int count = 0;
    printf("Enter any number: ");
    scanf("%lld", &x);
    while(x != 0)
    {
        count++;
        x/= 10;
    }
    
    printf("Total digits: %d\n", count);
    return 0;
}

 
//pow of the number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,e,i;
    long long result = 1;
    printf("Enter the base of the number: ");
    scanf("%d", &b);
    printf("Enter the exponent of the number: ");
    scanf("%d", &e);
    for (i = 1; i<=e;i++)
    {
        result = result * b;
    }
    //result = pow(b,e);
    printf("%d ^ %d = %ld", b,e,result);
    return 0;
}
 
//armstrong
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numb,originalNumb,r;
    int result = 0;
    int n = 0;
    printf("Enter an integer: ");
    scanf("%d", &numb);
    originalNumb = numb;
    
    while(originalNumb != 0)
    {
        originalNumb /= 10;
        ++n;
        //break;
    }
    originalNumb = numb;
    while (originalNumb != 0)
    {
        r = originalNumb % 10;
        result = result + pow(r,n);
        originalNumb /= 10;
        //break;
        //printf("r: %d ',' n: %d",r,n);
    }
    if (result == numb)
    {
        printf("%d is an Armstrong number.\n", numb);
    }
    else{
        printf("%d is not an Armstrong number.\n",numb);
    }
    printf("%d\n",result);
    return 0;
    
}
 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2,i,gcd = 0;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    for (i = 1; i <= n1 && i<= n2; ++i)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
            printf("%d\n",i);
        }
        
            //gcd = i;
        
    }
    printf("the GCD of %d and %d is %d\n", n1, n2, gcd);
    return 0;
}
 

#include <stdio.h>
#include <stdlib.h>

int gcd(int n1, int n2)
{
    if (n2 != 0)
    {
        return gcd(n2,n1%n2);
    }
    else
    {
        return n1;
    }
}
int main()
{
    int n1,n2,c;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    c = gcd(n1,n2);
    printf("GCD of %d and %d is %d",n1, n2, c);
    return 0;
}
 

#include <stdio.h>
#include <stdlib.h>

void maxmin(int array[], int n, int i)
{
    int max = array[0];
    int min = array[0];
    for (i = 0; i<n; i++)
    {
        if (array[i]> max)
        {
            max = array[i];
        }
        else if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("Largest element is %d\n", max);
    printf("Smallest element is %d\n", min);
}
int main()
{
    int array[100];
    int i, n;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (i=0; i <n; i++)
    {
        scanf("%d", &array[i]);
    }
    maxmin(array, n, i);
    return 0;
}
 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long x;
    int count = 0;
    printf("Enter any number: ");
    scanf("%l64d", &x);
    while(x != 0)
    {
        count++;
        x /= 10;
    }
    printf("Totla digits: %d\n", count);
    return 0;
}
 

#include <stdio.h>
#include <stdlib.h>

int gcd(int num1, int num2)
{
    if (num2 != 0)
    {
        return gcd(num2,num1%num2);
    }
    else
    {
        return num1;
    }
}
int main()
{
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    printf("G.C.D of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    return 0;
}
 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int convert(long long n)
{
    int decim = 0;
    int i = 0;
    int temp;
    while (n != 0)
    {
        temp = n % 10;
        n /= 10;
        decim += temp*pow(2,i);
        ++i;
    }
    return decim;
}
int main()
{
    long long n;
    printf("Enter a binary number:");
    scanf("%lld", &n);
    printf("%lld in binary = %d in decimal\n", n, convert(n));
    return 0;
    
}


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int convert (long long n)
{
    int decimal = 0;
    int i = 0;
    int temp;
    while(n != 0)
    {
        temp = n%10;
        n /= 10;
        decimal += temp * pow(2,i);
        ++i;
    }
    return decimal;
}

int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    printf("%d in binary = %d in decimal\n", n, convert(n));
    return 0;
}


//calculate difference between two time periods

#include <stdio.h>
#include <stdlib.h>

struct Time
{
    int secs, mins,hours;
};
void difference(struct Time start, struct Time stop, struct Time *diff)
{
    if(stop.secs > start.secs)
    {
        --start.mins;
        start.secs += 60;
    }
    diff->secs = start.secs -stop.secs;
    if(stop.mins > start.mins)
    {
        --start.hours;
        start.mins += 60;
    }
    diff->mins = start.mins - stop.mins;
    diff->hours = start.hours - stop.hours;
}

int main()
{
    struct Time startTime;
    struct Time stopTime;
    struct Time diff;
    
    printf("Please enter start time: \n");
    printf("Enter Hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &startTime.hours, &startTime.mins, &startTime.secs);
    
    printf("Please enter stop time: \n");
    printf("Enter hours, minutes and seconds separetely: ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.mins, &stopTime.secs);
    
    difference(startTime, stopTime, &diff);
    
    printf("\nTIME DIFFERENCE: %d:%d:%d - ", startTime.hours, startTime.mins, startTime.secs);
    printf("%d:%d:%d ", stopTime.hours, stopTime.mins, stopTime.secs);
    printf("= %d:%d:%d\n", diff.hours, diff.mins, diff.secs);
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
struct Time
{
    int hours;
    int mins;
    int secs;
};

void difference(struct Time start, struct Time stop, struct Time *diff)
{
    if(stop.secs > start.secs)
    {
        --start.mins;
        start.secs += 60;
    }
    diff->secs = start.secs - stop.secs;
    if (stop.mins > start.mins)
    {
        --start.hours;
        start.mins += 60;
    }
    diff->mins = start.mins - stop.mins;
    diff->hours = start.hours - stop.hours;
}

int main()
{
    struct Time startTime, stopTime, diff;
    printf("Please enter start time: \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &startTime.hours, &startTime.mins, &startTime.secs);
    
    printf("Please enter stop time: \n");
    printf("Enter hours, minutes and seconds respectively: ");
    scanf("%d %d %d", &stopTime.hours, &stopTime.mins, &stopTime.secs);
    
    difference(startTime, stopTime, &diff);
    
    printf("\n TIME DIFFERENCE: %d:%d:%d -", startTime.hours,startTime.mins,startTime.secs);
    printf("%d:%d:%d ", stopTime.hours, stopTime.mins, stopTime.secs);
    printf("= %d:%d:%d\n", diff.hours, diff.mins, diff.secs);
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num0, num1;
    int remem = 0;
    int temp;
    printf("Enter any number: ");
    scanf("%d", &num0);
    num1 = num0;
    
    while (num0 > 0)
    {
        temp = num0 %10;
        remem = remem*10 + temp;
        num0 = num0/10;
    }
    if (num1 == remem)
    {
        printf("%d is a palindromic number\n",num1);
    }
    else
    {
        printf("%d is not a palindromic\n", num1);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    char input, alpbet = 'A';
    printf("Enter the uppercase character you want to print in last row: ");
    scanf("%c", &input);
    for (i = 1; i <= (input -'A' + 1); i++)
    {
        for (j = 1; j <=i;j++)
        {
            printf("%c", alpbet);
        }
        alpbet++;
        printf("\n");
    }
    return 0;
}
 
// print inverted half pyramid using loop'*'
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (i = rows; i>=1; --i)
    {
        for (j = 1; j <= i; ++j)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
 
// check leap year
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    
    if(y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
            {
                printf("%d is a leap year\n",y);
            }
            else
            {
                printf("%d is not a leap year\n",y);
            }
        }
        else
        {
            printf("%d is a leap year\n",y);        }
        
    }
    else
    {
        printf("%d is not a leap year\n",y);
    }
    return 0;
}
 
//convert string from upper case to lover case
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[50];
    int i;
    printf("Enter the string: ");
    scanf("%s",&str);
    
    for (i = 0; i <= strlen(str); i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i] = str[i] + 32;
        }
    }
    printf("\n Lower case is: %s\n",str);
    return 0;
}
 
//convert string from lower case to upper case
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[50];
    int i;
    printf("Enter the string: ");
    scanf("%s",&str);
    
    for (i = 0; i<=strlen(str);i++)
    {
        if (str[i]>=97 && str[i]<=122)
        {
            str[i] = str[i] - 32;
        }
    }
    printf("\nUpper Case String is: %s\n",str);
    return 0;
}
 
//sum of array elements
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c[100];
    int i, n;
    int sum = 0;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    
    printf("Enter elements of the array: ");
    for(i = 0; i <n; i++)
    {
        scanf("%d", &c[i]);
    }
    for (i = 0; i <n; i++)
    {
        sum += c[i];
        
    }
    printf("Sum of array is : %d\n", sum);
    return 0;
}

 
// sort an array by quick sort
#include <stdio.h>
void quicksort(int number[50], int f, int l)
{
    int i, j, pt, temp;
    if(f<l)
    {
        pt = f;
        i = f;
        j = l;
        while(i<j)
        {
            while(number[i] <= number[pt] && i<l)
            {
                i++;
            }
            while(number[j] > number[pt])
            {
                j--;
            }
            if(i<j)
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pt];
        number[pt] = number[j];
        number[j] = temp;
        quicksort(number,f,j-1);
        quicksort(number,j+1,l);
    }
}

int main()
{
    int i;
    int count;
    int number[25];
    printf("How many elements are you going to enter?: ");
    scanf("%d",&count);
    printf("Enter  %d elements: ", count);
    for(i=0;i<count;i++)
    {
        scanf("%d", &number[i]);
    }
    quicksort(number, 0, count-1);
    printf("Order of Sorted elements: ");
    for(i = 0; i < count; i++)
    {
        printf(" %d",number[i]);
    }
    return 0;
}
 

// Swap two numbers using POINTERS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, t;
    
    printf("Enter Two Intergers\n");
    scanf("%d%d",&x, &y);
    
    printf("Before Swaping \nFirst Interger = %d \nSecond Interger = %d\n", x, y);
    
    t = x;
    x = y;
    y = t;
    printf("Before Swaping \nFirst Interger = %d \nSecond Interger = %d\n", x, y);
    return 0;
    
}


//Convert decimal number into binary
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long decimalToBinary (int decinum)
{
    long binum = 0;
    int rem, temp = 1;
    while (decinum != 0)
    {
        rem = decinum%2;
        decinum = decinum /2;
        binum = binum + rem*temp;
        temp = temp *10;
    }
    return binum;
}
int main()
{
    int decinum;
    printf("Enter a decimal Number: ");
    scanf("%d",&decinum);
    printf("Binary Number is: %ld\n", decimalToBinary(decinum));
    return 0;
}
 
// Convert decimal to octal 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long decinmuTooctnum (int decinum)
{
    long octnum = 0;
    int rem, tem =1;
    while (decinum != 0)
    {
        rem = decinum %8;
        decinum = decinum/8;
        octnum = octnum + rem*tem;
        tem = tem *10;
    }
    return octnum;
    
}
int main()
{
    int decinum;
    printf("Enter the decimal Number: ");
    scanf("%d", &decinum);
    printf("Octal Number is %ld\n", decinmuTooctnum(decinum));
    return 0;
}
 

//convert decimal to octal  2
#include <stdio.h>
#include <stdlib.h>
int main()
{
    long decinum, remainder, quotient;
    int octnum [100], i = 1, j;
    
    printf("Enter the decimal number: ");
    scanf("%ld", &decinum);
    quotient = decinum;
    while (quotient !=0)
    {
        octnum[i++] = quotient %8;
        quotient = quotient /8;
    }
    printf("Equivalent octal value of decimal num %d:",decinum);
    for (j = i - 1; j >0; j--)
    {
        printf("%d", octnum[j]);
    }
    return 0;
}
 

//convert octal to decimal
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long convertOctalToDecimal(int octnum)
{
    int decinum = 0, i = 0;
    while (octnum !=0)
    {
        decinum += (octnum%10)* pow(8,i);
        i++;
        octnum /= 10;
    }
    i = 1;
    return decinum;
}
int main()
{
    int octnum;
    printf("Enter an octal number: ");
    scanf("%d", &octnum);
    printf("%d in octal = %d in decimal", octnum, convertOctalToDecimal(octnum));
    return 0;
}
 

//convert binary to octal
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long long convertBinaryToOctal(int binnum)
{
    int decnum = 0,i = 0;
    while (binnum != 0)
    {
        decnum += (binnum%2) * pow(2,i);
        i++;
        binnum/=10;
    }
    i = 1;
    long octnum = 0;
    int rem, tem =1;
    while (decnum != 0)
    {
        rem = decnum %8;
        decnum = decnum/8;
        octnum += rem*tem;
        tem = tem *10;
    }
    return octnum;
}
int main()
{
    int binum;
    printf("Enter an octal binum: ");
    scanf("%d",&binum);
    printf("%d in binum = %d in Octal", binum, convertBinaryToOctal(binum));
    return 0;
}
 
//find the largest among three numbers using pointers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, num3;
    int *pt1, *pt2, *pt3;
    
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    printf("Enter Third Number: ");
    scanf("%d", &num3);
    
    pt1 = &num1;
    pt2 = &num2;
    pt3 = &num3;
    if (*pt1 > *pt2)
    {
        if(*pt1 > *pt3)
        {
            printf("%d is the largest number: ",*pt1);
        }
        else
        {
            printf("%d is the largest number: ",*pt3);
        }
    }
    else
    {
        if(*pt2 > *pt3)
        {
            printf("%d is the largest number: ",*pt2);
        }
        else
        {
            printf("%d is the largest number: ",*pt3);
        }
    }
    return 0;
}
 
//find the average three number
#include <stdio.h>
#include <curses.h>
int main()
{
    float a,b,c,av=0;
    printf("Enter any three numbers to find theis average \n");
    scanf("%f%f%f",&a,&b,&c);
    av = (a+b+c)/3.0;
    printf("\n Average of three numbers is \t %f",av);
    //getch();
    return 0;
}
 
//concatenate two strings using pointers
#include <stdio.h>
int main()
{
    char aa[100], bb[100];  // array declaration
    printf("Enter the first string: ");
    gets(aa);
    //scanf("%s",&aa);
    printf("Enter the second string to be concatenated: ");
    gets(bb);
    //scanf("%s",&bb);
    char *a = aa;
    char *b = bb;
    while (*a)
    {
        a++;
    }
    while (*b)
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';   //formal!
    printf("\nThe string after concatenation is: %s ",aa);
    return 0;
}
 
//reverse a string using pointers
#include <stdio.h>
int main()
{
    char s[100];
    char rev[100];
    char *sptr = s;
    char *rptr = rev;
    
    int i = -1;
    printf("\nEnter a string: ");
    gets(s);
    
    while (*sptr)   //sorting the ending address of s in sptr
    {
        sptr++;
        i++;
    }
    while (i >= 0)   //sorting the string s in rev in reverse order
    {
        sptr--;
        *rptr = *sptr;
        rptr++;
        i--;
    }
    *rptr = '\0'; //formal!
    
    rptr = rev;
    while(*rptr)
    {
        *sptr = *rptr;
        rptr++;
        sptr++;
    }
    printf("\nReverse of the string is: %s", s);
    return 0;
}
 

//add two numbers using recursion
#include <stdio.h>
#include <stdlib.h>
int add(int, int);
int main()
{
    int a,b,r;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    r = add(a, b);
    printf("Sum of two numbers are: %d\n",r);
    return 0;
}
int add(int a, int b)
{
    if (b==0)
    {
        return a;
    }
    else
    {
        return (1+add(a,b-1));
    }
}
 

//calculate factorial using recursion
#include <stdio.h>
#include <stdlib.h>
int facto(int);
int main()
{
    int n,f;
    printf("Enter the integer number: ");
    scanf("%d", &n);
    f = facto(n);
    printf("\nfactorial of %d is: %d", n,f);
    return 0;
}
int facto(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n*facto(n-1));
    }
}
 

//print fibonacci series using recursion
#include <stdio.h>
#include <stdlib.h>
int fibo(int);
int main()
{
    int a,c;
    int i = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &a);
    printf("\nFibonacci series: ");
    for(c = 1;c <= a;c++)
    {
        printf("%d\n",fibo(i));
        i++;
    }
    return 0;
}
int fibo(int a)
{
    if (a==0)
    {
        return 0;
    }
    else if (a ==1)
    {
        return 1;
    }
    else
    {
        return (fibo(a-1)+fibo(a-2));
    }
}
 
//sum of first n numbers using recursion
#include <stdio.h>
#include <stdlib.h>
void dspsum(int);
int main()
{
    int num;
    printf("Enter the Nth number: ");
    scanf("%d", &num);
    dspsum(num);
    return 0;
}
void dspsum(int num)
{
    static int sum = 0;
    if (num == 0)
    {
        printf("Sum of first N number is %d\n",sum);
        return;
    }
    else
    {
        sum += num;
        dspsum(num-1);
    }
}
 
//calculate sum of digits using recursion
#include <stdio.h>
#include <stdlib.h>
int sum(int);
int main()
{
    int n, r;
    printf("Enter the number: ");
    scanf("%d", &n);
    r = sum(n);
    printf("Sum of digits in %d is %d\n",n,r);
    return 0;
}
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n%10 + sum(n/10));
    }
}
 

//check palindrome using recursion
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int rev(int num)
{
    int n = log10(num);
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return (rev(num/10)+(num%10)*pow(10, n));
    }
}
int palin(int num)
{
    if(num == rev(num))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter the check number: ");
    scanf("%d", &num);
    if(palin(num) == 1)
    {
        printf("%d is palindrome number.", num);
    }
    else
    {
        printf("%d is not a palindrome number.", num);;
    }
    return 0;
}
 */
#include <stdio.h>
int main()
{
    char aa[100], bb[100];  // array declaration
    printf("Enter the first string: ");
    gets(aa);
    //scanf("%s",&aa);
    printf("Enter the second string to be concatenated: ");
    gets(bb);
    //scanf("%s",&bb);
    char *a = aa;
    char *b = bb;
    while (*a)
    {
        a++;
    }
    while (*b)
    {
        *a = *b;
        b++;
        a++;
    }
    *a = '\0';   //formal!
    printf("\nThe string after concatenation is: %s ",aa);
    return 0;
}
