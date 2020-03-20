/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** add_map
*/

#include "my_rpg.h"

m_map init_texture_map()
{
    m_map scene2;
    scene2.map = create_object("sprite/Jeux/map.png"
    , 0, 0);
    scene2.song = sfSound_create();
    scene2.soundBuffer = sfSoundBuffer_createFromFile("audio/musique_game.ogg");
    sfSound_setBuffer(scene2.song, scene2.soundBuffer);
    return(scene2);
}

void display_map(sfRenderWindow *window ,m_map *scene2)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, scene2->map.sprite, NULL);
    sfRenderWindow_display(window);
}

void destroy_map(m_map *scene2)
{
    destroy_object(&scene2->map);
    sfSound_destroy(scene2->song);
    sfSoundBuffer_destroy(scene2->soundBuffer);   
    
}