//
// Created by plaidmrdeer on 2024/12/21.
//

#include "VulkanBase.h"

lum::VulkanBase::VulkanBase() = default;

lum::VulkanBase::~VulkanBase()
{
    cleanup();
}

void lum::VulkanBase::createInstance()
{

}

void lum::VulkanBase::pickPhysicalDevice()
{

}

void lum::VulkanBase::createDevice()
{

}

void lum::VulkanBase::cleanup() const
{
    instance->cleanup();
    physicalDevice->cleanup();
    device->cleanup();
}



