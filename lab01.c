#include <stdio.h>

typedef struct review
{
    double score;
    char name[100];
    int id;
}Review;

void myStrncpy(char destination[], const char source[]) {
    int count = 0;
        for (int i = 0 ; source[i] != '\0' ; i++) {
        destination[i] = source[i];
        count++;
        }
    destination[count] = '\0';
    }


int main(){
    double scoreInp;
    char nameInp[50];
    int n,i,j;

    scanf("%d",&n);
    if(n < 0){
        printf("ERROR");
    }else if (n == 0){
        printf("No reviews found");
    }else{
        Review review[n];
        for(i = 0; i < n; i++){
            scanf("\n%lf %s",&scoreInp,nameInp);
            myStrncpy (review[i].name,nameInp);
            review[i].score = scoreInp;
            review[i].id = i+1;
        }

        double allScore = 0;
        for(i = 0; i < n; i++){
            allScore += review[i].score;
        }

        double average = allScore/n;
        printf("Average Score: %.2lf",average);
        
        for(i = 0; i < n; i++){
            for(j = 0; j < n-1; j++){
                if(review[j+1].score > review[j].score){
                    Review temp = review[j+1];
                    review[j+1] = review[j];
                    review[j] = temp;
                    
                }else if(review[j+1].score == review[j].score){
                    if(review[j+1].id < review[j].id){
                        Review temp = review[j+1];
                        review[j+1] = review[j];
                        review[j] = temp;
                    }
                }
            }
        }

        for(i = 0; i < n; i++){
            printf("\n%.2lf %s (id: %d)",review[i].score,review[i].name,review[i].id);
        }
    }
    return 0;
}