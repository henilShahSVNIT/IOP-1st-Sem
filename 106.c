#include <stdio.h>
#include <string.h>

struct Item 
{
    char itemName[50];
    int quantity;
    float price;
    float amount;
};

void calculateAmount(struct Item *item) 
{
    item->amount = item->quantity * item->price;
    printf("Item: %s, Quantity: %d, Price: %f, Amount: %f\n",
           item->itemName, item->quantity, item->price, item->amount);
}

int main() 
{
    struct Item item;
    printf("Enter item name: ");
    scanf("%s", item.itemName);
    printf("Enter quantity: ");
    scanf("%d", &item.quantity);
    printf("Enter price: ");
    scanf("%f", &item.price);

    calculateAmount(&item);
    return 0;
}
