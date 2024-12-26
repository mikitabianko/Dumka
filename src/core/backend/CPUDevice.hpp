#ifndef CPUDEVICE_HPP
#define CPUDEVICE_HPP

#include "Device.hpp"

class CPUDevice : public Device {
public:
    void allocateMemory(size_t size) override;
    void releaseMemory(void* ptr) override;
    void executeKernel(const std::string& kernel) override;
    std::string getDeviceInfo() const override;
};

#endif