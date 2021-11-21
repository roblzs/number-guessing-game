#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int generate_random_number(){
    int MIN_INT = 0;
    int MAX_INT = 100;

    srand(time(0));

    int random_number = (rand() % MAX_INT) + MIN_INT;

    return random_number;
}

int main(){
    int random_number = generate_random_number();



    
}