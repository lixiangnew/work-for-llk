#include "natcn.h"

#include <stdatomic.h>
int arr[125001][2][2]={0};
void init(int map[][505], int n, int m)
{
    int cnt[125001]={0};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) {
            int now = map[i][j];
            cnt[now]++;
            arr[now][cnt[now]-1][0]=i;
            arr[now][cnt[now]-1][1]=j;
        }
    }
}//arr存坐标，第一个（数字的值），第二个（0为第一次出现，1为第二次出现），第三个（0为行数，1为列数）
int *get_position(int value, int order) {
    // Do not modify the following line
    int *position = (int *)malloc(2 * sizeof(int));

    // Write your code here
    position[0] = arr[value][order][0];
    position[1] = arr[value][order][1];
    /*
    Heap memory and pointer, here it is! You don't need to understand it now, just see it as an integer array 'int position[2];'.
    You can modify the value in this array, the effect will be passed out of this function.
    Let's say:
        position[0] = 1;
        position[1] = 2;
    This stands for a position (1, 2).

    @advanced* (you may ignore this part)
        - What would happen if you just use 'int position[2];'?
*/

    // Do not modify the following line
    return position;
}

bool walk(int map[][505], int n, int m, int x, int y, int dx, int dy) {
    // Write your code here
    while(x>=0 && y>=0 && x<n && y<m)
    {
        x+=dx;
        y+=dy;
        if(x<0||x>=n||y<0||y>=m)break;
        if(map[x][y]!=0) return false;
    }

    return true;
}
