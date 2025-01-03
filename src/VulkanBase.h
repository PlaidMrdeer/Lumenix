//
// Created by plaidmrdeer on 2024/12/21.
//

#ifndef VULKANBASE_H
#define VULKANBASE_H

#include "vulkan/VulkanInstance.h"
#include "vulkan/VulkanPhysicalDevice.h"
#include "vulkan/VulkanDevice.h"

namespace lum
{
    class VulkanBase
    {
    public:
        VulkanBase();
        ~VulkanBase();

        void createInstance();
        void pickPhysicalDevice();
        void createDevice();
    private:
        VulkanInstance *instance = nullptr;
        VulkanPhysicalDevice *physicalDevice = nullptr;
        VulkanDevice *device = nullptr;

        void cleanup() const;
    };
}

#endif //VULKANBASE_H