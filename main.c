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

/*--- Globals ---*/

Product products[MAX_PRODUCTS];
int     product_count = 0;

CartItem cart[MAX_CART];
int      cart_count = 0;

/*--- File Helper ---*/

void loadProducts(void) {
    FILE *f = fopen(PRODUCTS_FILE, "rb");
    if (!f) return;
    product_count = 0;
    while (fread(&products[product_count], sizeof(Product), 1, f) == 1)
        product_count++;
    fclose(f);
}

void saveProducts(void) {
    FILE *f = fopen(PRODUCTS_FILE, "wb");
    if (!f) { printf("Error saving products.\n"); return; }
    fwrite(products, sizeof(Product), product_count, f);
    fclose(f);
}

void appendSaleRecord(SaleRecord *rec) {
    FILE *f = fopen(SALES_FILE, "ab");
    if (!f) { printf("Error saving sale.\n"); return; }
    fwrite(rec, sizeof(SaleRecord), 1, f);
    fclose(f);
}

int main() {



    return 0;
}