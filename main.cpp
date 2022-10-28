#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Input n:" << endl;
    cin >> n;
    int m;
    cout << "Input m:" << endl;
    cin >> m;
    int x = -1;
    int y = 0;
    int dx = 1;
    int dy = 0;
    int counter = 1;
    int matrix[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            matrix[i][j] = 0;
        }
    }
    while(counter <= n * m){
        if (x + dx <= m - 1 && x + dx >= 0 && y + dy <= n - 1&& y + dy >= 0 && matrix[x + dx][y + dy] == 0){
            matrix[x + dx][y + dy] = counter;
            x += dx;
            y += dy;
        }
        else{
            if(dx == 1){
                dx = 0;
                dy = 1;
            }
            else if(dy == 1){
                dy = 0;
                dx = -1;
            }
            else if(dx == -1){
                dx = 0;
                dy = -1;
            }
            else if(dy == -1){
                dy = 0;
                dx = 1;
            }
            counter -= 1;
        }
        counter += 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
