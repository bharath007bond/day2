#include <stdio.h>

float convert(float temp,int choice);
float convert(float temp,int  choice)
{
  switch(choice){

case 1:
    return(temp * 9 / 5) + 32;
case 2:
    return (temp - 32) * 5 / 9;
case 3:
    return temp + 273.15;

    return 0;
  }

}


int main()
{
    float temp;
    int choice;
    float result;
    printf("Enter Temperature: ");
    scanf("%f", &temp);
    printf("Choose Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    result=convert(temp,choice);

    switch(choice)
    {
    case 1:
        printf("Temperature in Fahrenheit: %.2f\n", result);
        break;
    case 2:
        printf("Temperature in Celcius : %.2f\n", result);
        break;
    case 3:
        printf("Temperature in kelvin: %.2f\n", result);
        break;
    default:
        printf("invalid choice ! \n");
    }
    return 0;

}

