/*Завдання 1
#include <iostream>

void printBits(unsigned int n) {
    int size = sizeof(n) * 8;
    std::cout << "Біти числа " << n << ": ";

    for (int i = size - 1; i >= 0; --i) {
        int bit = (n >> i) & 1;
        std::cout << bit;
        if (i % 4 == 0) std::cout << " ";
    std::cout << std::endl;
}

int main() {
    printBits(5);
    return 0;
*/
/*Завдання 2
#include <iostream>


bool isEven(unsigned int n) {
    return (n & 1) == 0;
}

int main() {
    unsigned int num = 4;
    if (isEven(num)) {
        std::cout << num << " є парним числом." << std::endl;
    }
    else {
        std::cout << num << " є непарним числом." << std::endl;
    }
    return 0;
}
*/
/*Завдання 3
#include <iostream>


void clearBit(unsigned int& n, int index) {
    n &= ~(1U << index);
}

int main() {
    unsigned int num = 7;
    std::cout << "До очищення: " << num << std::endl;

    clearBit(num, 1);

    std::cout << "Після очищення біта 1: " << num << std::endl;
    return 0;
}
*/
/*Завдання 4
#include <iostream>

void setBit(unsigned int& n, int index) {
    n |= (1U << index);
}

int main() {
    unsigned int num = 4;
    std::cout << "До встановлення: " << num << std::endl;

    setBit(num, 0);

    std::cout << "Після встановлення біта 0: " << num << std::endl;
    return 0;
}
*/
/*Завдання 5
#include <iostream>

void toggleBit(unsigned int& n, int index) {
    n ^= (1U << index);
}

int main() {
    unsigned int num = 4;
    std::cout << "До інвертування: " << num << std::endl;

    toggleBit(num, 2);
    std::cout << "Після toggleBit(2): " << num << std::endl;

    toggleBit(num, 0);
    std::cout << "Після toggleBit(0): " << num << std::endl;

    return 0;
}
*/
/*Завдання 6
#include <iostream>

void countBits(unsigned int n) {
    int ones = 0;
    int totalBits = sizeof(n) * 8;
    unsigned int temp = n;

    while (temp > 0) {
        if (temp & 1) {
            ones++;
        }
        temp >>= 1;
    }
    int zeros = totalBits - ones;

    std::cout << "Число: " << n << std::endl;
    std::cout << "Кількість одиничних бітів (1): " << ones << std::endl;
    std::cout << "Кількість нульових бітів (0): " << zeros << std::endl;
}

int main() {
    countBits(5);
    return 0;
}
*/
/*Завдання 7
#include <iostream>


bool isPowerOfTwo(unsigned int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    unsigned int num1 = 8;
    unsigned int num2 = 6;

    std::cout << num1 << " є степенем двійки? " << (isPowerOfTwo(num1) ? "Так" : "Ні") << std::endl;
    std::cout << num2 << " є степенем двійки? " << (isPowerOfTwo(num2) ? "Так" : "Ні") << std::endl;

    return 0;
}
*/
/*Завдання 8
#include <iostream>

int getLowestSetBitIndex(unsigned int n) {
    if (n == 0) return -1;

    int index = 0;
    while ((n & 1) == 0) {
        n >>= 1;
        index++;
    }
    return index;
}

int main() {
    unsigned int num = 12;
    std::cout << "Індекс молодшого встановленого біта для " << num << " дорівнює: "
        << getLowestSetBitIndex(num) << std::endl;

    return 0;
}
*/
/*Завдання 9
#include <iostream>


unsigned int clearLowestSetBit(unsigned int n) {
    return n & (n - 1);
}

int main() {
    unsigned int num = 12;
    unsigned int result = clearLowestSetBit(num);

    std::cout << "Початкове число: " << num << " (1100 в двійковій)" << std::endl;
    std::cout << "Після обнулення молодшого біта: " << result << " (1000 в двійковій)" << std::endl;

    return 0;
}
*/
