/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** opt_video_button
*/

#include "my_rpg.h"
#include "options_video.h"
#include "options_sound.h"

void opt_video_button_quit(m_opt_video *option)
{
    sfBool click = button_pressed(&option->button_quit);
    if (click == sfTrue)
        option->quit_pressed = 1;
}

void opt_video_button_v(m_opt_video *opt, m_menu *menu, sfRenderWindow *win)
{
    menu->check_v = checkbox_pressed(&opt->button_checkbox, menu->check_v);
    if (menu->check_v == 0)
        sfRenderWindow_setVerticalSyncEnabled(win, sfTrue);
    else if (menu->check_v == 1)
        sfRenderWindow_setVerticalSyncEnabled(win, sfTrue);
}

void m_opt_b_video(m_opt_video *opt, m_menu *menu, sfRenderWindow *window)
{
    opt_video_button_quit(opt);
    opt_video_button_v(opt, menu, window);
}