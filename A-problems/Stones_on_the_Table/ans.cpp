#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	string stones;
	cin >> stones;


	int track = n - 1;
	int count = 0;

	while (track > 0){
		if (stones[track] == stones[track - 1]){
			count++;
		}

		track--;
	}

	cout << count << endl;
	return 0;
}
