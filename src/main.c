/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "my_rpg.h"

void manage_scene(m_menu *menu, m_map *scene2, sfRenderWindow *window, int *switch_scene)
{
    if (switch_scene[0] == 0)
        display_menu(window, menu);
    if (switch_scene[0] == 1){
        destroy_menu(menu);
        sfSound_play(scene2->song);
        switch_scene[0] = 2;
    }
    if (switch_scene[0] == 2) {
        sfRenderWindow_display(window);
        display_map(window, scene2);
    }
}

int main(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *window = sfRenderWindow_create(mode, "RPG", sfClose,
        NULL);
    m_menu menu = init_texture_menu();
    m_map scene2 = init_texture_map();
    int switch_scene[1] = {0};

    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window)) {
        events(window, &menu, switch_scene);
        manage_scene(&menu, &scene2, window, switch_scene);
    }
    if (switch_scene[0] == 0)
        destroy_menu(&menu);
    else if (switch_scene[0] == 2)
        destroy_map(&scene2);
    sfRenderWindow_destroy(window);
    return (0);
}