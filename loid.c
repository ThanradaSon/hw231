#include <stdio.h>
#include <math.h>
typedef struct rec{
    int id;
    char name[50];
    int pain;
}Rec;


int main(){
    int n, mostPain = 0, mostPainId[50];
    int nMostPain = 0;
    double averagePain = 0, allpain = 0;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Nothing to show");
    }else if ( n < 0)
    {
        printf("ErRor.!");
    }else
    {
        Rec rec[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &rec[i].id);
            scanf("%s", &rec[i].name);
            scanf("%d", &rec[i].pain);
            allpain += rec[i].pain;
        }
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
                if (rec[j].id > rec[j+1].id)
                {
                    Rec temp = rec[j+1];
                    rec[j+1] = rec[j];
                    rec[j] = temp;
                }
                
            }
            if (rec[i].pain >= mostPain)
            {
                mostPain = rec[i].pain;
            }

        }

        for (int i = 0; i < n; i++)
        {
            if (rec[i].pain == mostPain)
            {
                
                mostPainId[nMostPain] = i;
                nMostPain++;
            }
            
        }
        

        printf("All patient:");
        for (int i = 0; i < n; i++)
        {
            
            printf("\n  %02d %-10s %d", rec[i].id, rec[i].name, rec[i].pain);
        }

        printf("\nCritical:");
        for (int i = 0; i < nMostPain; i++)
        {
            printf("\n  %02d %-10s %d", rec[mostPainId[i]].id, rec[mostPainId[i]].name, rec[mostPainId[i]].pain);
        }
        
        averagePain = allpain / n;
        int afterCeil = (int) averagePain;
        double digit = averagePain - afterCeil;

        if (ceil(digit*10) == (digit*10))
        { 
            
            printf("\nAverage: %.1lf", averagePain);
        }else
        {   
            averagePain += 0.1;
            printf("\nAverage: %.1lf", averagePain);
        }
        
    }
    
    
    
}