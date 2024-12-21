//
// Created by plaidmrdeer on 2024/12/20.
//
#include <lum/init.h>

#include <lum/window.h>

int main()
{

    lum::init();

    lum::window window{1920, 1080, "Triangle"};
    window.create();
    window.loop();
}
