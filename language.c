



// int main(){
// int m1,m2,m3,m4,m5,ops;
// float per;
// printf("Enter five Marks ");
// scanf("%d %d %d %d %d", &m1,&m2,&m3,&m4,&m5);
// ops = m1 + m2 + m3 + m4 + m5;
// per = ops / 5;
// printf("Aggregate Marks = %d\n ", ops );
// printf( "Aggregate percentage = %f\n", per);

// return 0;
// }
// #include <math.h> /*for sqrt()*/







// #include <stdio.h> 

// int main()
// {
// float a, b, c, sp, area;
// printf("\nEnter sides of a traingle");
// scanf("%f %f %f",&a, &b, &c);
// sp = (a + b + c) / 2;
// area = sqrt (sp * (sp - a)*(sp - b)*(sp - c));
// printf("Area of triangle = %f\n", area);
// return 0;

// }



// int main()
// {

// int n, d5,d4,d3,d2,d1;
// long int revnum;
// printf("\nEnter a five-digit number (less than 32767):");
// scanf("%d", &n);
// d5 = n % 10; /* 5th digit */
// n = n / 10; /*  remaining digits */
// d4 = n % 10;  /* 4th digits *
// n = n / 10; remaning digits *\ ?
// d3 = n % 10; 3rd digits 
// n = n / 10; /* remaning digits */
// d2 = n % 10; /* 2nd digits */
// n = n / 10; /* remaning digits */
// d1 = n % 10; /*  1st digits */
// revnum = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
// /* specifiers %Id is used for printing a long integer */
// printf ("The reversed number is %Id\n", revnum);
// return 0; 


// }















// int main(){
// int amount,nohun,nofifty,noten,nofive,notwo,noone,total; 
// printf ("Enter N number of Rs.");
// scanf ("%d", &amount);
// nohun  = amount/100;
// amount = amount % 100;
// nofifty = amount / 50;
// amount = amount % 50;
// noten =  amount / 10;
// amount = amount % 10;
// nofive = amount / 5; 
// amount = amount % 5; 
// notwo  = amount / 2; 
// amount = amount % 2;
// noone  = amount / 1; 
// amount = amount % 1;
// total  = nohun + nofifty + noten + nofive + notwo + noone;
// printf ("Smallest number of notes = %d\n", total);
// return 0; 


// }




// int main()

// {  

//  float cp,sp,p,l;
// printf("\nEnter cost price and selling price:");
// scanf("%f %f",&cp,&sp);
// p = sp - cp; 
// l = cp - sp;
// if(p > 0){
// printf ("The seller made a profit of Rs. %f\n",p);
// }if(l > 0){
// printf ("The seller incurred loss of Rs %f\n",l);
// }if(p == 0)

// printf ("There is no loss, no profit\n");

// return 0;

// }




// int main(){

// int n;
// printf("\nEnter number");
// scanf("%d", &n); 
// if(n % 2 == 0) 
//     printf(" That is the Even number " );
// else
// printf("That is the odd Number ");
// return 0;



// }






// int main()
// {
// int yr;
// printf("\nEnter a year:");
// scanf("%d",&yr);
// if(yr % 100 == 0 )

// {
//     if(yr % 400 == 0) 
//     printf("Leap year\n");
//     else 
//     printf("Not a Leap year \n");
// }
// else{ 
// if(yr % 4==0)
// printf("Leap year\n"); 
// else 
// printf("Not a leap year\n");
// }; 
// return 0;

// };


// int main(){
//     int n; 
//     printf("\n Enter a year "); 
//     scanf("%d",&n);
//     if( % 400 == 0 || n % 100 != 0 && n % 4 == 0)       
//      printf(" That is the leap year\n");
//     else  
//      printf (" That is the not leap year "); 
     
//     return 0;

// }




// int main(){


// char ch;
// printf("\nEntered the character\n:");   
// scanf("%c",&ch);
// if(ch >= 65 && ch <= 90)
// printf("Character is the Upper case\n:" );
// if(ch >= 97 && ch <= 122)
// printf("Character is the lower case\n:" );
// if( ch >= 48 && ch <= 57)
// printf("Character is the Digits\n:" ); 
// if(ch >= 0 || ch <= 47 || ch >= 58 || ch <= 64 || ch >= 91 || ch <= 96 || ch >= 123)
// printf("special symbols\n:");
// return 0; 

// }

















// int main ( ){
//     int a,b,c ;
// printf("\nEnter three sides of the traingle");
// scanf("%d %d %d", &a, &b, &c );
// if(a && b < c)    
//  printf(" Three sides of the triangle is valid\n");
// else    
// printf ("Three sides of the traingle is not valid\n");

// return 0 ;

// }





// #include <stdio.h>
// int  main()
// {   
// float otpay; 
// int hour, i;
// for(i = 1; i <= 10;)
//  /* Loop for 10 employees 8 */ 
// {
// printf("\nEnter no. of hours worked:");
// scanf(" %d ", &hour);
// if(hour >= 40) 
//  otpay = (hour - 40) * 12; 
// else
// otpay = 0; 
// printf("Hours = %d OverTime pay = RS.%f\n", hour, otpay);
// i++; 
// }

// return 0;

// };






// int main()

// {
     
//      int num,i,fact;  
//    printf (" Enter The Number ");
//     scanf ("%d", &num);

// fact = i= 1;
//  while (i <= num)

// {
    
//     fact = fact * i;
//       i++; 
// } 
    // printf (" Factorial value of %d = %d\n",num,fact);

// return 0;

// };







// #include <stdio.h> 

// int main()      
// {
// float x,power;
// int y,i;
// printf ("Enter The Number");
// scanf ("%f %d", &x, &y );
//    power = i = 1;
// while(i <= y)
// {
// power = power * x;
// i++;l

// };
// printf(" %f to the power %d\n is %f\n",x,y, power);

// return 0;

// };








// int main(){    
// };






























































































  













































































































































































































































