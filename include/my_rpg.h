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
    game_object_t button_play;
    game_object_t button_quit;
    sfSound *song;
    sfSoundBuffer *soundBuffer;
}m_menu;

typedef struct manage_map
{
    game_object_t map;
    sfSound *song;
    sfSoundBuffer *soundBuffer;
}m_map;

game_object_t create_object (char *, int, int);
void move_object(game_object_t *);
void destroy_object(game_object_t *);
sfBool is_mouse_on_object(game_object_t *);
void init_hitbox(game_object_t *);
sfBool mouse_button_pressed(void);
sfBool button_pressed(game_object_t *);
sfRenderWindow *createmywindow(sfRenderWindow *, unsigned int, unsigned int);
m_menu init_texture_menu();
void display_menu(sfRenderWindow *, m_menu *);
void destroy_menu(m_menu *);
int events(sfRenderWindow *, m_menu *, int *);
void button_quit(m_menu *, sfEvent *);
void button_play(m_menu *, int *);
void m_button_menu(m_menu *, sfEvent *, int *);
m_map init_texture_map();
void display_map(sfRenderWindow * ,m_map *);
void destroy_map(m_map *);

#endif /* !MY_DEFENDER_H_ */
