#include <iostream>

int main()
{
    const int arrayCount = 6;
    int arr[arrayCount] = {2, 1, 4, 3, 9, 5};
    
    int temporary; // variable for swapping

    std::cout << "Array before sort: " << std::endl;
    for (int index = 0; index < arrayCount; index++) {
        std::cout << "arr[" << index << "] = " << arr[index] << std::endl;
    }

    // Bubble sort
    for (int i = 0; i < arrayCount-1; i++) {
        for (int index = 0; index < arrayCount - i - 1; index++) {
            if (arr[index] > arr[index + 1]) {
                temporary = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = temporary;
            }
        }
    }

    std::cout << "\nArray after sort: " << std::endl;
    for (int index = 0; index < arrayCount; index++) {
        std::cout << "arr[" << index << "] = " << arr[index] << std::endl;
    }

}