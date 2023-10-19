// 06.teeth.cpp
// Alejandro Cerezo Contreras 18-10-2023
// Description

#include <iostream>
using namespace std;

int main() {

    int height = 5;
    int nteeth = 3;
    int cnt = 1;
    int cnt2 = 1;


    for (int h = height-2; h > 0; h--) {

        if (cnt == 1){

            for (int space = height-cnt-1; space >= 0; space--){
            cout << ' ';
            }

            for (int space = nteeth; space > 0; space--){
                cout << '*';
                for (int space = height*2-3; space > 0; space--){
                    cout << ' ';
                }
            }
                cout << endl ;
        }

        for (int space = height-cnt-1; space > 0; space--){
            cout << ' ';
        }

        for (int i = nteeth; i > 0; i--) {

            cout << '*';

            for (int space = cnt2 ; space > 0; space--){
            cout << ' ';
            }

            cout << '*';

            for (int space = height*2-4-cnt2; space > 0; space--){
            cout << ' ';
            }
        }
        
        if (cnt == height-2){
            cout << endl;
            for (int space = nteeth; space > 0; space--){
                cout << '*';
                    for (int space = height*2-3; space > 0; space--){
                        cout << ' ';
                    }
                }
        }

        cout << endl;
        cnt++;
        cnt2 += 2;
    }


        return 0;
}