#include <iostream>
#include <string>
#include <fstream> 

std::string replacedstr(const std::string &line, const std::string &s1, const std::string &s2)
{
    std::string outpt;
    int pos = 0;
    int found;

    while((found = line.find(s1, pos)) != std::string::npos)
    {
        outpt.append(line.substr(pos, found-pos));
        outpt.append(s2);
        pos = found+s1.length();
    }
    outpt.append(line.substr(pos));
    return outpt;
}

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string file = argv[1];
        std::string s1 = argv[2];
        std::string s2 = argv[3];

        if(s1.empty())
        {
            std::cout << "s1 shouldn't be empty" << std::endl;
        }
        std::ifstream infile(file.c_str());
        if(!infile)
        {
            std::cout << "the file does not exist or it is not readeable" << std::endl;
            return (1);
        }
        std::ofstream outputfile((file + ".replace").c_str());
        if(!outputfile)
        {
            std::cout << "could not create output file" << std::endl;
            return (1);
        }
        std::string line;
        while(std::getline(infile, line))
        {
            outputfile << replacedstr(line, s1, s2) << std::endl;
        }
        return(0);
    }
    std::cout << "You should enter 3 arguments" << std::endl;
}


