//reverse a string without using strrev()
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverse_string(char *string, int length)
{
char *left, *right;
left=string;
right=string+length-1;
char temp;
while(left<right)
{

    temp=*left;
    *left=*right;
    *right=temp;
    left++;
    right--;   
}
}

int main()
{
    char string[100];
    printf("Enter the string to be reserved");
    scanf("%s", string);
    int length=strlen(string);
    reverse_string(string, length);
    printf("reversed string: %s\n",string);
    return 0;
}



