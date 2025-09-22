#include<stdio.h>

float BMI(float weight, float height) {
   return weight/height*2;
}
int main() {
   float weight;
   float height;
   float bmi = BMI(weight,height);
   printf("BMI index is : %.2f ",bmi);
   return 0;
}
