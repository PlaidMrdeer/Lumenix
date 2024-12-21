//
// Created by plaidmrdeer on 2024/12/21.
//

#include <lum/init.h>
#include <GLFW/glfw3.h>

#include "VulkanBase.h"

void lum::init()
{
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

    VulkanBase vulkanBase{};
    vulkanBase.createInstance();
    vulkanBase.pickPhysicalDevice();
    vulkanBase.createDevice();
}
