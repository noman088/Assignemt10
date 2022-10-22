// 1. Write a function to calculate the area of a circle. (TSRS)
// #include<stdio.h>
// #include<conio.h>
// int   AreaOfCircle(int );
// int main()
// {

//     int r;
//     float s;
//     printf("Enter radius of A circle ");
//     scanf("%d", &r);
//     s = AreaOfCircle(r);
//     printf("the area of circle is %.1f", s);

//     return 0;
// }
// int  AreaOfCircle(int r)
// {

//     float c;
//     c = 2 * 3.14 * r *r;
//     return c;
// }

// 2. Write a function to calculate simple interest. (TSRS)
// #include <stdio.h>
// #include <conio.h>
// int simpleinterest(int, int, int);
// int main()
// {
//     int p, r, t;
//     printf("Enter payment ,rate and time ");
//     scanf("%d%d%d", &p, &r, &t);
//     simpleinterest(p, r, t);
//     return 0;
// }

// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)
// #include<stdio.h>
// #include<conio.h>
// int checkEvenOdd(int);
// int main()
// {
//     int   num,Check;
//     printf("enter a Number ");
//     scanf("%d", &num);
//     Check = checkEvenOdd( num);
//     printf("%d", Check);
//    return 0;
// }
// int checkEvenOdd(int num)
// {
//     if(num%2==0)
//         return 1;
//     else
//         return 0;
// }

// 4. Write a function to print first N natural numbers (TSRN)

// #include<stdio.h>
// #include<conio.h>
// int NaturalNumber(int);
// int main()
// {
//     int naturalnumber,N;
//     printf("Enter N Number do you want to Print \n");
//     scanf("%d", &N);
//     printf("The Number are : ");
//     NaturalNumber(N);
//     return 0;
// }

// int NaturalNumber(int Natural)
// {
//     int i;
//     for (i = 1; i <= Natural;i++)
//     {
//         printf("%d ", i);
//     }
// }

// 5. Write a function to print first N odd natural numbers. (TSRN)
// #include<stdio.h>
// #include<conio.h>
// int oddNumbers(int);
// int main()
// {
//     int print, Odd;
//     printf("Enter N odd Numbers ");
//     scanf("%d",&Odd);
//     printf("The Odd Numbers are : ");
//     oddNumbers(Odd);
//     getch();
//     return 0;
// }
// int oddNumbers(int odd)
// {
//     int i;
//     for (i = 1; i <= odd; i++)
//     {
//         printf("%d ", 2*i-1);
//     }
// }

// 6. Write a function to calculate the factorial of a number. (TSRS)
// #include<stdio.h>
// #include<conio.h>
// int factorial(int);
// int main()
// {
//     int n,fact;
//     printf("Enter a Number    ");
//     scanf("%d", &n);
//     fact = factorial( n);
//     printf(" the factorial of %d is %d", n, fact);
//     return 0;
// }

// int factorial(int F)
// {
//     int i, s=1;
//     for (i = 1; i <= F;i++)
//     {
//         s = s * i;
//     }
//     return s;
// }

// 7. Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)
// #include <stdio.h>
// #include <conio.h>
// int Combination(int, int);
// int fact(int);
// int main()
// {
//     int N, R, Comb;
//     printf("Enter N and R ");
//     scanf("%d%d", &N, &R);
//     Comb = Combination(N, R);
//     printf("%d", Comb);
//     return 0;
// }
// int Combination(int N, int R)
// {

//     int C;
//     C = fact(N) / (fact(R) * fact(N - R));
// }

// int fact(int num)
// {
//     int i, f = 1;
//     for (i = 1; i <= num; i++)
//         f = f * i;

//     return f;
// }

// 8. Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS)
// #include <stdio.h>
// #include <conio.h>
// int permutation(int, int);
// int fact(int);

// int fact(int num)
// {
//     int i, factorial;
//     for (i = 1; i <= num; i++)
//         factorial = factorial * i;

//     return factorial;
// }

// int permutation(int n, int r)
// {
//     int per;
//     per = fact(n) / fact(n - r);
//     return per;
// }

// int main()
// {
//     int n, r;
//     printf("Enter the Value of n and r");
//     scanf("%d%d", &n, &r);
//     printf("%d is arrangements", permutation(n, r));

//     return 0;
// }

// 9. Write a function to check whether a given number contains a given digit or not.
// (TSRS)

// #include<stdio.h>
// #include<conio.h>
// int CheckDigit(int,int );
// int main()
// {
//    int num, digit;
//     printf("Enter a Number ");
//     scanf("%d", &num);
//     printf("Enter the digit ");
//     scanf("%d", &digit);
//     CheckDigit(num, digit);

//     return 0;
// }

// int CheckDigit(int number, int Digit )
// {
//     int rem;

//     while(number!=0)
//     {
//      rem = number % 10;
//         if(rem==Digit)
//            break;
//          else
//          number = number / 10;
//     }
//       if(rem==Digit)
//          return 1;
//        else
//         return 0

// }

// 10. Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)
// #include <stdio.h>
// #include <conio.h>
// int PrimeFactor(int);
// int main()
// {
//     int i, num;
//     printf("Enter a Number ");
//     scanf("%d", &num);
//     PrimeFactor(num);
// }

// int PrimeFactor(int num)
// {
//     int i;
//     for (i = 2; num != 1; i++)
//     {
//         while (num % i == 0)
//         {
//             num = num / i;
//             printf("%d ", i);
//         }
//     }
// }
