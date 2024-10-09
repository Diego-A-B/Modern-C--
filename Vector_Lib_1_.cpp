#include <iostream>
#include <vector>
using std::cout;
using std::endl;
//using std::cin;
using std::vector;

void integer_print(const vector<int> &vec){

    for(int i = 0;i<vec.size();i++){

        cout<< vec[i]<<endl;

    }
    return;

}
void char_print(const vector<char> &vec){

    for(int i = 0;i<vec.size();i++){

        cout<< vec[i]<<endl;

    }
    return;

}

void double_print(const vector<double> &vec){

    for(int i = 0;i<vec.size();i++){

        cout<< vec[i]<<endl;

    }
    return;

}


int main(){


    vector<char> vowel_lst {'a','e','i', 'o','u'};
    vector<int> integer_lst {100, 98, 99, 85,93};
    vector<double> temp_lst (365,80.0); //initializes a vector; first param is the vector length, the second param is the value of initialization.

    vector<int> *ptr_to_integer_lst = &integer_lst;
    vector<char> *ptr_to_char_lst = &vowel_lst;
    vector<double> *ptr_to_dub_lst = &temp_lst;

    integer_print(*ptr_to_integer_lst);
    cout<<endl;
    char_print(*ptr_to_char_lst);
    cout<<endl;
    double_print(*ptr_to_dub_lst);
    cout<<endl;

    return 0;

}