#include<stdio.h>
#include<unistd.h>

int main(){
  float num1 = 45, num2 = 13, suma = 0, resta = 0;
  pid_t pid;
  
  pid = fork();
  if( !pid ) {
    printf("Soy el proceso hijo con pid %d", getpid());
    suma = num1 + sum2;
  } else {
    printf("Soy el proceso padre con pid %d", getpid());
    resta = num1 - num2;
  }
  
  printf("Suma = %f", suma);
  printf("Resta = %f", resta);
}
