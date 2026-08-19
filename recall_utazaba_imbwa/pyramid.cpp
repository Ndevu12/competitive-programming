#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){

    const int maxValue = 10;
    const int center   = (1 + maxValue) / 2;                 
    const int rows     = max(center, maxValue - center + 1); 

    for (int i = 1; i <= rows; i++){

        const int first = max(1,        center - i + 1);
        const int last  = min(maxValue, center + i - 1);

        cout << string(2 * (rows - i), ' ');

        for (int value = first; value <= last; value++){
            cout << value << " ";
        }

        cout << endl;
    }

    return 0;
}

 /**
              5
            4 5 6
          3 4 5 6 7
        2 3 4 5 6 7 8
      1 2 3 4 5 6 7 8 9
    1 2 3 4 5 6 7 8 9 10
*/

