// File Objects - Direct Access
// direct.cpp

#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{

    std::cout << "Application: " << argv[0] << std::endl;
    for (int i = 1; i < argc; i++)
        std::cout << "- " << argv[i] << std::endl;

    std::ofstream fo(argv[1]);      // open for output

    fo << "Line 1" << std::endl;    // line 1
    fo << "Line 2" << std::endl;    // line 2
    fo << "Line 3" << std::endl;    // line 3
    fo << "Line 4" << std::endl;    // line 4
    fo << "Line 5" << std::endl;    // line 4
    

    fo.seekp(0, std::ios::beg);     // go to the start of the file
    fo << "*****";                   // overwrite five characters

    fo.seekp(4, std::ios::cur);     // go 4 char's beyond current
    fo << 'N';                      // overwrite one character

    std::streampos p = fo.tellp();  // remember current position
    // auto p = fo.tellp();

    fo.seekp(0, std::ios::end);     // go to end of the file
    fo << "The last line\n";        // add a line

    fo.seekp(p);                    // jump back to pos
    fo << 'X';                      // overwrite one character
    fo << 'Y';  
    fo.close();                     // close file

    // /**************************************************/

    std::ifstream fi(argv[1]);      // open for reading
    char c;

    while (fi.get(c))               // read 1 character at a time
        std::cout << c;             // display the character
    // ios_base::eofbit = true, when it reaches the end of file

    fi.clear();                     // clear failed (eof) state
    // ios_base::eofbit = false
    fi.seekg(-5, std::ios::end);    // move 5 bytes from end

    while (fi.get(c))               // read 1 character at a time
        std::cout << c;             // display the character read
}