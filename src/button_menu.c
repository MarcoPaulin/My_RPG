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

void button_play(m_menu *menu, int *switch_scene)
{
    sfBool click = button_pressed(&menu->button_play);
    if (click == sfTrue)
        switch_scene[0] = 1;
}

void m_button_menu(m_menu *menu, sfEvent *event, int *switch_scene)
{
    button_quit(menu, event);
    button_play(menu, switch_scene);
}
