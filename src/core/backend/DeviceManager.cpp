#include "DeviceManager.hpp"
#include "CPUDevice.hpp"
#include <stdexcept>

void DeviceManager::initializeDevices() {
    devices.push_back(std::make_shared<CPUDevice>());
    activeDeviceId = 0;
}

std::shared_ptr<Device> DeviceManager::getDevice(size_t id) {
    if (id >= devices.size()) {
        throw std::out_of_range("Invalid device ID");
    }
    return devices[id];
}

void DeviceManager::selectDevice(size_t id) {
    if (id >= devices.size()) {
        throw std::out_of_range("Invalid device ID");
    }
    activeDeviceId = id;
}

void DeviceManager::releaseDevices() {
    devices.clear();
}