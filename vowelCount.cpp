/*
 * Vowel Count
 * By Sam Firnhaber
 */

#include <iostream>

bool isVowel(char c) {
    switch (c) {
        case 'a':
            return true;
        case 'A':
            return true;
        case 'e':
            return true;
        case 'E':
            return true;
        case 'i':
            return true;
        case 'I':
            return true;
        case 'o':
            return true;
        case 'O':
            return true;
        case 'u':
            return true;
        case 'U':
            return true;
        default:
            return false;
    }
}

int main() {
    std::string input;
    std::cin >> input;
    int count = 0;
    for (int i = 0; i < input.length(); i++)
        if (isVowel(input[i]))
            count++;
    std::cout << count << std::endl;
    return 0;
}
