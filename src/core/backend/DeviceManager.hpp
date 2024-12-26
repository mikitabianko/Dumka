#ifndef DEVICEMANAGER_HPP
#define DEVICEMANAGER_HPP

#include <memory>
#include <vector>
#include "Device.hpp"

class DeviceManager {
public:
    void initializeDevices();
    std::shared_ptr<Device> getDevice(size_t id);
    void selectDevice(size_t id);
    void releaseDevices();

private:
    std::vector<std::shared_ptr<Device>> devices;
    int activeDeviceId;
};

#endif