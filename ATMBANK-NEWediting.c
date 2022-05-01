#include <stdio.h>
#include <math.h>
#include <dos.h>

int main(void)
{
  int power;
  printf("   Welcome to Al-Aman Bank!\n\n");
  printf("   TO START ENTER 1 OR 2\n");
  scanf("%d", &power);

  char name [50];
  int pass;
  printf("Enter first name: ");
  scanf("%s", &name);

  char lname [50];
  printf("\nEnter last name: ");
  scanf("%s", &lname);

  printf("\nEnter your ID ACCOUNT: ");
  scanf("%5d", &pass);
  sleep (2);
  printf("\nHello!\n%s %s\n", name, lname);
  if (power == 1)
  {
    int pow = 4;
    for (int i = 0; i < pow; i++)
    {
        pow++;
        int opreator;
        printf("  BUY:  USD TO LYD = 5.15$ | ERO TO LYD = 6.35$  | POUND TO LYD = 7.22$\n");
        printf("  SELL: LYD TO USD = 5.30$ | LYD TO EURO = 6.45$  | LYD TO POUND = 7.39$\n");
        printf("\n     **services**\n\nChoose the right service for you\nEnter {1 or 2}\n1.Cash Withdrawal.\n2.Currency Exchange.\n     ");
        scanf("%d", &opreator);

        if (opreator == 1)
        {
          float s, tax;
          printf("\nEnter the value: ");
          scanf("%f", &s);

          if (s > 1000)
          {
            tax = 2.5 * s / 100;
            printf("The value: %.2f$\nTax: %.2f$\n", s , tax);
            int g;
            printf("Are you agreed?\n1.Yes.\n2.No\n");
            scanf("%d", &g);
            if (g == 1)
            {
              printf("Money is being withdrawn\nPlease wait.........\n");
              sleep (5);
              printf("Take your money! \n\n");
              sleep (5);
            }
            else
            {
              printf("Operation canceled successfully\n");
              sleep (5);
            }
          }
          else
          {
            int gt;
            tax = 2 * s / 100;
            printf("The value: %.2f$\nTax: %.2f$\n", s , tax);
            printf("Are you agreed?\n1.Yes.\n2.No\n");
            scanf("%d", &gt);
            if (gt == 1)
            {
              printf("Money is being withdrawn\nPlease wait.........\n");
              sleep (5);
              printf("Take your money! \n\n");
              sleep (5);
            }
            else
            {
              printf("Operation canceled successfully\n");
              sleep (5);
            }
          }

        }

        else if (opreator == 2)
        {
          int op;
          printf("1.USD to LYD\n2.EURO to LYD\n");
          printf("3.POUND to LYD\n4.LYD to USD\n5.LYD to EURO\n6.LYD to POUND\n");
          scanf("%d", &op);

          switch (op)
          {
            //** USD to LYD **
            case 1:
            float usd, exs, tax;

            printf("Enter the value (USD): ");
            scanf("%f", &usd);
            exs = usd * 5.15;
            tax = 1.15 * exs / 100;
            printf("LYD: %.2f LYD\nTax: %.2f USD\n\n", exs, tax / 5.15);
            int agree;
            printf("Are you agreed?\n1. Yes\n2. No\n");
            scanf("%d", &agree);

            if (agree == 1)
            {
              printf("Money is being withdrawn\nPlease wait.........\n\n");
              sleep (5);
              printf("Take your money! \n\n");
              sleep (5);
            }
            else if (agree == 2)
            {
              printf("Operation canceled successfully\n");
              sleep (5);

            }
            break;

            //** EURO to LYD **
            case 2:
            float euro;

            printf("Enter the value (EURO): ");
            scanf("%f", &euro);
            exs = euro * 6.35;
            tax = 1.15 * exs / 100;
            printf("LYD: %.2f LYD\nTax: %.2f EURO\n\n", exs, tax / 6.35);

            printf("Are you agreed?\n1. Yes\n2. No\n");
            scanf("%d", &agree);

            if (agree == 1)
            {
              printf("Money is being withdrawn\nPlease wait.........\n\n");
              sleep (5);
              printf("Take your money! \n\n");
              sleep (5);
            }
            else if (agree == 2)
            {
              printf("Operation canceled successfully\n");
              sleep (5);
            }
            break;

              //** POUND to LYD **
              case 3:
              float ponud;
              printf("Enter the value (Ponud): ");
              scanf("%f", &ponud);
              exs = ponud * 7.22;
              tax = 1.15 * exs / 100;
              printf("LYD: %.2f LYD\nTax: %.2f POUND\n\n", exs, tax / 7.22);
              printf("Are you agreed?\n1. Yes\n2. No\n");
              scanf("%d", &agree);

              if (agree == 1)
              {
                printf("Money is being withdrawn\nPlease wait.........\n\n");
                sleep (5);
                printf("Take your money! \n\n");
                sleep (5);
              }
              else if (agree == 2)
              {
                printf("Operation canceled successfully\n");
                sleep (5);
              }
              break;

              //** LYD to USD **
              case 4:
              float lyd;
              printf("Enter the value (LYD): ");
              scanf("%f", &lyd);
              exs = lyd / 5.30;
              tax = 1.15 * exs / 100;
              printf("USD: %.2f$\nTax: %.2f$ USD\n\n", exs, tax);
              printf("Are you agreed?\n1. Yes\n2. No\n");
              scanf("%d", &agree);

              if (agree == 1)
              {
                printf("Money is being withdrawn\nPlease wait.........\n\n");
                sleep (5);
                printf("Take your money! \n\n");
                sleep (5);
              }
              else if (agree == 2)
              {
                printf("Operation canceled successfully\n");
                sleep (5);
              }
              break;

              //** LYD to EURO **
              case 5:
              printf("Enter the value (LYD): ");
              scanf("%f", &lyd);
              exs = lyd / 6.45;
              tax = 1.15 * exs / 100;
              printf("EURO: %.2f$\nTax: %.2f$ EURO\n\n", exs, tax);
              printf("Are you agreed?\n1. Yes\n2. No\n");
              scanf("%d", &agree);

              if (agree == 1)
              {
                printf("Money is being withdrawn\nPlease wait.........\n\n");
                sleep (5);
                printf("Take your money! \n\n");
                sleep (5);
              }
              else if (agree == 2)
              {
                printf("Operation canceled successfully\n");
                sleep (5);
              }
              break;

              //** LYD to POUND **
              case 6:
              printf("Enter the value (LYD): ");
              scanf("%f", &lyd);
              exs = lyd / 7.39;
              tax = 1.15 * exs / 100;
              printf("Pound: %.2f$\nTax: %.2f$ POUND\n\n", exs, tax);
              printf("Are you agreed?\n1. Yes\n2. No\n");
              scanf("%d", &agree);

              if (agree == 1)
              {
                printf("Money is being withdrawn\nPlease wait.........\n\n");
                sleep (5);
                printf("Take your money! \n\n");
                sleep (5);
              }
              else if (agree == 2)
              {
                printf("Operation canceled successfully\n");
                sleep (5);
              }
              break;
           }

        }

    }
  }

  else
  {
    printf("Operation canceled successfully\n");
  }
}
