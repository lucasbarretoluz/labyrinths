
#include "raylib.h"
#include "player_and_teacher.h"
#include "make_map.h"
#include "global.h"
#include "game.h"
#include "defines.h"

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 450

Texture2D *all_textures;

PlayerAndTeacher player_mob;
PlayerAndTeacher teacher_mob;

Texture2D base_turf_texture;

int texture_amount = 0;

int main(void)
{

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Labyrinth");
    LoadingTextures(TEXTURES_FILE);
   
    SetTargetFPS(60);
    SetExitKey(0);

    while (!WindowShouldClose()) // Detect window close button or ESC key
    {

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}