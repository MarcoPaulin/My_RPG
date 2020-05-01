/*
** EPITECH PROJECT, 2020
** my_defender
** File description:
** header my_defender
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <stdlib.h>

#ifndef MY_DEFENDER_H_
#define MY_DEFENDER_H_

typedef struct button_s
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfVector2i size_sprite;
    sfIntRect *hitbox;
    sfIntRect bounds;
    int click;
    int passed;
} button_t;

typedef struct game_object
{
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f pos;
    sfVector2f move;
    sfIntRect *hitbox;
} game_object_t;

typedef struct manage_menu
{
    game_object_t background;
    button_t button_play;
    button_t button_quit;
    button_t button_option;
    button_t button_how_to_play;
    sfSound *song;
    sfSoundBuffer *soundBuffer;
}m_menu;

typedef struct manage_map
{
    game_object_t map;
    sfSound *song;
    sfSoundBuffer *soundBuffer;
}m_map;

// create_object.c
game_object_t create_object (char *, int, int);
void move_object(game_object_t *);
void destroy_object(game_object_t *);
void init_hitbox(game_object_t *);

// events.c
sfBool is_mouse_on_button(button_t *button);
sfBool mouse_button_pressed(void);
sfBool button_pressed(button_t *button);

// menu.c
m_menu init_texture_menu(void);
void display_menu(sfRenderWindow *, m_menu *);
void destroy_menu(m_menu *);

// events.c
int menu_events(sfRenderWindow *window, m_menu *menu);

// create_button.c
button_t create_button (char *path, int x, int y, sfVector2i);
void init_bounds(sfIntRect *bounds, sfVector2i s_sprite);
void init_hitbox_button(button_t *button);
void destroy_button(button_t *);

//button_menu
void button_quit(m_menu *, sfEvent *);
void button_play(m_menu *);
void button_how_to_play(m_menu *);
void button_option(m_menu *);
void m_button_menu(m_menu *, sfEvent *);


#endif /* !MY_DEFENDER_H_ */
