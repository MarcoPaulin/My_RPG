/*
** EPITECH PROJECT, 2020
** menu
** File description:
** menu 
*/

#include "my_rpg.h"

m_menu init_texture_menu()
{
    m_menu menu;
    menu.background = create_object("sprite/Menu/background.jpg"
    , 0, 0);
    menu.button_play = create_object("sprite/Menu/button_play.png",
    250, 150);
    menu.button_quit = create_object("sprite/Menu/button_quit.png",
    1200, 150);
    init_hitbox(&menu.button_play);
    init_hitbox(&menu.button_quit);
    menu.song = sfSound_create();
    menu.soundBuffer = sfSoundBuffer_createFromFile("audio/musique_menu.ogg");
    sfSound_setBuffer(menu.song, menu.soundBuffer);
    sfSound_play(menu.song);
    return(menu);
}

void display_menu(sfRenderWindow *window ,m_menu *menu)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, menu->background.sprite, NULL);
    sfRenderWindow_drawSprite(window, menu->button_play.sprite, NULL);
    sfRenderWindow_drawSprite(window, menu->button_quit.sprite, NULL);
    sfRenderWindow_display(window);
}

void destroy_menu(m_menu *menu)
{
    destroy_object(&menu->background);
    destroy_object(&menu->button_play);
    destroy_object(&menu->button_quit);
    sfSound_destroy(menu->song);
    sfSoundBuffer_destroy(menu->soundBuffer);   
}