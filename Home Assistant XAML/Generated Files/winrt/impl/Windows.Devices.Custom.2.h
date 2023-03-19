// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Windows_Devices_Custom_2_H
#define WINRT_Windows_Devices_Custom_2_H
#include "winrt/impl/Windows.Devices.Custom.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Custom
{
    struct __declspec(empty_bases) CustomDevice : winrt::Windows::Devices::Custom::ICustomDevice
    {
        CustomDevice(std::nullptr_t) noexcept {}
        CustomDevice(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Custom::ICustomDevice(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector(winrt::guid const& classGuid);
        static auto FromIdAsync(param::hstring const& deviceId, winrt::Windows::Devices::Custom::DeviceAccessMode const& desiredAccess, winrt::Windows::Devices::Custom::DeviceSharingMode const& sharingMode);
    };
    struct __declspec(empty_bases) IOControlCode : winrt::Windows::Devices::Custom::IIOControlCode
    {
        IOControlCode(std::nullptr_t) noexcept {}
        IOControlCode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Custom::IIOControlCode(ptr, take_ownership_from_abi) {}
        IOControlCode(uint16_t deviceType, uint16_t function, winrt::Windows::Devices::Custom::IOControlAccessMode const& accessMode, winrt::Windows::Devices::Custom::IOControlBufferingMethod const& bufferingMethod);
    };
    struct KnownDeviceTypes
    {
        KnownDeviceTypes() = delete;
        [[nodiscard]] static auto Unknown();
    };
}
#endif
