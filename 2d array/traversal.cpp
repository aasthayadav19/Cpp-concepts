#include <iostream>
using namespace std;

int main(){

    int rows, cols;
    cout<<"Enter the rows: ";
    cin>>rows;
    cout<<endl;

    cout<<"Enter the cols: ";
    cin>>cols;
    cout<<endl;

    int arr[4][5];

    for(int i =0; i<rows; i++){
      for(int j =0; j<cols; j++){
        cin>> arr[i][j];
      }
    }

    cout<<endl;
    
    for(int i=0;i<rows;i++){
        for(int j=0; j<cols; j++){
            cout<< arr[i][j]<< " ";
        }
        cout<<endl;
    }




    return 0;
}