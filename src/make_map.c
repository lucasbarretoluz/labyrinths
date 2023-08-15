#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "raylib.h"
#include "make_map.h"
#include "global.h"
#include "defines.h"

void LoadingTextures(char *path_map)
{

    FILE *textures_file;
    if (!(textures_file = fopen(path_map, "r")))
    {
        puts("ERRO AO ABRIR ARQUIVO DE TEXTURAS");
        return;
    }

    base_turf_texture = LoadTexture(BASE_TURF_TEXTURE_FILE);
    char buffer[100];
    int i = 0, len;

    texture_amount = 0;
    while (fgets(buffer, 100, textures_file) != NULL)
    {
        texture_amount++;
    }
    rewind(textures_file);
    if (!texture_amount)
    {
        return;
    }

    all_textures = (Texture *)malloc(sizeof(Texture) * texture_amount);

    while (fgets(buffer, 100, textures_file) != NULL)
    {
        len = strlen(buffer);
        if (buffer[len - 1] == '\n')
        { // Arruma o nome do arquivo caso fgets capturou \n
            buffer[len - 1] = '\0';
        }

        all_textures[i] = LoadTexture(buffer);
        if (++i >= texture_amount)
        {
            break;
        }
    }

    fclose(textures_file);

    // FILE *file;

    // if (!(file = fopen(path_map, "r")))
    // {
    //     printf("Error: File not found\n");
    //     return;
    // }

    // char buffer[100];
    // int i = 0, len;

    // texture_count = 0;

    // while (fgets(buffer, 100, file) != NULL)
    // {
    //     texture_count++;
    // }
    // rewind(file);
    // if (!texture_count)
    // {
    //     return;
    // }

    // Texture2D *all_textures = (Texture *)malloc(sizeof(Texture) * texture_count);

    // while (fgets(buffer, 100, file) != NULL)
    // {
    //     len = strlen(buffer);
    //     if (buffer[len - 1] == '\n')
    //     {
    //         buffer[len - 1] = '\0';
    //     }

    //     all_textures[i] = LoadTexture(buffer);
    //     if (++i >= texture_count)
    //     {
    //         break;
    //     }
    // }

    // fclose(file);
}