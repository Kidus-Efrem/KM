#include <iostream>
#include <iomanip>

int main() {
    const int numberOfQuestions = 10;
    char correctAnswers[numberOfQuestions] = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B'};
    char studentAnswers[numberOfQuestions];

    // Accept student answers
    std::cout << "Enter your answers (A, B, C, or D) for the 10 questions:\n";
    for (int i = 0; i < numberOfQuestions; ++i) {
        std::cout << "Question " << (i + 1) << ": ";
        std::cin >> studentAnswers[i];
    }

    // Print test score and marked student answer
    int score = 0;
    std::cout << "\nTest Score and Marked Student Answers:\n";
    for (int i = 0; i < numberOfQuestions; ++i) {
        std::cout << "Question " << (i + 1) << ": ";
        std::cout << "Correct Answer: " << correctAnswers[i] << ", ";
        std::cout << "Your Answer: " << studentAnswers[i] << ", ";
        if (correctAnswers[i] == studentAnswers[i]) {
            std::cout << "Score: 1\n";
            score++;
        } else {
            std::cout << "Score: 0\n";
        }
    }

    std::cout << "\nTotal Score: " << score << " out of " << numberOfQuestions << std::endl;

    return 0;
}
