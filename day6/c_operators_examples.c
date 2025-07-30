/* 1. Add two integers.
Input two integers and print their sum.*/

#include <stdio.h> 
int main() {   
    int a, b;   
    printf("Enter two numbers: ");   
    scanf("%d %d", &a, &b);   
    printf("Sum = %d", a + b);   
    return 0;
}


/*Find remainder.
Input two integers and print the remainder when the first is divided by the second.*/


#include <stdio.h> 
int main() {
int a, b;
scanf("%d %d", &a, &b);
printf("Remainder = %d", a % b);
}


#include <stdio.h> 
int main() {
int i = 5;
printf("i++ = %d\n", i++); // prints 5, then i=6
printf("++i = %d", ++i);   // now i=7, prints 7
}


#include <stdio.h> 
int main() {
int n;
scanf("%d", &n);
if (n % 2 == 0)
    printf("Even");
else
    printf("Odd");
}



#include <stdio.h> 
int main() {
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
printf("Average = %d", (a + b + c) / 3);
}


#include <stdio.h> 
int main() {
int x, y;
scanf("%d %d", &x, &y);
if (x > y)
    printf("x > y");
else
    printf("x <= y");
}



#include <stdio.h> 
int main() {
int a, b, temp;
scanf("%d %d", &a, &b);
temp = a; a = b; b = temp;
printf("a=%d b=%d", a, b);
}


#include <stdio.h> 
int main() {
int a;
scanf("%d", &a);
a += 10;
printf("%d", a);
}


#include <stdio.h> 
int main() {
int a, b;
scanf("%d %d", &a, &b);
if (a > b)
    printf("Largest = %d", a);
else
    printf("Largest = %d", b);
}

#include <stdio.h> 
int main() {
int a, b, c, min;
scanf("%d %d %d", &a, &b, &c);
min = a;
if (b < min) min = b;
if (c < min) min = c;
printf("Smallest = %d", min);
}


#include <stdio.h> 
int main() {
int x, y;
scanf("%d %d", &x, &y);
printf("AND=%d OR=%d XOR=%d", x&y, x|y, x^y);
}


#include <stdio.h> 
int main() {
int x;
scanf("%d", &x);
printf("x<<2 = %d\n", x<<2);
printf("x>>2 = %d", x>>2);
}

#include <stdio.h> 
int main() {
int a, b;
scanf("%d %d", &a, &b);
printf("Largest = %d", (a > b) ? a : b);
}


#include <stdio.h> 
int main() {
int a, b;
scanf("%d %d", &a, &b);
if (a>0 && b>0)
    printf("Both positive");
else
    printf("Not both positive");
}


#include <stdio.h> 
int main() {
int n, k;
scanf("%d %d", &n, &k);
n = n ^ (1 << (k-1));
printf("%d", n);
}


#include <stdio.h> 
int main() {
int n, count=0;
scanf("%d", &n);
while(n) {
    count += n & 1;
    n >>= 1;
}
printf("Set bits = %d", count);
}


#include <stdio.h> 
int main() {
int n;
scanf("%d", &n);
if (n>0 && (n & (n-1))==0)
    printf("Yes");
else
    printf("No");
}


#include <stdio.h> 
int main() {
char c;
scanf(" %c", &c);
if (c>='A' && c<='Z')
    printf("Uppercase");
else
    printf("Not uppercase");
}


#include <stdio.h> 
int main() {
int n;
scanf("%d", &n);
printf("%d", n << 3);
}


#include <stdio.h> 
int main() {
int n;
scanf("%d", &n);
printf("%d", n >> 2);
}


#include <stdio.h> 
int main() {
int a=2,b=3,c=4;
printf("%d", a + b * c / b - c % a); // 2+4-0=6
}

#include <stdio.h> 
int main() {
int a, b;
scanf("%d %d", &a, &b);
a = a ^ b;
b = a ^ b;
a = a ^ b;
printf("a=%d b=%d", a, b);
}


#include <stdio.h> 
int main() {
int a = (1, 2, 3);
printf("%d", a); // prints 3
}

#include <stdio.h> 
int main() {
int n;
scanf("%d", &n);
printf("%d", ~n);
}

#include <stdio.h> 
int main() {
int n, k;
scanf("%d %d", &n, &k);
n = n & ~(1 << (k-1));
printf("%d", n);
}

#include <stdio.h> 
int main() {
int n, k;
scanf("%d %d", &n, &k);
n = n | (1 << (k-1));
printf("%d", n);
}


#include <stdio.h> 
int main() {
int n;
scanf("%d", &n);
if (n < 0)
    printf("Negative");
else
    printf("Not negative");
}

#include <stdio.h> 
int main() {
int n;
scanf("%d", &n);
printf("%d", ((++n) * 2) - 5);
}

#include <stdio.h> 
int main() {
printf("%d", 5+2<<1 & 3); // (7<<1)=14, 14&3=2
}

#include <stdio.h> 
int main() {
int a, b, diff;
scanf("%d %d", &a, &b);
diff = (a > b) ? (a - b) : (b - a);
printf("%d", diff);
}

