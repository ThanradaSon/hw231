#include <stdio.h>
int main(){
    struct address{
        char district[20];
        char city[20];
    };
    struct flower{
        char id[20];
        char name[20];
        int price;
        struct address flower_addr;
    };
    struct flower flower_list[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s %s %d %s %s", flower_list[i].id, flower_list[i].name, &flower_list[i].price, flower_list[i].flower_addr.district, flower_list[i].flower_addr.city);
    }
    printf("------------------------------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s %s %d %s %s\n",flower_list[i].id, flower_list[i].name, flower_list[i].price, flower_list[i].flower_addr.district, flower_list[i].flower_addr.city);
    }
}//6410406649 ธัญรดา สอนนาคงเจริญ