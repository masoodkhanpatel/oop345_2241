// #include <fstream>
// #include <iostream>


// int main(){

//     std::ofstream fout("output.txt");  // opens output.txt for output
//     std::ifstream fin ("input.txt");   // opens input.txt for input
//     // fin -> NULL (false)

//     std::ofstream fo;                  // declares an output file named fo
//     fo.open("moreOutput.txt");         // connect fo to moreOutput.txt

//     std::ifstream fi;                  // declares an input file named fi
//     fi.open("moreInput.txt");          // connects fi to moreInput.txt

//     if(fin){
//         std::cout << "input.txt file found\n";
//     }
//     else{ // if fin is NULL
//         std::cout << "input.txt file not found\n";
//     }

//     if(fi){
//         std::cout << "moreInput.txt file found\n";
//     }
//     else{
//         std::cout << "moreInput.txt file not found\n";
//     }
// }