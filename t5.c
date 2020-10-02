#include <stdio.h>
#include <stdbool.h>

#define size 2

struct store{

    int item_number;
    char item_name[20];
    int item_price;

}item[size];

void insert_data(void);
int linear_search(int);

int main(void) {

    int sk;
    int pos;

    insert_data();

    printf("Enter search item number: ");
    scanf("%d", &sk);

    pos = linear_search(sk);

    if(pos==-1) {

        printf("Item not found");

    } else {
        printf("You search item\n");
        printf("%d\n", item[pos].item_number);
        printf("%s\n", item[pos].item_name);
        printf("%d\n", item[pos].item_price);

    }

    return 0;
}

void insert_data(void) {

    for(int i=0;i<size;i++) {

        printf("Enter item number: ");
        scanf("%d", &item[i].item_number);

        printf("Enter item name: ");
        scanf("%s", &item[i].item_name);

        printf("Enter item price: ");
        scanf("%d", &item[i].item_price);

    }

}

int linear_search(int sk) {

    static int position = -1;
    int index=0;
    bool flag = false;

    while(index<size && !flag) {

        if(item[index].item_number==sk) {

            flag = true;
            position = index;

        }
        index++;

    }

    return position;
}
