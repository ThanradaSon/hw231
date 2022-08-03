#include <stdio.h>
int main(){
    char arrName[5][20];
    int arrScore[5];
    double allScore = 0;
    double mean;
    for (int i = 0; i < 5; i++)
    {
        scanf("%s %d", &arrName[i], &arrScore[i]);
        allScore += arrScore[i];
    }
    mean = allScore / 5;
    printf("ค่าเฉลี่ย : %.2lf\n", mean);
    printf("ชื่อและคะแนนของคนที่มีคะแนนมากกว่าค่าเฉลี่ย\n");
    for (int i = 0; i < 5; i++)
    {
        if (arrScore[i] > mean)
        {
            printf("%s %d\n", arrName[i], arrScore[i]);
        }
    } //6410406649 ธัญรดา สอนนาคงเจริญ
}