#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char name[30], add[70];
    int total = 0;
    char str[5];
    printf("\t\t\t\t\t\twelcome To BGP Food Restaurant");
    printf("\n\nTodays Menu");
    do
    {
        int a, b = 50, c = 60, d = 250, e = 180, f = 55, g = 99, h = 120, i = 20, j = 60, k = 220, l = 250, m = 30, n = 50, o = 65, p = 80;
        long long int num;
        printf("\t\t\tRs");
        printf("\n\n1. Burger\t\t\t50\n2. Sandwich\t\t\t60\n3. Paneer Pizza\t\t\t250\n4. Zinger Burger\t\t180\n5. Noodles\t\t\t55\n6. DoNut\t\t\t99\n7. french fries\t\t\t120\n8. Samosa\t\t\t20\n9. veg Momos\t\t\t60\n10. Hamburger\t\t\t220\n11. Spring roll\t\t\t250\n12. Patties\t\t\t30\n13. Pav Bhaji\t\t\t50\n14. Veg Roll\t\t\t65\n15. Cutlet\t\t\t80");
        printf("\n\nWhat do you want To Order:");
        scanf("%d", &a);

        printf("\n\nItems Ordered");
        if (a == 1)
        {
            printf("\nBurger");
            total = b + total;
        }
        else if (a == 2)
        {
            printf("\nSandwich");
            total = c + total;
        }
        else if (a == 3)
        {
            printf("\nPaneer Pizza");
            total = d + total;
        }
        else if (a == 4)
        {
            printf("\nZinger Burger");
            total = e + total;
        }
        else if (a == 5)
        {
            printf("\nNoodles");
            total = f + total;
        }
        else if (a == 6)
        {
            printf("\nDoNut");
            total = g + total;
        }
        else if (a == 7)
        {
            printf("\nfrench fries");
            total = h + total;
        }
        else if (a == 8)
        {
            printf("\nSamosa");
            total = i + total;
        }
        else if (a == 9)
        {
            printf("\n veg Momos");
            total = j + total;
        }
        else if (a == 10)
        {
            printf("\nHamburger");
            total = k + total;
        }
        else if (a == 11)
        {
            printf("\n\nSpring roll");
            total = l + total;
        }
        else if (a == 12)
        {
            printf("\nPatties");
            total = m + total;
        }
        else if (a == 13)
        {
            printf("\nPav Bhaji");
            total = n + total;
        }
        else if (a == 14)
        {
            printf("\nveg Roll");
            total = o + total;
        }
        else if (a == 15)
        {
            printf("\n Cutlet");
            total = p + total;
        }
        else
        {
            printf("\nWrong Item Input");
        }
        printf("\nDo you want to continue order? (yes/no) ");
        scanf("\n%c", &str);
        if (!(strcmp(str, "no")))
        {
            fflush(stdin);
            printf("\nEnter your Name:");
            gets(name);
            printf("\nEnter your phone number:");
            scanf("\n%lld", &num);
            fflush(stdin);
            printf("\nEnter your address:");
            gets(add);
            printf("\nyour order has sucessfull");
        }

    } while (!strcmp(str, "yrs"));
    printf("\n\n\nYour total order Amount is: %d", total);
    printf("\npayment mode:\ngoogle pay\t\t7633977243\nphone pe\t\t7633977243\npaytm\t\t\t7633977243");
    printf("\nDo you want to cancel order ? (yes/no) ");
    scanf("%s", &name);
    if (!(strcmp(name, "yes") || strcmp(name, "YAS") || strcmp(name, "Yes")))
    {
        printf("your order is cancel.");
    }
    else
    {
        printf("your order is confirmed.");
    }
    getch();
    return 0;
}