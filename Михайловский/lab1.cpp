#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...)

    std::cout << "Введите количество чисел" << "\n" ;
    int length;
    std::cin >> length;
    
    srand(1);
    int issue = 0 + rand() % length;
    int *array = new int[length];
    
    std::cout << issue << "\n";
    
    for (int i = 0; i<length; i++) {
        array[i] = i;
    }
    
    int lowLim = 0, highLim = array[length-1], guess = 0, colIt = 0;
    
    while (lowLim <= highLim) {
        colIt++;
        guess = array[(lowLim + highLim) / 2];
        if (guess == issue) {
            break;
        } else if (guess < issue){
            lowLim = guess + 1;
        } else {
            highLim = guess - 1;
        }
    }
    int result = guess;
    std::cout << "Случайное число: " << result << " найдено за количество попыток: " << colIt << "\n" ;
    return 0;
}
