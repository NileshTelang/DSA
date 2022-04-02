#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Myself{
    char name[100] ;
    char partnerName[100] ;
};

int main(){
    printf("Hellow  Nova \n");
    // short a=7;
    // long b=123456;
    // long long c=7447654275;
    // long double d=744765427594.00;
    // int e=4131;
    // char f='F';
    // char clgName[] = "Imperial";
    // // string %s;

    // printf("size of short = %d bytes and The value is  %hd\n", sizeof(a),a);
    // printf("size of long = %d bytes and The value is  %ld\n", sizeof(b),b);
    // printf("size of long long = %d bytes and The value is  %lld\n", sizeof(c),c);
    // printf("size of long double= %d bytes and The value is  %lf\n", sizeof(d),d);
    // printf("size of int = %d bytes and The value is  %d\n",sizeof(e),e);
    // printf("size of char = %d bytes and The value is  %c\n",sizeof(f),f);
    // int z;
    // scanf("%d",&z);
    // printf("The number is : %d",z);
    // char chr;
    // printf("Enter a character: ");
    // scanf("%c", &chr);     

    // // When %c is used, a character is displayed
    // printf("You entered %c.\n",chr);  

    // // When %d is used, ASCII value is displayed
    // printf("ASCII value is %d.", chr);

    // int a = 10, b = 100;
    // float c = 10.5, d = 100.5;

    // printf("++a = %d \n", ++a);
    // printf("--b = %d \n", --b);
    // printf("++c = %f \n", ++c);
    // printf("--d = %f \n", --d);

    // int a = 5, c;

    // c = a;      // c is 5
    // printf("c = %d\n", c);
    // c += a;     // c is 10 
    // printf("c = %d\n", c);
    // c -= a;     // c is 5
    // printf("c = %d\n", c);
    // c *= a;     // c is 25
    // printf("c = %d\n", c);
    // c /= a;     // c is 5
    // printf("c = %d\n", c);
    // c %= a;     // c = 0
    // printf("c = %d\n", c);

    // int a = 5, b = 5, c = 10;

    // printf("%d == %d is %d \n", a, b, a == b);
    // printf("%d == %d is %d \n", a, c, a == c);
    // printf("%d > %d is %d \n", a, b, a > b);
    // printf("%d > %d is %d \n", a, c, a > c);
    // printf("%d < %d is %d \n", a, b, a < b);
    // printf("%d < %d is %d \n", a, c, a < c);
    // printf("%d != %d is %d \n", a, b, a != b);
    // printf("%d != %d is %d \n", a, c, a != c);
    // printf("%d >= %d is %d \n", a, b, a >= b);
    // printf("%d >= %d is %d \n", a, c, a >= c);
    // printf("%d <= %d is %d \n", a, b, a <= b);
    // printf("%d <= %d is %d \n", a, c, a <= c);

    char z[100];  
    printf("Enter the string ? ");
    fgets(z,100,stdin); // can use  %s for string upto first space or modify scanf like - scanf("%[^\n]z",z); 
    printf("You entered %s\n",z); 
    printf("The Reversed String Is : %s\n",strrev(z));
    // struct Myself nil;
    // // !!! error nil.name = "Nilesh Telang";
    // strcpy(nil.name,"Nilesh Telang");
    // strcpy(nil.partnerName,"Trisha");
    // printf("My name Is %s and my Love Is %s ",nil.name,nil.partnerName);

    // int hiraeth = 4131;
    // printf("memo address of hiraeth = %p \n",&hiraeth);

    // //pointers
    // int *pHiraeth = &hiraeth ;
    // printf("The *pHiraeth is : %d \n",*pHiraeth); //or "%d ,*&phiraeth
    // printf("The pHiraeth is : %p \n",pHiraeth);
    // printf("The &pHiraeth is : %p \n",&pHiraeth); 

    // //?? FILES
    // FILE *fptr = fopen("Nova.text","w");
    // fprintf(fptr, "Hey Nova , Fucxk You Bruh' ");
    // FILE *fptr = fopen("Nova.text","a");
    // fprintf(fptr, "\nNo , Fucxk You Tony' ");
    // FILE *fptr = fopen("Nova.text","w");
    // fprintf(fptr, "Fucxk You .... , Fucxk You ..... ");
    // char data[555];
    // FILE *fptr = fopen("Nova.text","r");
    // fgets(data,555,fptr);
    // printf("%s",data);
    // fclose(fptr);

    return 0;   

}

