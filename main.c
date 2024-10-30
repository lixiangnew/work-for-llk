/* DO NOT MODIFY THIS FILE */
/* In other words, modification in this file has no effect in online-judge */

#include "natcn.h"
#include <stdio.h>
#include <string.h>

int main() {
    const int dx[4] = {-1, 1, 0, 0};
    const int dy[4] = {0, 0, 1, -1};

    int n, m;
    int map[505][505];

    // Initialize local variables in a new way (maybe), do not use this function in the future before you completely understand it.
    // How to check whether you understand it? Try to predict the result of 'memset(map, 2, sizeof(map))' and 'memset(map, -1, sizeof(map))'.
    // Learning with a question is always better than learning with an answer.
    memset(map, 0, sizeof(map));

    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            scanf("%d", &map[i][j]);
        }
    }

    init(map, n, m);

    int *pos[2];
    for(int i = 1; i <= n * m / 2; i++) {
        for(int d = 0; d < 4; d++) {
            pos[0] = get_position(i, 0);
            pos[1] = get_position(i, 1);

            if(walk(map, n, m, pos[0][0], pos[0][1], dx[d], dy[d]) &&
               walk(map, n, m, pos[1][0], pos[1][1], dx[d], dy[d])) {
                printf("%d ", i);
                map[pos[0][0]][pos[0][1]] = 0;
                map[pos[1][0]][pos[1][1]] = 0;
                break;
            }
            
            free(pos[0]);
            free(pos[1]);
        }
    }
    printf("\n");
    return 0;
}