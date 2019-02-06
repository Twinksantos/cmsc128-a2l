//C Programming


//Basic Parts
#include <stdio.h>  // contains basic functions in C
 
 int                      // return value of main function 
 main()                   // where the program begins 
 { 
 
   printf("hello world\n"); 
 
   return 0;              // exit status of main program (means the program is finished) 
 } 





//Basic Examples

// //Sum of First N Natural Number
// #include <stdio.h>
// int main()
// {
//     int num, count, sum = 0;

//     printf("Enter a positive integer: ");
//     scanf("%d", &num);

//     // for loop terminates when n is less than count
//     for(count = 1; count <= num; ++count)
//     {
//         sum += count;
//     }

//     printf("Sum = %d", sum);

//     return 0;
// }



// //Program to print half pyramid using *//
// #include <stdio.h>
// int main()
// {
//     int i, j, rows;

//     printf("Enter number of rows: ");
//     scanf("%d",&rows);

//     for(i=1; i<=rows; ++i)
//     {
//         for(j=1; j<=i; ++j)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// //Factorial of a Number
// #include <stdio.h>
// int main()
// {
//     int n, i;
//     unsigned long long factorial = 1;

//     printf("Enter an integer: ");
//     scanf("%d",&n);

//     // show error if the user enters a negative integer
//     if (n < 0)
//         printf("Error! Factorial of a negative number doesn't exist.");

//     else
//     {
//         for(i=1; i<=n; ++i)
//         {
//             factorial *= i;              // factorial = factorial*i;
//         }
//         printf("Factorial of %d = %llu", n, factorial);
//     }

//     return 0;
// }



// //Palindrome Checker
// #include <stdio.h>
// int main()
// {
//     int n, reversedInteger = 0, remainder, originalInteger;

//     printf("Enter an integer: ");
//     scanf("%d", &n);

//     originalInteger = n;

//     // reversed integer is stored in variable 
//     while( n!=0 )
//     {
//         remainder = n%10;
//         reversedInteger = reversedInteger*10 + remainder;
//         n /= 10;
//     }

//     // palindrome if orignalInteger and reversedInteger are equal
//     if (originalInteger == reversedInteger)
//         printf("%d is a palindrome.", originalInteger);
//     else
//         printf("%d is not a palindrome.", originalInteger);
    
//     return 0;
// }



// // Odd or Even checker
// #include <stdio.h>
// int main()
// {
//     int number;
//     printf("Enter an integer: ");
//     scanf("%d",&number);

//     // True if remainder is 0
//     if( number%2 == 0 )
//         printf("%d is an even integer.",number);
//     else
//         printf("%d is an odd integer.",number);
//     return 0;
// }



// //Prime Number Checker
// #include <stdio.h>
// int main()
// {
//     int n, i, flag = 0;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     for(i = 2; i <= n/2; ++i)
//     {
//         // condition for nonprime number
//         if(n%i == 0)
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if (n == 1) 
//     {
//       printf("1 is neither a prime nor a composite number.");
//     }
//     else 
//     {
//         if (flag == 0)
//           printf("%d is a prime number.", n);
//         else
//           printf("%d is not a prime number.", n);
//     }
    
//     return 0;
// }