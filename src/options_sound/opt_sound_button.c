/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** opt_sound_button
*/

#include "my_rpg.h"
#include "options_sound.h"

void opt_sound_button_quit(m_opt_video *option)
{
    sfBool click = button_pressed(&option->button_quit);
    if (click == sfTrue)
        option->quit_pressed = 1;
}

void opt_sound_button_sound(m_opt_video *option, m_menu *menu)
{
    menu->check_s = checkbox_pressed(&option->button_checkbox, menu->check_s);
}

void m_opt_b_sound(m_opt_video *opt, m_menu *menu)
{
    opt_sound_button_quit(opt);
    opt_sound_button_sound(opt, menu);
}

int checkbox_pressed(button_t *button, int sprite)
{
    sfBool pos = sfFalse;
    sfBool pressed = sfFalse;

    pos = is_mouse_on_button(button);
    pressed = mouse_button_pressed();
    if (sprite == 0)
        button->bounds.left = 0;
    else if (sprite == 1)
        button->bounds.left = button->size_sprite.x;
    if (pos == sfTrue && pressed == sfTrue) {
        if (sprite == 0) {
            sprite = 1;
        } else if (sprite == 1) {
            sprite = 0;
        }
    }
    return (sprite);
}