// // External Linkage
// // Module_a.cpp

// #include <iostream>
// extern int share_me; // external linkage declaration

// void display()
// {
//     std::cout << "Module A: share_me at " << &share_me   << '\n';
//     std::cout << "Module A: share_me is " <<  share_me++ << '\n';
// }


Animal* a = new Animal();
Box<Animal> animalBox = new Box<Animal>(a);

// Box -> content




std::cout << "Animal sound from box: " << animalBox.getContent().sound() << std::endl;