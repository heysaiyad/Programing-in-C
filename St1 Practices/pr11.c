#include <stdio.h>

int main()
{
    int num_shirt, num_pant, num_socks, num_belt, tot_items;
    int cost_shirt, cost_pant, cost_socks, cost_belt, total_sale, final_sale;
    float total_discount = 0;
    char first_name[20];
    scanf("%s", first_name);
    scanf("%d %d %d %d", &num_shirt, &num_pant, &num_socks, &num_belt);

    tot_items = num_shirt + num_pant + num_socks + num_belt;
    cost_shirt = 500;
    cost_pant = 800;
    cost_socks = 300;
    cost_belt = 1000;

    printf("Rate of Products -> Shirts: Rs. %d, Pants: Rs. %d, Socks: Rs. %d, Belts: Rs. %d \n", cost_shirt, cost_pant, cost_socks, cost_belt);
    printf("Number of Products -> %d Shirts, %d Pants, %d Socks, %d Belts \n", num_shirt, num_pant, num_socks, num_belt);
    printf("Name: %s \n", first_name);
    total_sale = num_shirt * cost_shirt + num_pant * cost_pant + num_socks * cost_socks + num_belt * cost_belt;
    printf("Total Sale Amount: Rs. %d \n", total_sale);

    if (tot_items < 3)
        printf("Total discount: None \n");

    else
    {
        if (total_sale < 2500)
        {
            printf("Total discount: 5%% \n");
            total_discount = 0.05;
        }
        else
        {
            printf("Total discount: 20%% \n");
            total_discount = 0.20;
        }
    }

    final_sale = total_sale - (total_sale * total_discount);
    printf("Final Sale Amount: Rs. %d", final_sale);
    return 0;
}