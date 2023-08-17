#include <iostream>
#include <string>

int main() {
    // Initialize points for each house
    int gryffindor = 0;
    int hufflepuff = 0;
    int ravenclaw = 0;
    int slytherin = 0;

    // Welcome message
    std::cout << "The Sorting Hat Quiz!" << std::endl;

    // Question 1
    std::cout << "Q1) When I'm dead, I want people to remember me as:" << std::endl;
    std::cout << "  1) The Good" << std::endl;
    std::cout << "  2) The Great" << std::endl;
    std::cout << "  3) The Wise" << std::endl;
    std::cout << "  4) The Bold" << std::endl;
    int answer1;
    std::cin >> answer1;

    if (answer1 == 1) {
        hufflepuff++;
    } else if (answer1 == 2) {
        slytherin++;
    } else if (answer1 == 3) {
        ravenclaw++;
    } else if (answer1 == 4) {
        gryffindor++;
    } else {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    // Question 2
    std::cout << "Q2) Dawn or Dusk?" << std::endl;
    std::cout << "  1) Dawn" << std::endl;
    std::cout << "  2) Dusk" << std::endl;
    int answer2;
    std::cin >> answer2;

    if (answer2 == 1) {
        gryffindor++;
        ravenclaw++;
    } else if (answer2 == 2) {
        hufflepuff++;
        slytherin++;
    } else {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    // Question 3
    std::cout << "Q3) Which kind of instrument most pleases your ear?" << std::endl;
    std::cout << "  1) The violin" << std::endl;
    std::cout << "  2) The trumpet" << std::endl;
    std::cout << "  3) The piano" << std::endl;
    std::cout << "  4) The drum" << std::endl;
    int answer3;
    std::cin >> answer3;

    if (answer3 == 1) {
        slytherin++;
    } else if (answer3 == 2) {
        hufflepuff++;
    } else if (answer3 == 3) {
        ravenclaw++;
    } else if (answer3 == 4) {
        gryffindor++;
    } else {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    // Question 4
    std::cout << "Q4) Which road tempts you most?" << std::endl;
    std::cout << "  1) The wide, sunny grassy lane" << std::endl;
    std::cout << "  2) The narrow, dark, lantern-lit alley" << std::endl;
    std::cout << "  3) The twisting, leaf-strewn path through woods" << std::endl;
    std::cout << "  4) The cobbled street lined (ancient buildings)" << std::endl;
    int answer4;
    std::cin >> answer4;

    if (answer4 == 1) {
        hufflepuff++;
    } else if (answer4 == 2) {
        slytherin++;
    } else if (answer4 == 3) {
        gryffindor++;
    } else if (answer4 == 4) {
        ravenclaw++;
    } else {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    // Find the house with the most points
    int max = 0;
    std::string house;

    if (gryffindor > max) {
        max = gryffindor;
        house = "Gryffindor";
    }
    if (hufflepuff > max) {
        max = hufflepuff;
        house = "Hufflepuff";
    }
    if (ravenclaw > max) {
        max = ravenclaw;
        house = "Ravenclaw";
    }
    if (slytherin > max) {
        max = slytherin;
        house = "Slytherin";
    }

    // Output the sorted house
    std::cout << house << "!" << std::endl;

    return 0;
}
