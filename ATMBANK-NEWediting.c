#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

 int main()
{
    start:
      for(int i = 0; i <= 2; i++)
    {
      ++i;
      printf("\t\t\t\t\t********************************\n");
      printf("\t\t\t\t\t* Welcome to ATM Alaman Bank! *\n");
      printf("\t\t\t\t\t********************************\n");
      char fname [50], lname [50];
      printf("Enter your first name: ");
      scanf("%s", &fname);
      printf("Enter your last name: ");
      scanf("%s", &lname);
      long id;
      printf("Enter your id account: ");
      scanf("%lld", &id);
      for (int i = 0; i < 6; i++)
      {
        printf("..");
        sleep(1);
      }
      printf("\nHello! %s %s\tID ACCOUNT: %lld\n\n", fname, lname, id);
      short int sr;
      printf("1. Cash Withdrawal \t 2.Exchange Currency\n");
      scanf("%d", &sr);

      if (sr == 2)
      {
        printf("\n** USD TO LYD: 5.15$ ** || ** EURO TO LYD: 6.15$ ** || ** POUND TO LYD: 7.10$ **\n");
        printf("** LYD TO USD: 5.30$ ** || ** LYD TO EURO: 6.35$ ** || ** LYD TO POUND: 7.25$ **\n");

        printf("\n**Services**\n1.USD TO LYD\n2.EURO TO LYD\n3.POUND TO LYD\n");
        printf("4.LYD TO USD\n5.LYD TO EURO\n6.LYD TO POUND\n");


        short int operator;
        printf("Choose the right service for you: ");
        scanf("%d", &operator);

        switch (operator)
        {
        case 1:
                float usd, exs, tax, lyd, pound, euro;
                printf("\nEnter the value (USD): \n");
                scanf("%f", &usd);
            exs = usd * 5.15;
            tax = 1.15 * exs / 100;
            sleep (3);
            printf("LYD: %.2f$\nTax: %.2f$\n", exs, tax);
            int g;
            printf("Are you agreed?\n1. Agreed.\n2. Not agreed\n");
            scanf("%d", &g);

            if (g == 1)
            {
                printf("Please wait...");
                for (int i = 0; i < 6; i++)
                {
                  printf("..");
                  sleep(1);
                }
                printf("\nPlease take your money!!\n");
                sleep (4);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n_\n");
            }
            else if (g == 2)
            {
                printf("Operation canceled successfully\n");
                sleep (3);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n_\n");
            }

            break;

                case 2:

                printf("\nEnter the value (EURO): \n");
                scanf("%f", &euro);
            exs = euro * 6.15;
            tax = 1.15 * exs / 100;
            sleep (4);
            printf("LYD: %.2f$\nTax: %.2f$\n", exs, tax);
                    printf("Are you agreed?\n1. Agreed.\n2. Not agreed\n");
                    scanf("%d", &g);

            if (g == 1)
            {
                printf("Please wait...");
                for (int i = 0; i < 6; i++)
                {
                  printf("..");
                  sleep(1);
                }
                printf("\nPlease take your money!!\n");
                sleep (4);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n_\n");
            }
            else if (g == 2)
            {
                printf("Operation canceled successfully\n");
                sleep (4);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n_\n");
            }

            break;

                case 3:

                printf("\nEnter the value (POUND): \n");
                scanf("%f", &pound);
            exs = pound * 7.10;
            tax = 1.15 * exs / 100;
            sleep (4);
            printf("LYD: %.2f$\nTax: %.2f$\n", exs, tax);
                    printf("Are you agreed?\n1. Agreed.\n2. Not agreed\n");
                    scanf("%d", &g);

            if (g == 1)
            {
                printf("Please wait....");
                for (int i = 0; i < 6; i++)
                {
                  printf("..");
                  sleep(1);
                }
                printf("\nPlease take your money!!\n");
                sleep (4);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n_\n");
            }
            else if (g == 2)
            {
                printf("Operation canceled successfully\n");
                sleep (4);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n_\n");
            }
            break;

                case 4:

                printf("\nEnter the value (LYD): \n");
                scanf("%f", &lyd);
                exs = lyd / 5.30;
                tax = 1.15 * exs / 100;

            printf("USD: %.2f$\nTax: %.2f$\n", exs, tax);
                    printf("Are you agreed?\n1. Agreed.\n2. Not agreed\n");
                    scanf("%d", &g);

            if (g == 1)
            {
                printf("Please wait....");
                for (int i = 0; i < 6; i++)
                {
                  printf("..");
                  sleep(1);
                }
                printf("\nPlease take your money!!\n");
                sleep (4);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n_\n");
            }
            else if (g == 2)
            {
                printf("Operation canceled successfully\n");
                sleep (4);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n_\n");
            }
            break;

                case 5:

                printf("\nEnter the value (LYD): \n");
                scanf("%f", &lyd);
            exs = lyd / 6.35;
            tax = 1.15 * exs / 100;
            sleep (4);
            printf("EURO: %.2f$\nTax: %.2f$\n", exs, tax);
                    printf("Are you agreed?\n1. Agreed.\n2. Not agreed\n");
                    scanf("%d", &g);

            if (g == 1)
            {
                printf("Please wait....");
                for (int i = 0; i < 6; i++)
                {
                  printf("..");
                  sleep(1);
                }
                printf("\nPlease take your money!!\n");
                sleep (4);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n_\n");
            }
            else if (g == 2)
            {
                printf("Operation canceled successfully\n");
                sleep (4);
              printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n_\n");
            }
            break;

                case 6:

                printf("\nEnter the value (LYD): \n");
                scanf("%f", &pound);
            exs = pound / 7.25;
            tax = 1.15 * exs / 100;
            sleep (4);
            printf("POUND: %.2f$\nTax: %.2f$\n", exs, tax);
                    printf("Are you agreed?\n1. Agreed.\n2. Not agreed\n");
                    scanf("%d", &g);

            if (g == 1)
            {
                printf("Please wait....");
                for (int i = 0; i < 6; i++)
                {
                  printf("..");
                  sleep(1);
                }
                printf("\nPlease take your money!!\n");
                sleep (4);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n_\n");
            }
            else if (g == 2)
            {
                printf("Operation canceled successfully\n");
                sleep (4);
                printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n_\n");
            }
            break;

        default:
        printf("ERORR!!\n");
        goto start;
            break;
        }

      }
      else if (sr == 1)
      {
          float m, tax;
          printf("Enter the value: ");
          scanf("%f", &m);
          tax = 1.15 * m / 100;
          printf("The value: %.2f$\nTax: %.2f$\n", m, tax);
          int gr;
          printf("Are you agreed!\n1.Agreed\t2.Not agreed\n");
          scanf("%d", &gr);
          if (gr == 1)
          {
            printf("Please wait....");
            for (int i = 0; i < 6; i++)
            {
              printf("..");
              sleep(1);
            }
            printf("\nPlease take your money!!\n");
            sleep (4);
          printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n_\n");
          }
          else if (gr == 2)
          {
            printf("canceled successfully\n");
            sleep (4);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n_\n");
            goto start;
          }
      }

    }

}
