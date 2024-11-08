#include <fmt/chrono.h>
#include <fmt/format.h>

#include triangle.h
#include triangle.

//#define MAX_NAME_LENGTH 25

const unsigned int MAX_NAME_LENGTH = 25; //Alternative zu Zeile 4

struct Person {
    unsigned int alter;
    float gewicht;
    char name[MAX_NAME_LENGTH];
};

auto main(int argc, char** argv) -> int
{
    Person paul;
    paul.gewicht = 47.2;
    paul.alter = 14;

    fmt::print ("Hello, {}!\n", paul.alter);
    fmt::print("Paul ist {} Jahre alt!\n", paul.alter);

    Person* pPers;
    pPers = &paul;
    fmt::print("Die Person auf die der Zeiger pPers zeigt ist {} Jahre alt!\n",pPers->alter);
    
    Person paula = {18,57.0,"Paula"};
    fmt::print("Paula ist {} Jahre al!\n", paula.alter);
    pPers = &paula;
    fmt::print("Die Person auf die der Zeiger pPers zeigt ist {} Jahre alt!\n",pPers->alter);
    /* jetzt kommt 18 raus, da zeiger auf paula gewechselt wurde */
    //paul.name = "Paul"; geht nicht
    const char* pName = "Paul jr";
    strncpy(paul.name,"Paul jr der Zweite.\n",MAX_NAME_LENGTH);
    fmt::println("Der Name von Paul ist {}!\n",paul.name);

    paul = paula;
    fmt::println("Der Name ovn Paul ist: {}\n",paul.name);

    pPers = paul;
    fmt::print("Die Person auf die der Zeiger pPers zeigt ist {} Jahre alt!\n",pPers->alter);


    return 0;


}
