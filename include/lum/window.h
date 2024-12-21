//
// Created by plaidmrdeer on 2024/12/21.
//

#ifndef WINDOW_H
#define WINDOW_H

#include <GLFW/glfw3.h>

namespace lum
{
    class window
    {
    public:
        window(int width, int height, const char *title);
        ~window();

        void create();
        void loop() const;
    private:
        struct windowSettings
        {
            int width;
            int height;
            const char *title;
        };

        windowSettings settings{};
        GLFWwindow *windowHandle{};

        void cleanup() const;
    };
}

#endif //WINDOW_H