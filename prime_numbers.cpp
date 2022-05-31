#include <iostream>
#include <fstream>

using namespace std;

int start = 2; //Insert first number (has to be equal or higher than 2)
int stop = 100; //Insert last number

bool is_prime(int a)
{
    for (int i = 2; i <= a/2; i++)
    {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
	int number = start;
	fstream file("file.txt", ios::in | ios::out | ios::trunc);

	while (number < stop)
	{
		if (is_prime(number))
		{
			file << number << '\n';
		}
		number++;
	}
	file.close();
}