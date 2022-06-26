#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    getline(cin, line);
    int i = 0;
    int word = 0;
    while (line[i] != '\0')
    {
        if (line[i] == ' ')
        {
            word++;
        }
        i++;
    }
    cout << "The number of word is " << word + 1;
}