#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    int select, quantity, total = 0;
    int milk, bread, cookies, cake, chocolate, icecream;

    printf("welcome to sabka apna shopping mart \n");
    printf("======select your items======\n");
    sleep(1);
    printf("1.milk=====₹30/-\n");
    sleep(1);
    printf("2.bread=====₹15/-\n");
    sleep(1);
    printf("3.cookies=====₹45/-\n");
    sleep(1);
    printf("4.cake=====₹50/-\n");
    sleep(1);
    printf("5.chocolate=====₹10/-\n");
    sleep(1);
    printf("6.ice-cream=====₹15/-\n");
    sleep(1);
    printf("8.exit\n");
    scanf("%d", &select);

    while(true)
   {
    printf("======select your items======\n");
    printf("1.milk=====₹30/-\n");
    printf("2.bread=====₹15/-\n");
    printf("3.cookies=====₹45/-\n");
    printf("4.cake=====₹50/-\n");
    printf("5.chocolate=====₹10/-\n");
    printf("6.ice-cream=====₹15/-\n");
    printf("8.exit\n");
    scanf("%d", &select);

    switch (select)
    {
        case 1:
            printf("Milk added to the cart\nenter quantity:");
            scanf("%d", &milk);
            if (milk < 20 && milk > 0)
            {
                total += 30 * milk;
                printf("sucessfully added %d milk to the cart\n", milk);
            }
            else
            {
                printf("not in stock\n");
            }
            break;

        case 2:
            printf("Bread added to the cart\nenter quantity:");
            scanf("%d", &quantity);
            if (quantity < 15 && quantity > 0)
            {
                total += 15 * quantity;
                printf("sucessfully added %d bread to the cart\n", quantity);
            }
            else
            {
                printf("not in stock\n");
            }
            break;

        case 3:
            printf("cookies added to the cart\nenter quantity:");
            scanf("%d", &quantity);
            if (quantity < 30 && quantity > 0)
            {
                total += 45 * quantity;
                printf("sucessfully added %d cookies to the cart\n", quantity);
            }
            else
            {
                printf("not in stock\n");
            }
            break;

        case 4:
            printf("cake added to the cart\nenter quantity:");
            scanf("%d", &quantity);
            if (quantity < 10 && quantity > 0)
            {
                total += 50 * quantity;
                printf("sucessfully added %d cake to the cart\n", quantity);
            }
            else
            {
                printf("not in stock\n");
            }
            break;

        case 5:
            printf("chocolate added to the cart\nenter quantity:");
            scanf("%d", &quantity);
            if (quantity < 50 && quantity > 0)
            {
                total += 10 * quantity;
                printf("sucessfully added %d chocolate to the cart\n", quantity);
            }
            else
            {
                printf("not in stock\n");
            }
            break;

        case 6:
            printf("ice-cream added to the cart\nenter quantity:");
            scanf("%d", &quantity);
            if (quantity < 20 && quantity > 0)
            {
                total += 15 * quantity;
                printf("sucessfully added %d ice-cream to the cart\n", quantity);
            }
            else
            {
                printf("not in stock\n");
            }
            break;
            case 8:
            printf("=============================\n");
            printf("     total bill=₹%d\n", total);
            printf("=============================\n");
            printf("thanks for shopping with sabka apna shopping centre\n");
            return 0;

        default:
            printf("===invalid item===");
            break;
    }
}
    return 0;
}
