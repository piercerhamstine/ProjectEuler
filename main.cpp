#include <iostream>
#include <string>
#include <sys/stat.h>

#include <filesystem>

void CreateDir(std::string path)
{
    std::filesystem::create_directories(path);
}

void RemoveDir(std::string path)
{
    std::filesystem::remove(path);
}

template <typename T>
void Print(T toPrint, int endLines=1)
{
    std::cout << toPrint;

    for(int i=0;i<endLines;++i)
        std::cout << std::endl;   
}

int main()
{
    Print("1.) Create Directory\n2.) Remove Directory", 2);
    int input = 0;

    std::cin >> input;

    switch(input)
    {
        case 1:
        {
            Print("Directory to create: ");
            std::string dirName;
            std::cin >> dirName;

            CreateDir(dirName);
            break;
        }
        case 2:
        {
            Print("Directory to remove: ");

            std::string dirName;
            std::cin >> dirName;

            RemoveDir(dirName);
            break;
        }
        default:
        {
            Print("Invalid input.");
            break;
        }
    }

    return 0;
}