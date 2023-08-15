#include "raylib.h"
#include "global.h"
#include "game.h"

void Gaming()
{
}

void InputMovementPlayer()
{
    if (IsKeyDown(KEY_RIGHT))
    {
        player_mob->dir = EAST;
    }
    else if (IsKeyDown(KEY_LEFT))
    {
        player_mob->dir = WEST;
    }
    else if (IsKeyDown(KEY_UP))
    {
        player_mob->dir = NORTH;
    }
    else if (IsKeyDown(KEY_DOWN))
    {
        player_mob->dir = SOUTH;
    }
    else
    {
        return;
    }
}