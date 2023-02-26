#include"Engine.h"
#include<iostream>
using namespace std;

Engine::Engine()
{
    heat = 0;
    sound = 0;
}

void Engine::Get()
{
    heat = 110.2;
    sound = 20.05;
    
}

void Engine::display()
{
    cout<<"Heat :"<<heat<<endl;
    cout<<"Sound :"<<sound<<endl;
}