/*
Declaring and Initializing Arrays
Pawelski
5/10/2022
Please follow the instructions on the activity guide!
*/

#include <iostream>

/// <summary>
/// Prints the elements within the array in the following format:
/// index : element
/// index : element
/// ...
/// </summary>
/// <param name="arr">Array to display.</param>
/// <param name="length">Length of the array.</param>
void Print(int arr[], int length)
{
    /*
    This function accepts an array and Prints out each value on a seperate
    line along with its index. This particular function traverses an array,
    which we will discuss in a future lesson in detail! (SIDE NOTE: This is
    another example of overloading!)
    */
    for (int i = 0; i < length; i++)
    {
        std::cout << i << " : " << arr[i] << "\n";
    }
    std::cout << "\n";
}

int main()
{
    int some_numbers_1[5];
    some_numbers_1[0] = 1;
    some_numbers_1[1] = 2;
    some_numbers_1[2] = 3;
    some_numbers_1[3] = 4;
    some_numbers_1[4] = 5;

    int some_numbers_2[5] = { 1, 2, 3 };
    int some_numbers_3[5] = { 1, 2, 3, 4, 5 };

    int some_numbers_4[] = { 1, 2, 3, 4, 5 };
    int some_numbers_5[] = { 1, 2, 3 };

    Print(some_numbers_1, 5);
    Print(some_numbers_2, 5);
    Print(some_numbers_3, 5);
    Print(some_numbers_4, 5);
    Print(some_numbers_5, 3);

    /*
    int bad_array[5];
    Print(bad_array, 5);
    */
    return 0;
}
