#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]){
    int c;
    float sum = 0.0,average;
    c = argc-1;
    if(argc <=1){cout << "Please input numbers to find average.\n";}
    else {
    for (int i = 1; i <= c; i++){
        sum += atof(argv[i]);
    }     
    average = sum/c;
    cout << "---------------------------------\n";
    cout << "Average of " << c << " numbers = " << average << endl;
    cout << "---------------------------------\n";
    }
    return 0;
}
