//Hello from workspace 2
#include <stdio.h>

int main() {
    int home_goals,away_goals;
    printf("Home team goals: ");
    scanf("%d",&home_goals);
    printf("Away team goals: ");

    scanf("%d",&away_goals);
    int diff = home_goals - away_goals;
    int sign = (diff > 0) - (diff < 0); // 1, 0, or -1

    switch (sign) {
        case 1: printf("The home team has won\n"); break;
        case -1: printf("The home team has lost\n"); break;
        case 0: printf("It is a draw\n"); break;
    }

    return 0;
}
