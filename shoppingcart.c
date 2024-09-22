#include<stdio.h>

struct shopping{
    char product_name[100];
    float product_prize;
    float quantity;
};

int main()
{
    int i, n;
    struct shopping bill[100];
    float total_cost = 0, GST, amount_received, balance;
    int GSTpercentage;

    printf("Enter the number of products purchased: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("Enter the product name for %d item: ", i + 1);
        scanf("%s", bill[i].product_name);
        printf("Enter the product prize for %d item: ", i + 1);
        scanf("%f", &bill[i].product_prize);
        printf("Enter the quantity of the product for %d item: ", i + 1);
        scanf("%f", &bill[i].quantity);
        total_cost += bill[i].product_prize * bill[i].quantity;
    }

    printf("Enter the GST percentage: ");
    scanf("%d", &GSTpercentage);

    GST = (total_cost * GSTpercentage) / 100;
    total_cost += GST;

    printf("Enter the amount received: ");
    scanf("%f", &amount_received);

    balance = amount_received - total_cost;

    printf("----Shopping Cart----\n");
    printf("Product Name\tProduct Prize\tQuantity\t\n");
    for(i = 0; i < n; i++){
        printf("%s\t\t%f\t\t%f\t\n", bill[i].product_name, bill[i].product_prize, bill[i].quantity);
    }
    printf("Total Cost\t\t%f\n", total_cost);
    printf("GST\t\t%f\n", GST);
    printf("Amount Received\t\t%f\n", amount_received);
    printf("Balance Amount\t\t%f\n", balance);

    return 0;
}
