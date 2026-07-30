#include <stdio.h>

double calculate_line_total(int quantity, double unit_price)
{
    return quantity * unit_price;
}

int main(void)
{
    const int onion_rings_quantity = 2;
    const double onion_rings_price = 4.50;
    
    const int burger_quantity = 2;
    const double burger_price = 12.50;

    const int fries_quantity = 1;
    const double fries_price = 4.00;

    const int soda_quantity = 3;
    const double soda_price = 2.50;

    const double onion_rings_total =
        calculate_line_total(onion_rings_quantity, onion_rings_price);
    
    const double burger_total =
        calculate_line_total(burger_quantity, burger_price);

    const double fries_total =
        calculate_line_total(fries_quantity, fries_price);

    const double soda_total =
        calculate_line_total(soda_quantity, soda_price);

    const double subtotal =
        burger_total + fries_total + soda_total + onion_rings_total;

    printf("THE NEST - ORDER SUMMARY\n");
    printf("------------------------------\n");

    printf(
        "%-10s %2d x $%5.2f = $%6.2f\n",
        "Onion Rings",
        onion_rings_quantity,
        onion_rings_price,
        onion_rings_total
    );

    printf(
        "%-10s %2d x $%5.2f = $%6.2f\n",
        "Burger",
        burger_quantity,
        burger_price,
        burger_total
    );

    printf(
        "%-10s %2d x $%5.2f = $%6.2f\n",
        "Fries",
        fries_quantity,
        fries_price,
        fries_total
    );

    printf(
        "%-10s %2d x $%5.2f = $%6.2f\n",
        "Soda",
        soda_quantity,
        soda_price,
        soda_total
    );

    printf("------------------------------\n");
    printf("Subtotal:              $%6.2f\n", subtotal);

    return 0;
}
