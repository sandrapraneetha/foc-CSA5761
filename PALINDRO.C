#include<stdio.h>
#include<conio.h>
#include<string.h>
enum boolean {false,true};
enum Boolean ispalindrome(char string[])
{
  int left,right,len=strlen(string);
  enum boolean matched = true;
  if(len==0)
  return true;
  left = 0;
  right = len - 1;
  while(left < right && matched)
  {
    if(string[left] != string[right] )
    matched = false;
    else
    {
      left++;
      right--;
    }
  }
  return matched;
}
 void main()
{
 char string[40];
 clrscr();
 printf("Enter the string to check palindrome or not.\n");
 printf("Enter a string :");
 scanf("%s",string);
 if(ispalindrome(string))
 printf("The given string %s is a palindrome. \n",string);
 else
 printf("The given string %s is not a palindrome. \n",string);
 getch();
}
