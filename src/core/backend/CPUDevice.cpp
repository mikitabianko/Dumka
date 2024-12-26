#include "CPUDevice.hpp"
#include <iostream>

void CPUDevice::allocateMemory(size_t size) {
    std::cout << "Allocating " << size << " bytes on CPU" << std::endl;
}

void CPUDevice::releaseMemory(void* ptr) {
    std::cout << "Releasing memory on CPU" << (ptr) << std::endl;
}

void CPUDevice::executeKernel(const std::string& kernel) {
    std::cout << "Executing kernel on CPU: " << kernel << std::endl;
}

std::string CPUDevice::getDeviceInfo() const {
    return "CPU Device";
}