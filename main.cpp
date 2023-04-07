#include <iostream>

int main()
{
    std::string questions[] = {
        "1. What is 2+2?: ",
        "2. What is 1+2+3+4+5+6+7+8+9+10?: ",
        "3. What is 1*3+2-1?: ",
        "4. What is 1000000000000000000000000000^2*0?: "};

    std::string options[][4] = {
        {"A. 1", "B. 2", "C. 3", "D. 4"},
        {"A. 51", "B. 55", "C. 47", "D. 56"},
        {"A. 1", "B. 2", "C. 3", "D. 4"},
        {"A. 1000000000000000000", "B. 100000000000000000000000000000000000", "C. 0", "D. 2"}

    };

    char answerKey[] = {'D', 'B', 'D', 'C'};
    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++)
    {
        std::cout << "******************\n";
        std::cout << questions[i] << '\n';
        std::cout << "******************\n";

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << '\n';
        }

        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            std::cout << "Correct!\n";
            score++;
        }
        else
        {
            std::cout << "Wrong :(\n";
            std::cout << "Answer: " << answerKey[i] << '\n';
        }
    }
    std::cout << "******************\n";
    std::cout << "*    Results\n   *";
    std::cout << "******************\n";
    std::cout << "Correct guesses: " << score << '\n';
    std::cout << "# of questions: " << size << '\n';
    std::cout << "Score: " << (score / (double)size) * 100 << "%";
}
