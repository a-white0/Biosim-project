/** A bit of pseudo code for reference

Source neurons: sensory, internal
Sink Neurons: internal, motor

Source neurons: what do they send to sink neurons? - weighted value, -1 to 1

Genetic Code Information:
0bXXXX XXXX XXXX XXXX XXXX XXXX XXXX XXXX
0b {1 bit source} {7 bit identifier for which one} {1 bit sink type} {7 bit identifier for which one} {16 bit signed connection weight}
 -0:sensory, 1:internal - 0bXXXXXXX % #sensory or internal - 0:internal, 1: motor - 0bXXXXXXX % #internal or motor -

Start Simulation:
    Randomize the birth locations of each member (unique from each other)
    First iteration:
        Randomize the genetic connections of each member (among all possible source/sink possibilities, include modifier of connection weight
    Following iterations:
        Pass on genetic code from survivors to "children". I suppose we can start with asexual reproduction, & then randomly select
        duplicates from the survivors.
        Genetic mutations occur 1 in 500 maybe


Progress between timesteps:
      everyone think of our actions, decide yes or no on available outputs
      if space *will be clear* next turn, take the action
      if space *will not be clear* next turn, do nothing




 */
