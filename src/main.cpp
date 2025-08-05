#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int main(void)
{
    std::string line;
    std::ofstream file;

    std::cout << "\t\t   Small CLI redactor for C++\n\t\t      for quit enter ':q'.\n\n";
    std::cout << "Enter file name to save all content (without extension): ";
    
    std::string file_name;
    (std::cin >> file_name).get();

    std::cout << "Enter file name extension: ";
    std::string file_name_extension;
    (std::cin >> file_name_extension).get();

    file.open(file_name + file_name_extension);
    system("cls");

    
    std::cout << "Edit: " << file_name + file_name_extension << "\n\n";
    std::cout.width(3);
    int i = 1;
    std::cout << i << "  ";
    
    while (std::getline(std::cin, line))
    {
        if (line == ":q") break;
        std::cout.width(3);
        std::cout << ++i << "  ";
        file << line << std::endl;
    }
    
    file.close();
    std::cout << "\nAll code saved in file '" << file_name + file_name_extension << "'.\n";
    std::cout << "Compile this code? (Y/n): ";

    char ch;
    std::cin.clear();
    std::cin >> ch;

    if (ch == 'Y' || ch == 'y')
    {
        if (file_name_extension == ".cpp")
        {
            std::string compile_command = "g++ " + file_name + file_name_extension + " -o " + file_name + " & " + file_name;
            system("cls");
            std::cout << "Compiling: " << file_name + file_name_extension << "\n\n";
            system(compile_command.c_str());
        }

        else std::cout << "Undefined extension name.\n";
    }

    else if (ch == 'N' || ch == 'n')
        std::cout << "Bye!\n";
    else
        std::cout << "Undefined character.\n";
        
    return 0;
}