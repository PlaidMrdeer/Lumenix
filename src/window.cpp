//
// Created by plaidmrdeer on 2024/12/21.
//

#include <lum/window.h>

lum::window::window(const int width, const int height, const char *title)
{
    settings.width = width;
    settings.height = height;
    settings.title = title;
}

lum::window::~window()
{
    cleanup();
}

void lum::window::create()
{
    windowHandle = glfwCreateWindow(settings.width, settings.height, settings.title, nullptr, nullptr);
}

void lum::window::loop() const
{
    while (!glfwWindowShouldClose(windowHandle))
    {
        glfwPollEvents();
    }
}

void lum::window::cleanup() const
{
    glfwDestroyWindow(windowHandle);
    glfwTerminate();
}
