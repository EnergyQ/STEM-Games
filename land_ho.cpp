#include <iostream>
#include <string.h>

#define ROW 1000
#define COL 1000

int isSafe(int M[][COL], int row, int col, bool visited[][COL])
{
    return (row >= 0) && (row < ROW) &&
           (col >= 0) && (col < COL) &&
           (M[row][col] && !visited[row][col]);
}

void DFS(int M[][COL], int row, int col, bool visited[][COL])
{
    static int rowNbr[] = {-1, 0, 0, 1};
    static int colNbr[] = {0, -1, 1, 0};

    visited[row][col] = true;

    for (int k = 0; k < 4; ++k)
        if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited))
            DFS(M, row + rowNbr[k], col + colNbr[k], visited);
}
int main()
{
    int m,n,s;
    std::cin >> m >> n >> s;
    int M[ROW][COL];
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            int level;
            std::cin>> level; 
            if(level > s) {
                M[i][j] = 1;
            } else {
                M[i][j] = 0;
            }
        }
    }

    bool visited[ROW][COL];
    memset(visited, 0, sizeof(visited));

    int count1 = 0;
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            if (M[i][j] && !visited[i][j])
            {
                DFS(M, i, j, visited);
                ++count1;
            }
    


    std::cout << count1 << std::endl;
    return 0;
}
