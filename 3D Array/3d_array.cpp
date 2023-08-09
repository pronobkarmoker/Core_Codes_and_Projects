#include<iostream>
using namespace std;

// [ [2]= how many 2d array we make],        [ [3]= row] ,        [ [4]= column ];

int main(){
    
    
    // int arr[2][3][4] = {{
    //                        {10, 20 ,30 ,40},
    //                        {1, 2, 3,4 },
    //                        {5,6,7,8} } , 
    //                        {
    //                         {11,12,13,14},
    //                         {15,16,17,18},
    //                         {19,21,22,23}
    //                        }}; 


    int arr[2][3][4];

    cout << "enter the value of 3d array " << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k< 4 ; k++)
            {
                cin >> arr[i][j][k] ;
            }
            
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k< 4 ; k++)
            {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}