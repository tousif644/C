#include<stdio.h>

int main() {
    char upper;
    printf("Enter any uppercase letter : ");
    scanf("%c",&upper);

    /*
           আস্কি টেবিল এ আমরা দেখসি যে ওখানে আমাদের A = 65 ,
            এবং ছোট হাতের   a = 97
             আমরা যদি  ৬৫ এর সাথে ৩২ যোগ করে ফেলি তাইলে আমরা আমাদের ছোট হাতে অক্ষর পাবো
    */

    printf("The Lowercase letter is : %c", upper + 32);
    return 0;
}
