#include <stdio.h>
int revNum=0, rem;
int reverse_function(int num){
  if(num){
    rem=num%10;
    revNum=revNum*10+rem;
    reverse_function(num/10);
  }
  else
    return revNum;
  return revNum;
}
int main(){
  int num, reverse_number;
  printf("Enter any number:");
  scanf("%d",&num);
  reverse_number=reverse_function(num);
  printf("The reverse of entered number is :%d",reverse_number);
  return 0;
}

