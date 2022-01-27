#include <stdlib.h>
#include <iostream>
#include "creaturequality.h"
#include "gamesettings.h"
#include "string"



using namespace std;
using namespace creaturefeature;

int main()
{
//setup birthing locaitons
    int locations[population][2];

    cout<<population<<endl;

bool repeat = true;
for(int i = 0; i < population; i++)//offload this fucking shit as soon as you possibly can bc it looks like ass
{
    while (repeat == true)
        {
        locations[i][0] = rand() % boardwidth;
        locations[i][1] = rand() % boardheight;

        for(int g = -1; g < i-1; g++)
        {
            if(locations[g + 1][0] == locations[i][0] && locations[g + 1][1] == locations[i][1])
            {
                repeat = true;
            }
            else
            {
                repeat = false;
            }
        }
        if (i == 0)
        {
            repeat = false;
        }
        }
    repeat = true;
}

//population has been distributed.
//let's set up the creatures
creature Creatures[population];
for(int i = 0; i < population; i++)
{
    Creatures[i].position[0] = locations[i][0];
    Creatures[i].position[1] = locations[i][1];
    Creatures[i].encodegenes(Creatures[i].genesptr);
    cout << "Creature " << i << " location: " << Creatures[i].position[0] << ", " << Creatures[i].position[1] << endl;
    cout << "His genes are: " << Creatures[i].genes[0] << endl;
}

//now lets set up each timestep
for(int i = 0; i < timesteps; i++)
{
    for(int t = 0; t < population; t++) //make them all think
    {
        Creatures[t].think(Creatures[t].xpointer, Creatures[t].ypointer, Creatures[t].adjpointer, Creatures[t].position[0], Creatures[t].position[1]);
    }
    for(int t = 0; t < population; t++) //make them all act if it's allowed for
    {
        //if(Creatures[t].actionallowed() == true)
    }

}

}
