#include <iostream>
#include <string>
#include <unordered_map>
 
int main()
{
    // Create an unordered_map of three strings (that map to strings)
    std::unordered_map<std::string, std::string> cities =
    {
        {"Canada", "Ottawa"},
        {"USA", "Washington"},
        {"UK", "London"}
    };
 
    // Helper lambda function to print key-value pairs
    auto print_key_value = [](const auto& key, const auto& value)
    {
        std::cout << "Key:[" << key << "] Value:[" << value << "]\n";
    };

    for(auto each:cities){
        if(each.second=="Ottawa")
            std::cout << each.first << "\n";
    }

 
    // std::cout << "Iterate and print key-value pairs of unordered_map, being\n"
    //              "explicit with their types:\n";
    // for (auto n : cities)
    //     print_key_value(n.first, n.second);

    // std::cout << "the capital of Canada is " << cities["Canada"] << "\n";
 
    // std::cout << "\nIterate and print key-value pairs using C++17 structured binding:\n";
    // for (const auto& [key, value] : u)
    //     print_key_value(key, value);
 
    // // Add two new entries to the unordered_map
    // u["BLACK"] = "#000000";
    // u["WHITE"] = "#FFFFFF";
 
    // std::cout << "\nOutput values by key:\n"
    //              "The HEX of color RED is:[" << u["RED"] << "]\n"
    //              "The HEX of color BLACK is:[" << u["BLACK"] << "]\n\n";
 
    // std::cout << "Use operator[] with non-existent key to insert a new key-value pair:\n";
    // print_key_value("new_key", u["new_key"]);
 
    // std::cout << "\nIterate and print key-value pairs, using `auto`;\n"
    //              "new_key is now one of the keys in the map:\n";
    // for (const auto& n : u)
    //     print_key_value(n.first, n.second);
}