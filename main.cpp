#include <iostream>

int main()
{
    
    std::string questions[] = {"1. What year was C++ created?",
                                "2. Who invented C++?",
                                 "3. What is the predecessor of C++?",
                                  "4. What is the main advantage of using C++ over C?"};

    std::string answers[][4] = {{"A. 1985", "B. 1986", "C. 1987", "D. 1988"}, 
                                {"A. Bjarne Stroustrup", "B. Anders Hejlsberg", "C. Guido van Rossum", "D. James Gosling"},
                                {"A. C", "B. C++", "C. Java", "D. Python"}, 
                                {"A. Faster execution speed", "B. Better memory management", "C. Enhanced type safety", "D. All of the above"}};
    char correctAnswers[] = {'A', 'A', 'A', 'D'};
    
    int size = sizeof(questions) / sizeof(questions[0]);
    char userAnswer;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        std::cout << questions[i] << std::endl;
        for (int j = 0; j < 4; j++)
        {
            std::cout << answers[i][j] << std::endl;
        }
        std::cout << "Your answer: ";
        std::cin >> userAnswer;

        if (toupper(userAnswer) == correctAnswers[i])
        {
            std::cout << "Correct!" << std::endl;
            score++;
        }
        else
        {
            std::cout << "Incorrect! The correct answer is: " << correctAnswers[i] << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}
