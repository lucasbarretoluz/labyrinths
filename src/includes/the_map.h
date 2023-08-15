#ifndef _the_map_h_
#define _the_map_h_

#include "player_and_teacher.h"
#include "raylib.h"

typedef struct PlayerAndTeacher *PontPlayerAndTeacher; //circular reference

typedef struct TheMap {
    int isMap;
    int texture;
    Vector2 position;
} TheMap, *PontTheMap;

#endif