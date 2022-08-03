#include <stdio.h>
#include <string.h>

int main(){

    int index = 0;
    int no;
    typedef struct menu{
        int no;
        char name[50];
    }Menu;
    
    Menu menu[20];
    char inp[50];

    while (1)
    {
        scanf("%s",&inp);
        if (strcmp(inp, "exit") == 0)
        {   
            printf("<< Menu >>\n");
            for (int i = 0; i < index; i++)
            {
                printf("%d. %s\n", menu[i].no, menu[i].name);
            }
            break;
            
        }else if (strcmp(inp, "add") == 0)
        {
            
            scanf("%s", menu[index].name);
            menu[index].no = index+1;
            index++;
        }else if (strcmp(inp, "del") == 0)
        {   
            
            scanf("%d", &no);
            
            if (no <= index)
            {
                for (int i = no-1; i < index; i++)
                {
                    
                    if (i == index-1)
                    {
                        break;
                    }else
                    {
                        menu[i] = menu[i+1];
                        menu[i].no = (menu[i+1].no)-1;
                    }
                }
                index--;
            }else
            {
                ;
            }

        }else if (strcmp(inp, "show") == 0)
        {
            printf("<< Menu >>\n");

            if (menu[0].no == '\0')
            {
                ;
            }else
            {
                for (int i = 0; i < index; i++)
                {
                printf("%d. %s\n", menu[i].no, menu[i].name);
                }
            }
        }
    }
    
}