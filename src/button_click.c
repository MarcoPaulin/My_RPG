/*
** EPITECH PROJECT, 2020
** CSFML
** File description:
** bottom is clicked
*/

#include <stdlib.h>
#include "my_rpg.h"
#include <stdio.h> 

sfBool is_mouse_on_object(game_object_t *object)
{
    sfVector2i mouse = sfMouse_getPosition(NULL);
    sfBool condition = sfFalse;

    condition = sfIntRect_contains(object->hitbox, mouse.x, mouse.y);
    return (condition);
}

sfBool mouse_button_pressed(void)
{
    sfMouseButton mouse = sfMouseLeft;
    sfBool condition = sfMouse_isButtonPressed(mouse);
    
    return(condition);
}

sfBool button_pressed(game_object_t *object)
{
    sfBool pos = sfFalse;
    sfBool pressed = sfFalse;
    sfBool condition = sfFalse;

    pos = is_mouse_on_object(object);
    pressed = mouse_button_pressed();
    if (pos == sfTrue && pressed == sfTrue)
        condition = sfTrue;
    return (condition);
}