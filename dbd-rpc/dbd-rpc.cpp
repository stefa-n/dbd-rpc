// dbd-rpc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Discord.h"


Discord * g_Discord;

int main()
{   

    g_Discord->Initialize();
    g_Discord->Update();

    std::cin.get();

}
