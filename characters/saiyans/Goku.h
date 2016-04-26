//
// Created by Charles-Eugene Loubao on 4/7/16.
//

#ifndef GOKU_H
#define GOKU_H

#include "../Saiyan.h"
#include "../../components/moves/SuperKamehameha.h"
#include "../../components/moves/DeathBeam.h"

class Goku : public Saiyan {
public:
    Goku() {

        CharacterStats characterStats;
        characterStats.attack = 0.8;
        characterStats.defense = 0.06;
        characterStats.bonusKI = 25;

        setName("SSJ Goku");
        initStats(characterStats);
    }
};

#endif //GOKU_H
