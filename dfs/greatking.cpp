#include <bits/stdc++.h>
using namespace std;                                                                                        
void bigcont(int row, int col, vector<vector<int>>& adjList, vector<bool>& visited) {
	visited[row][col] = true;
    cout << "Visiting: " << row << col << "\n";  


        for (int i = 0; i < row; i++){
                for (int j =0; j < col; j++){                  
	   		 if (!visited[i][j]) {                                    
		    		bigcont(neighbor, adjList, visited);
			 }
		}                                      
	}
}

int main() {
	int r, c, rpos, lpos;
	cin>r>c;

	vector<vector<char>> m;

	for (int i = 0; i < r; i++){
		for (int j =0; j < c; j++){
			char h;
			cin>h;
			m[r][c].push_back(h)
		}
	}

	cin>rpos>lpos;

    	vector<vector<bool>> visited(r, c, false);
    	bigcont(1, 1, m, visited);
}
~
