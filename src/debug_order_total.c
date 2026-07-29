#include <stdio.h>

double calculate_line_total(int quantity, double unit_price)
{
    return quantity * unit_price;
}

int main(void)
{
    int quantity = 2;
    double unit_price = 12.50;

    double total =
        calculate_line_total(quantity, unit_price);

    printf("Total: $%.2f\n", total);

    return 0;
}
