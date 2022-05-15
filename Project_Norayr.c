#include <stdio.h>  

int main() {
  char category;    
  int tempChoice;   
  int currencyChoice;
  int massChoice;
  int userinputF; // User inputted Fahreinheit;
  int userinputC; // User inputted Celsius;
  int userinputUSDtoEuro; // User inputted for USD to EURO;
  int userinputUSDtoAMD; // User inputted for USD to AMD;
  int userinputUSDtoRUB; // User inputted for USD to RUB;
  int userinputOunce; // User inputted for Ounce;
  int userinputGram; // User inputted for Gram;
  int fahrenheitToCelcius; // variable that stores the converted F->C;
  int celciusToFahrenheit; // variable that stores the converted C->F;
  float USDtoEURO ; // varaible that stores the converted USD->EURO;
  float USDtoAMD; // stores the converted USD->AMD;
  float USDtoRUB; // stores the converted USD->RUB;
  float ounceToPounds; // stores the converted Ounce->Pounds;
  float gramsToPounds; // stores the vonerted Grams->Pounds;
 
  printf("User welcome to the mass, currency and temperature converter \n");
  printf("Here is a list of conversions to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("User please enter the letter you want to convert.\n");
  scanf("%c",&category);  
 
  if(category == 'T'){
      printf("User this is the Temperature Converter! \n");
      printf("Here is a list of conversions to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("User please enter the Fahrenheit degree: \n");
          scanf("%d",&userinputF);
          fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("User please enter the Celcius degree: \n");
        scanf("%d",&userinputC);
        celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("User please enter the correct choice. \n");
  }
 
  else if(category == 'C') {
      printf("User this is the currency converter! \n");
      printf("This is the list of currency exchanges to choose from: \n");
      printf("Enter 1 for USD to Euro. \n");
      printf("Enter 2 for USD to AMD. \n");
      printf("Enter 3 for USD to RUB. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("User please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoEuro);
          USDtoEURO = userinputUSDtoEuro * 0.87;
          printf("Euro: %.2f",USDtoEURO); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(currencyChoice == 2){
          printf("User please enter the USD amount: \n");
          scanf("%d",&userinputUSDtoAMD);
          USDtoAMD = userinputUSDtoAMD * 460.13;
          printf("AMD: %.2f",USDtoAMD);
      }
      else if(currencyChoice == 3) {
        printf("User please enter the USD amount: \n");
        scanf("%d",&userinputUSDtoRUB);
        USDtoRUB = userinputUSDtoRUB * 65.12;
        printf("RUB: %.2f",USDtoRUB);
      }
      else
        printf("User please enter correct choice. \n");
   }
  else if(category == 'M'){
      printf("User this is the mass converter! \n");
      printf("Here is a list of conversions to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("User please enter the ounce amount: \n");
          scanf("%d",&userinputOunce);
          ounceToPounds = userinputOunce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("User please enter the gram amount: \n");
          scanf("%d",&userinputGram);
          gramsToPounds = userinputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      }
      else
        printf("User please enter the correct choice. \n");
   }
  return 0;
}


