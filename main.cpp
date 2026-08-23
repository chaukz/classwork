#include <iostream>
    
int getDigit( const int number);
int sumOddDigits( const std::string cardnumber);
int sumEvenDigits( const std::string cardnumber);
    
int main()
{
    std::string cardnumber;
    int result =0;
    std::cout << "Enter a card number: ";
    std::cin >> cardnumber;
    
    result = sumEvenDigits(cardnumber) + sumOddDigits(cardnumber);
    
    if (result % 10 == 0)
    {
        std::cout << "The card number is valid." << std::endl;
    }
    else
    {
        std::cout << "The card number is invalid." << std::endl;
    }   
    std::cout << "The sum of the digits is: " << result << std::endl;
return 0;

}
int getDigit( const int number)
{
    return number % 10 + (number / 10 % 10);
}
int sumOddDigits( const std::string cardnumber){
int sum = 0;
    for (int i = cardnumber.length() - 1; i >= 0; i -= 2)
    {
        sum += cardnumber[i] - '0';
    }
    return sum;
}
int sumEvenDigits( const std::string cardnumber){

    int sum = 0;
    for (int i = cardnumber.length() - 2; i >= 0; i -= 2)
    {
        sum += getDigit((cardnumber[i] - '0')*2);
    }
    return sum;
}