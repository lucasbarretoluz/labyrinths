#include <direction.h>
#include <global.h>

Vector2 GetDirectionVector(int dir)
{
    switch (dir)
    {
    case NORTH:
        return (Vector2){0, -1};
    case SOUTH:
        return (Vector2){0, 1};
    case EAST:
        return (Vector2){1, 0};
    case WEST:
        return (Vector2){-1, 0};
    default:
        return (Vector2){0, 0};
    }
}
