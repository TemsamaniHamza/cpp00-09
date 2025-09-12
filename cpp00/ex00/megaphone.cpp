#include <iostream>
#include <cstdio>
#include <cctype>

int main(int argc, char **argv)
{
    if(argc >= 2)
    {
        int j = 1;
        while(j != argc)
        {
            for (int i = 0;argv[j][i] != '\0'; i++)
            {
                if(isalpha(argv[j][i]) != 0)
                    argv[j][i] = toupper(argv[j][i]);
            }
            std::cout << argv[j];
            j++;
        }
        std::cout << std::endl;
        return (0);
    }
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}
