#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int multiples_3and5(){

  int sum3 = 0;
  int sum5 = 0;
  
  int i;
  for (i = 3; i < 1000; i++){
    if (i % 3 == 0){
      sum3 += i;
    }
  }

  int j;
  for (i = 5; i < 1000; i++){
    if (i % 5 == 0 && i % 3 != 0){
      sum5 += i; }
  }

  return sum3 + sum5;

}

int even_fibonacci(){
  int sum = 0;
  int i1 = 1;
  int i2 = 2;
  int keep_track;

  while (i2 < 4 * (pow(10,6))){

    keep_track = i1;
    if (i2 % 2 == 0){
      sum += i2;
    }

    i1 = i2;
    i2 += keep_track;
    }

  return sum;
}

int main(){
  int answer1 = multiples_3and5();
  int answer2 = even_fibonacci();

  printf("\nbelow is the answer to problem 1- multiples of 3 and 5 \n");
  printf("answer1 is %d \n\n", answer1);
  printf("below is the answer to problem 2 - even fibonacci numbers  \n");
  printf("answer2 is %d \n", answer2);

  return 0;
}


  


  
