#ifndef CREATUREQUALITY_H_INCLUDED
#define CREATUREQUALITY_H_INCLUDED


#include <stdio.h>
#include <string>
#include <cmath>
#include "gamesettings.h"

using namespace std;

namespace creaturefeature
{
    float valX(float);
    float valY(float);
    float valAdj(int, int);

    class creature{
        public:
            uint32_t genes[genenum] = {}; //contains info regarding links between neurons, me remembering how to bit shift
            uint32_t* genesptr = &genes[genenum];
            string favoritefood = "Spaghetti"; //just me remembering how to use strings, headers, and classes
            string emotion = "Neutral"; //same as above

            //internal neurons and data
            uint8_t brain[2] = {0b00, 0b01}; //signifiers for brain (internal) neurons
            int position[2] = {32, 128}; //position array for individual creature

            //sensory neurons:
            float Posx; //weighted -1 to 1 x position (sensory)
            float Posy; //weighted -1 to 1 y position (sensory
            float Adj; //weighted 0 to 1 on how many neighbors are nearby
            //void pointers for the sensory neurons
            float* xpointer = &Posx;
            float* ypointer = &Posy;
            float* adjpointer = &Adj;

            //creature functions
            void think (float* xpoint, float* ypoint, float* adjpoint, int positionx, int positiony){
            *xpoint = valX(positionx);
            *ypoint = valY(positiony);
            *adjpoint = valAdj(positionx, positiony);
            return;
            }

            void encodegenes(uint32_t* genetic)
            {
                for(int i = 0; i < genenum; i++)
                {
                    genes[i] = rand() % 4294967296;
                }
            }

};

//internal neurons numerical identifiers
int neuron1 = 0;
int neuron2 = 1;

//sensory neurons numerical identifiers
int posx = 2;
int posy = 3;
int adj = 4;

//motor neurons numerical identifiers
int Mvr = 5;
int Mvl = 6;
int Mvu = 7;
int Mvd = 8;
int Mvrd = 9;




//functions for sensory neuron outputs
float valX (float X){
return tanh((((X / boardwidth) - 0.5) * 2));
}

float valY (float Y){
return tanh((((Y / boardheight) - 0.5) * 2));
}

float valAdj (int X, int Y){
float neighbors = 0;
//if creature.x+-1, creature.y+-1 are occupied, add 1
return tanh(neighbors);
}

}

#endif // CREATUREQUALITY_H_INCLUDED

