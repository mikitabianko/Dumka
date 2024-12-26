#include "core/backend/DeviceManager.hpp"
#include <iostream>

int main() {
    DeviceManager deviceManager;
    deviceManager.initializeDevices();

    auto cpuDevice = deviceManager.getDevice(0);
    std::cout << cpuDevice->getDeviceInfo() << " selected." << std::endl;
    cpuDevice->allocateMemory(1024);
    cpuDevice->executeKernel("CPU Kernel Code");

    deviceManager.releaseDevices();

    return 0;
}
