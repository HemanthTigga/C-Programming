#include <stdio.h>
union amount
{
  int acct_no;
  int acct_type;
  char name[10];
  char street[50];
  char city_state[20];
  int balance;
} a;
int main()
{
  printf("Enter the account Details:\n");
  scanf("%d%d%s%s%d", &a.acct_no, &a.acct_type, &a.name,
        &a.city_state, &a.balance);
  printf("The values are %d\n%d\n%s\n%s\n%d\n", a.acct_no,
         a.acct_type, a.name, a.city_state, a.balance);
  printf("%d\n", sizeof(union amount));
  return 0;
}
