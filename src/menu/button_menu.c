/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** manage_menu
*/

#include "my_rpg.h"

void button_quit(m_menu *menu, sfEvent *event)
{
    sfBool click = button_pressed(&menu->button_quit);
    if (click == sfTrue) {
        event->type = sfEvtClosed;
    }
}

void button_play(m_menu *menu)
{
    sfBool click = button_pressed(&menu->button_play);
    // if (click == sfTrue)
    //     return (0);
}

void button_option(m_menu *menu)
{
    sfBool click = button_pressed(&menu->button_option);
    // if (click == sfTrue)
    //     return (0);
}

void button_how_to_play(m_menu *menu)
{
    sfBool click = button_pressed(&menu->button_how_to_play);
    // if (click == sfTrue)
    //     return (0);
}

void m_button_menu(m_menu *menu, sfEvent *event)
{
    button_quit(menu, event);
    button_play(menu);
    button_how_to_play(menu);
    button_option(menu);
}
