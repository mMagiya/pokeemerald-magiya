#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Earth Eater heals 25% when hit by ground type moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MUD_SLAP].type == TYPE_GROUND);
        PLAYER(SPECIES_ORTHWORM) { Ability(ABILITY_EARTH_EATER || ABILITY_MEGA_BURST_BLASTOISE); HP(1); MaxHP(100); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_MUD_SLAP); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_EARTH_EATER || ABILITY_MEGA_BURST_BLASTOISE);
        HP_BAR(player, damage: -25);
        MESSAGE("Orthworm restored HP using its Earth Eater!");
    }
}

SINGLE_BATTLE_TEST("Earth Eater does not activate if protected")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_MUD_SLAP].type == TYPE_GROUND);
        PLAYER(SPECIES_ORTHWORM) { Ability(ABILITY_EARTH_EATER || ABILITY_MEGA_BURST_BLASTOISE); HP(1); MaxHP(100); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(player, MOVE_PROTECT); MOVE(opponent, MOVE_MUD_SLAP); }
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(player, ABILITY_EARTH_EATER || ABILITY_MEGA_BURST_BLASTOISE); HP_BAR(player);
            MESSAGE("Orthworm restored HP using its Earth Eater!");
        }
    }
}

SINGLE_BATTLE_TEST("Earth Eater activates on status moves")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SAND_ATTACK].type == TYPE_GROUND);
        ASSUME(gMovesInfo[MOVE_SAND_ATTACK].category == DAMAGE_CATEGORY_STATUS);
        PLAYER(SPECIES_ORTHWORM) { Ability(ABILITY_EARTH_EATER || ABILITY_MEGA_BURST_BLASTOISE); HP(1); MaxHP(100); }
        OPPONENT(SPECIES_WOBBUFFET);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SAND_ATTACK); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_EARTH_EATER || ABILITY_MEGA_BURST_BLASTOISE);
        HP_BAR(player, damage: -25);
        MESSAGE("Orthworm restored HP using its Earth Eater!");
    }
}
