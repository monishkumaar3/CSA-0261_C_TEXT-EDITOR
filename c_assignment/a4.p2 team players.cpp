#include <stdio.h>
#define MAX_PLAYERS 11
struct Player {
    char name[50];
    int runs;
};
int main() {
    struct Player team[MAX_PLAYERS];
    int num_players, i, total_runs = 0;
    printf("Enter number of players in the team (max %d): ", MAX_PLAYERS);
    scanf("%d", &num_players);
    for (i = 0; i < num_players; i++) {
        printf("Enter name of player %d: ", i+1);
        scanf("%s", team[i].name);
        printf("Enter runs scored by %s: ", team[i].name);
        scanf("%d", &team[i].runs);
        total_runs += team[i].runs;
    }
    printf("\nBatting information for the team:\n");
    for (i = 0; i < num_players; i++) {
        printf("%d. %s: %d runs\n", i+1, team[i].name, team[i].runs);
    }
    printf("Total runs scored by the team: %d\n", total_runs);
    return 0;
}
