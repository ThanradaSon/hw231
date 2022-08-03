#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n;
    double allScore = 0;
    double befScore[20];
    string befName[20];
    int befId[20];
    cin >> n;

    if (n == 0)
    {
        cout << "No reviews found" << endl;
    }else if (n < 0)
    {
        cout << "ERROR" << endl;
    }else
    {
        for (int i = 0; i < n; i++)
        {
            cin >> befScore[i] >> befName[i];
            befId[i] = i+1;
            allScore += befScore[i];

        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
                if(befScore[j] < befScore[j+1]){
                    double tempScore = befScore[j+1];
                    befScore[j+1] = befScore[j];
                    befScore[j] = tempScore;

                    string tempName = befName[j+1];
                    befName[j+1] = befName[j];
                    befName[j] = tempName;

                    int tempId = befId[j+1];
                    befId[j+1] = befId[j];
                    befId[j] = tempId;
                }
            }
        }
        
        double average = allScore / 5.0;
        printf("Average Score: %.2lf\n", average);
        for (int i = 0; i < n; i++)
        {
                printf("\n%.2lf %s (id: %d)\n", befScore[i], befName[i].c_str(), befId[i]);

        }
        
    }

}