#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int date, month;
  unsigned int year;
  char name[50], gender, sign[20], filename[100], horoscope[200];
  FILE *fPtr;
  printf("Enter your date of birth (DD MM YYYY): ");
  scanf("%d %d %u", &date, &month, &year);
  printf("Enter your full name: ");
  scanf("%s", name);
  printf("Enter your gender (F/M): ");
  scanf(" %c", &gender);
  char name1[100];
  strcpy(name1,name);

  char path[100]= "C:\\Users\\Hemanth\\Desktop\\";
  strcat(name,".txt");
  strcat(path,name);

  fPtr = fopen(path, "a");

  if(year >= 1961 && year <= 2030)
  {
      if(year % 4 == 0 && year % 400 == 0 && year % 100 != 0)
      {


    if ((month == 3 && date >= 21) || (month == 4 && date <= 19)) {
        strcpy(sign, "Aries");
    }
    else if ((month == 4 && date >= 20) || (month == 5 && date <= 20)) {
        strcpy(sign, "Taurus");
    }
    else if ((month == 5 && date >= 21) || (month == 6 && date <= 20)) {
        strcpy(sign, "Gemini");
    }
    else if ((month == 6 && date >= 21) || (month == 7 && date <= 22)) {
        strcpy(sign, "Cancer");
    }
    else if ((month == 7 && date >= 23) || (month == 8 && date <= 22)) {
        strcpy(sign, "Leo");
    }
    else if ((month == 8 && date >= 23) || (month == 9 && date <= 22)) {
        strcpy(sign, "Virgo");
    }
    else if ((month == 9 && date >= 23) || (month == 10 && date <= 22)) {
        strcpy(sign, "Libra");
    }
    else if ((month == 10 && date >= 23) || (month == 11 && date <= 21)) {
        strcpy(sign, "Scorpio");
    }
    else if ((month == 11 && date >= 22) || (month == 12 && date <= 21)) {
        strcpy(sign, "Sagittarius");
    }
    else if ((month == 12 && date >= 22) || (month == 1 && date <= 19)) {
        strcpy(sign, "Capricon");
    }
    else if ((month == 1 && date >= 20) || (month == 2 && date <= 18)) {
        strcpy(sign, "Aquarius");
    }
    else if ((month == 2 && date >= 19 && date <= 29) || (month == 3 && date <= 20)) {
        strcpy(sign, "Pisces");
    }
      }

      else
      {
          if ((month == 3 && date >= 21) || (month == 4 && date <= 19)) {
        strcpy(sign, "Aries");
    }
    else if ((month == 4 && date >= 20) || (month == 5 && date <= 20)) {
        strcpy(sign, "Taurus");
    }
    else if ((month == 5 && date >= 21) || (month == 6 && date <= 20)) {
        strcpy(sign, "Gemini");
    }
    else if ((month == 6 && date >= 21) || (month == 7 && date <= 22)) {
        strcpy(sign, "Cancer");
    }
    else if ((month == 7 && date >= 23) || (month == 8 && date <= 22)) {
        strcpy(sign, "Leo");
    }
    else if ((month == 8 && date >= 23) || (month == 9 && date <= 22)) {
        strcpy(sign, "Virgo");
    }
    else if ((month == 9 && date >= 23) || (month == 10 && date <= 22)) {
        strcpy(sign, "Libra");
    }
    else if ((month == 10 && date >= 23) || (month == 11 && date <= 21)) {
        strcpy(sign, "Scorpio");
    }
    else if ((month == 11 && date >= 22) || (month == 12 && date <= 21)) {
        strcpy(sign, "Sagittarius");
    }
    else if ((month == 12 && date >= 22) || (month == 1 && date <= 19)) {
        strcpy(sign, "Capricon");
    }
    else if ((month == 1 && date >= 20) || (month == 2 && date <= 18)) {
        strcpy(sign, "Aquarius");
    }
    else if ((month == 2 && date >= 19 && date <= 28) || (month == 3 && date <= 20)) {
        strcpy(sign, "Pisces");
      }

      }

    char desig[100];
    if(gender == 'f' || gender == 'F')
    {

    if (strcmp(sign, "Aries") == 0) {
        strcpy(horoscope,"Mrs. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius1.");
    }
    else if (strcmp(sign, "Taurus") == 0) {
        strcpy(horoscope,"Mrs. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius2.");
    }
    else if (strcmp(sign, "Gemini") == 0) {
        strcpy(horoscope,"Mrs. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius3.");
    }
    else if (strcmp(sign, "Cancer") == 0) {
        strcpy(horoscope,"Mrs. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius4.");
    }
    else if (strcmp(sign, "Leo") == 0) {
        strcpy(horoscope,"Mrs. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius5.");
    }
    else if (strcmp(sign, "Virgo") == 0) {
        strcpy(horoscope,"Mrs. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius6.");
    }
    else if (strcmp(sign, "Libra") == 0) {
        strcpy(horoscope,"Mrs. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius7.");
    }
    else if (strcmp(sign, "Scorpio") == 0) {
        strcpy(horoscope,"Mrs. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius8.");
    }
    else if (strcmp(sign, "Sagittarius") == 0) {
        strcpy(horoscope,"Mrs. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius9.");
    }
    else if (strcmp(sign, "Capricon") == 0) {
        strcpy(horoscope,"Mrs. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius10.");
    }
    else if (strcmp(sign, "Aquarius") == 0) {
        strcpy(horoscope,"Mrs. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius11.");
    }
    else if (strcmp(sign, "Pisces") == 0) {
        strcpy(horoscope,"Mrs. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius12.");
    }


  }
  else if(gender == 'm' || gender == 'M')
  {
      if (strcmp(sign, "Aries") == 0) {
        strcpy(horoscope,"Mr. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius1.");
    }
    else if (strcmp(sign, "Taurus") == 0) {
        strcpy(horoscope,"Mr. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius2.");
    }
    else if (strcmp(sign, "Gemini") == 0) {
        strcpy(horoscope,"Mr. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius3.");
    }
    else if (strcmp(sign, "Cancer") == 0) {
        strcpy(horoscope,"Mr. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius4.");
    }
    else if (strcmp(sign, "Leo") == 0) {
        strcpy(horoscope,"Mr. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius5.");
    }
    else if (strcmp(sign, "Virgo") == 0) {
        strcpy(horoscope,"Mr. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius6.");
    }
    else if (strcmp(sign, "Libra") == 0) {
        strcpy(horoscope,"Mr. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius7.");
    }
    else if (strcmp(sign, "Scorpio") == 0) {
        strcpy(horoscope,"Mr. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius8.");
    }
    else if (strcmp(sign, "Sagittarius") == 0) {
        strcpy(horoscope,"Mr. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius9.");
    }
    else if (strcmp(sign, "Capricon") == 0) {
        strcpy(horoscope,"Mr. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius10.");
    }
    else if (strcmp(sign, "Aquarius") == 0) {
        strcpy(horoscope,"Mr. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius11.");
    }
    else if (strcmp(sign, "Pisces") == 0) {
        strcpy(horoscope,"Mr. ");
        strcat(horoscope,name1);
        strcat(horoscope,", You are genius12.");
    }

  }
  fputs(sign,fPtr);
    fputs("\n",fPtr);
    fputs(horoscope, fPtr);
    }

    return 0;
}
