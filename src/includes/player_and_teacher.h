#ifndef _player_and_teacher_h
#define _player_and_teacher_h

#include <the_map.h>
#include <raylib.h>

typedef struct TheMap *PontTheMap; //circular reference

typedef struct PlayerAndTeacher
{
    int id;
    int health;
    int dir;
    int image;
    Vector2 position;

} PlayerAndTeacher, *PontPlayerAndTeacher;

#endif