#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
    int a = 12341234;
    string s = to_string(a);

    // if(('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52)){
    //     s = "True";
    // }
    // else{
    //     s="False";
    // }
    string s1 = "\n";
    int b;

    for(int i=0; i<s.length(); i++){
        b = s[i];
        cout << b << " ";
    }

    cout << s1 <<endl;
    return 0;
}