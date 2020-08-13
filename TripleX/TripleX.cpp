#include <iostream>

bool PlayGameAtDifficulty(int levelDifficulty)
{
    std::cout << "\nYou are a secret agent breaking into a level "<< levelDifficulty << " safe" << std::endl;
    std::cout << "You need to enter the correct codes to continue...";


    int CodeA = rand() % (levelDifficulty * 10) + 1;
    int CodeB = rand() % (levelDifficulty * 10) + 1;
    int CodeC = rand() % (levelDifficulty * 10) + 1;

    int CodeSum = CodeA + CodeB+ CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << std::endl;
    std::cout << "There are 3 numbers in the code \n";
    std::cout << "\nThe codes add-up to " << CodeSum;
    std::cout << "\nThe codes multiply to give " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;
    std::cout << "\nYou entered " << " " << GuessA << " " << GuessB << " " << GuessC << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nCongrats that is correct!! \n";
        return true;
    }
    else
    {
        std::cout << "\nSorry that is incorrect \n";
        return false;
    }
}

int main()
{
    int difficulty = 1;
    const int maxDifficulty = 10;

    while (difficulty <= maxDifficulty)
    {
        bool bLevelComplete = PlayGameAtDifficulty(difficulty);
        std::cin.clear();
        std::cin.ignore();
        if (bLevelComplete) {
            ++difficulty;
        }
    }

    std::cout << "WOW - You're a master hacker!\n";
}
