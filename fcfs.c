#include <stdio.h> 

int main(){
    int cbt[20];
    int wt[20];
    int tat[20];
    int n;

    printf("Enter number of processes you want (max 20): ");
    scanf("%d", &n);
 
    puts("===============================================\n\nEnter burst times: ");
    for(int i = 0; i < n ; i ++){
        printf("P[%d]: ", i + 1);
        scanf("%d", &cbt[i]);
    }

    wt[0] = 0; 
    for(int i = 1; i < n ; i ++){
        wt[i] = 0; 
        for(int j = 0; j < i; j++){
            wt[i] += cbt[j];
        }
    }

    for(int i = 0; i < n; i ++){
        tat[i] = wt[i] + cbt[i];
    }

    puts("\n==============================================\n\nProcess\tCBT\tWT\tTaT");
    for(int i = 0; i < n ; i ++){
        printf("P[%d]\t%d\t%d\t%d\n", i + 1, cbt[i], wt[i], tat[i]);
    }
}