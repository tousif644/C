#include<stdio.h>

int main()
{
    // Lower To Uppercase letter without library function

    char lower;
    printf("Enter any Lowercase letter: ");
    scanf("%c",&lower);

    /*
           আস্কি টেবিল এ আমরা দেখসি যে ওখানে আমাদের A = 65 ,
            এবং ছোট হাতের   a = 97
             আমরা যদি ৯৭ থেকে ৩২ বিয়োগ করে ফেলি তাইলে আমরা আমাদের বড় হাতের অক্ষর পাবো
    */


    //showing the result
    printf("The Uppercase letter is : %c",lower - 32 );
}
