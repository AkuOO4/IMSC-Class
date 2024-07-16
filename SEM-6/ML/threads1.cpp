#include <iostream>
#include <thread>

// Function to print the first n natural numbers
void printNaturalNumbers(int n) {
    for (int i = 1; i <= n; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;

    std::cout << "Enter the value of n: ";
    std::cin >> n;

    // Create a thread to execute the printNaturalNumbers function
    std::thread t(printNaturalNumbers, n);

    // Wait for the thread to finish
    t.join();

    return 0;
}