#ifndef DEVICE_HPP
#define DEVICE_HPP

#include <string>

class Device {
public:
    virtual ~Device() = default;
    virtual void allocateMemory(size_t size) = 0;
    virtual void releaseMemory(void* ptr) = 0;
    virtual void executeKernel(const std::string& kernel) = 0;
    virtual std::string getDeviceInfo() const = 0;
};

#endif 