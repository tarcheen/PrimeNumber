#include <iostream>
#include <vector>

/*
Developer: Hamed Mirlohi
Date: 09/11/2019
In this program we are printing set of given numbers which are primes
Please use below flag to compile in c++ 11
-std=c++11
*/

std::vector<int> prime_numbers(int* arr, int length)
{
    std::vector<int> v;
    for(int i = 0; i < length; i++)
    {
        // if numbers are 2 or 3, push it to the list since they are prime
        if(arr[i] == 2 || arr[i] == 3)
            v.push_back(arr[i]);
        // if any number is not dividable by 2 or 3, push it to the list as well
        else if(arr[i] % 2 != 0 && arr[i] % 3 != 0)
            v.push_back(arr[i]);
    }
    return v;
}

int main()
{
    // range of numbers from 1 to 20
    int numbers[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,25,33,37,88};

    auto results = prime_numbers(numbers, sizeof(numbers) / sizeof(int));
 
    // display results
    for(auto& v : results)
        std::cout << v << std::endl;
}