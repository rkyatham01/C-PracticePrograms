#include <iostream>
//Program to validate credit card number
//Using Luhns Algorithm

//step 1 Double every second digit from right to left. If doubled number
//If doubled number is 2 digits, split them
//1 2 1  0 0  1 8 2  1 8 4

//step 2 : Add all single digits from step 1
//sum is 29

//step 3 : Add all odd numbered digits from right to left
//0 1  0 9  0 3  0 4
//21

//step 4 : result of step 2 & 3 sum is 50

//step 5 : if step 4 is divisible by 10, # is valid
//50 is % 10 is True so this number is valid

int getDigit(const int number); //gets the digit
int sumOddDigits(const std::string cardNumber); 
int sumEvenDigits(const std::string cardNumber); 

int main(){
    std::string cardNumber;
    int result = 0;

    std::cout << "Enter a credit card #: ";
    std::cin >> cardNumber;

    result = sumEvenDigits(cardNumber); //step 1 and 2
    result += sumOddDigits(cardNumber); //step 3

    if(result % 10 == 0){
        std::cout << cardNumber << " is valid!";
    }else{
        std::cout << cardNumber << " is not valid!";
    }
    return 0;
}

int getDigit(const int number){
    // 18   8   18 / 10 = 1 b/c integer division
    //does the split and cumulative sum process
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits(const std::string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i -= 2){ //starts from 2nd to last digit
        sum += cardNumber[i] - '0';
        //you need the '0' b/c it is a character at cardNumber[i] and to make it 
        //its decimal equivalent you need to subtract it by '0'
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber){
    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i -= 2){ //starts from 2nd to last digit
        sum += getDigit((cardNumber[i] - '0')*2);
    }

    return sum;
}