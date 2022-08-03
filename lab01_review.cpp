#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int n;
    double allScore = 0;
    double befScore[1000];
    string befName[1000];
    int befId[1000];
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
                }else if (befScore[j] == befScore[j+1])
                {
                    /* code */
                }
                
////////////////////////////////////////////////////////////////////////

            }
        }
        
        double average = allScore / 5.0;
        printf("Average Score: %.2lf\n", average);
        for (int i = 0; i < n; i++)
        {
            cout << setprecision(2) << fixed;
            if (i == n-1)
            {
                cout << befScore[i] << " " << befName[i] << " (id: " << befId[i] << ")";

                
            }else{
            
                cout << befScore[i] << " " << befName[i] << " (id: " << befId[i] << ")" << endl;

                
            }

        }
        
    }
    
    
    


}