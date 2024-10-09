#include <iostream>
using std::cout;
using std::cin;
using std::endl;


int main(){

    int arr [3][4] {{0,4,3,5},{2,3,3,5},{1,4,4,5}};

    //int i {0};
    //int j {0};
    for(int i {0};i<3;i++){
        for(int j {0};j<4;j++){

        cout << arr[i][j] <<" ";
    
        }
        cout<<endl;
    }

    return 0;

}