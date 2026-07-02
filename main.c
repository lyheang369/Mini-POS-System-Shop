#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*--- Constants Values ---*/

#define MAX_PRODUCTS  50
#define MAX_CART      20
#define PRODUCTS_FILE "products.dat"
#define SALES_FILE    "sales.dat"
#define TAX_RATE      0.10

/*--- Structs ---*/

typedef struct {
    int id;
    char name[40];
    double price;
    int quantity;
} Product;

typedef struct {
    int product_id;
    char name[40];
    double unit_price;
    int qty;
    double subtotal;
} CartItem;

typedef struct {
    char   date[20];
    double total_before_discount;
    double discount_amount;
    double tax_amount;
    double grand_total;
    double payment;
    double change;
} SaleRecord;


int main() {



    return 0;
}