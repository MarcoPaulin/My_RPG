/*
** EPITECH PROJECT, 2020
** events
** File description:
** manage events
*/

#include "my_rpg.h"

int events(sfRenderWindow *window, m_menu *menu,  int *switch_scene)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (switch_scene[0] == 0)
            m_button_menu(menu, &event, switch_scene);
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
    return (0);
}
