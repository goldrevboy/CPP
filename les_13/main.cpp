#include<iostream>

// struct Monster{
//     enum class Type{
//         Ogre,
//         Goblin,
//         Dragon
//     };
//     std::string name{};
//     Type type{};
//     int health{};
// };

// void printmonster(const Monster& m){
//     std::cout <<"This ";
//     switch (m.type)
//     {
//     case Monster::Type::Ogre:
//         std::cout << "ogre ";
//         break;
//     case Monster::Type::Goblin:
//         std::cout << "goblin ";
//         break;
//     case Monster::Type::Dragon:
//         std::cout << "dragon ";
//         break;
//     default:
//         break;
//     }
//     std::cout << "is named " << m.name << " and has " << m.health << " health points.\n";
// }

// int main(){
//     Monster m1{"tony", Monster::Type::Ogre, 100};
//     Monster m2{"goby", Monster::Type::Goblin, 50};
//     printmonster(m1);
//     printmonster(m2);
//     return 0;
// }

template< typename T>
struct Triad{
    T first{}; T second{}; T third{};
};

template< typename T> Triad(T,T,T) -> Triad<T>; // template argument deduction guide (CTAD)

template< typename T>
void print(const Triad<T>& t){
    std::cout << "First: " << t.first << ", Second: " << t.second << ", Third: " << t.third << '\n';
}

int main()
{
	Triad t1{ 1, 2, 3 }; // note: uses CTAD to deduce template arguments
	print(t1);

	Triad t2{ 1.2, 3.4, 5.6 }; // note: uses CTAD to deduce template arguments
	print(t2);

	return 0;
}
