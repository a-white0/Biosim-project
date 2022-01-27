#ifndef GAMESETTINGS_H_INCLUDED
#define GAMESETTINGS_H_INCLUDED

#include <stdlib.h>
#include <iostream>


//board and game settings
#define boardwidth      128
#define boardheight     128
#define timesteps       3000
#define population      1000
#define cimg_use_opencv 1
#define genenum         4

void birthlocations (int* birthspots[population][2])
{
    /** \brief
     *
     * \param
     * \param
     * \return
     *

    int locations[population][2];
    bool repeat = true;
    for(int i = 0; i < population; i++)
    {
        while (repeat = true){
            locations[i][0] = rand() % boardwidth;
            locations[i][1] = rand() % boardheight;

            for(int g = 0; g < i; g++)
            {
                if(locations[g][0] == locations[i][0] && locations[g][1] == locations[i][1])
                {
                    repeat = true;
                }
                else
                {
                    repeat = false;
                }
            }

        }
        repeat = true;
    }
    *birthspots[population][2] = locations[population][2];
*/
}

#endif // GAMESETTINGS_H_INCLUDED
