// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220418.1

#pragma once
#ifndef WINRT_Windows_Devices_Bluetooth_Rfcomm_0_H
#define WINRT_Windows_Devices_Bluetooth_Rfcomm_0_H
WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth
{
    enum class BluetoothCacheMode : int32_t;
    struct BluetoothDevice;
    enum class BluetoothError : int32_t;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Enumeration
{
    struct DeviceAccessInformation;
}
WINRT_EXPORT namespace winrt::Windows::Networking
{
    struct HostName;
}
WINRT_EXPORT namespace winrt::Windows::Networking::Sockets
{
    enum class SocketProtectionLevel : int32_t;
    struct StreamSocketListener;
}
WINRT_EXPORT namespace winrt::Windows::Devices::Bluetooth::Rfcomm
{
    struct IRfcommDeviceService;
    struct IRfcommDeviceService2;
    struct IRfcommDeviceService3;
    struct IRfcommDeviceServiceStatics;
    struct IRfcommDeviceServiceStatics2;
    struct IRfcommDeviceServicesResult;
    struct IRfcommServiceId;
    struct IRfcommServiceIdStatics;
    struct IRfcommServiceProvider;
    struct IRfcommServiceProvider2;
    struct IRfcommServiceProviderStatics;
    struct RfcommDeviceService;
    struct RfcommDeviceServicesResult;
    struct RfcommServiceId;
    struct RfcommServiceProvider;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>{ using type = class_category; };
    template <> struct category<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService> = L"Windows.Devices.Bluetooth.Rfcomm.RfcommDeviceService";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult> = L"Windows.Devices.Bluetooth.Rfcomm.RfcommDeviceServicesResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId> = L"Windows.Devices.Bluetooth.Rfcomm.RfcommServiceId";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider> = L"Windows.Devices.Bluetooth.Rfcomm.RfcommServiceProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService> = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceService";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2> = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceService2";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3> = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceService3";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics> = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceServiceStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2> = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceServiceStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult> = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommDeviceServicesResult";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId> = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceId";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics> = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceIdStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider> = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceProvider";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2> = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceProvider2";
    template <> inline constexpr auto& name_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics> = L"Windows.Devices.Bluetooth.Rfcomm.IRfcommServiceProviderStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService>{ 0xAE81FF1F,0xC5A1,0x4C40,{ 0x8C,0x28,0xF3,0xEF,0xD6,0x90,0x62,0xF3 } }; // AE81FF1F-C5A1-4C40-8C28-F3EFD69062F3
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2>{ 0x536CED14,0xEBCD,0x49FE,{ 0xBF,0x9F,0x40,0xEF,0xC6,0x89,0xB2,0x0D } }; // 536CED14-EBCD-49FE-BF9F-40EFC689B20D
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3>{ 0x1C22ACE6,0xDD44,0x4D23,{ 0x86,0x6D,0x8F,0x34,0x86,0xEE,0x64,0x90 } }; // 1C22ACE6-DD44-4D23-866D-8F3486EE6490
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>{ 0xA4A149EF,0x626D,0x41AC,{ 0xB2,0x53,0x87,0xAC,0x5C,0x27,0xE2,0x8A } }; // A4A149EF-626D-41AC-B253-87AC5C27E28A
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2>{ 0xAA8CB1C9,0xE78D,0x4BE4,{ 0x80,0x76,0x0A,0x3D,0x87,0xA0,0xA0,0x5F } }; // AA8CB1C9-E78D-4BE4-8076-0A3D87A0A05F
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult>{ 0x3B48388C,0x7CCF,0x488E,{ 0x96,0x25,0xD2,0x59,0xA5,0x73,0x2D,0x55 } }; // 3B48388C-7CCF-488E-9625-D259A5732D55
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId>{ 0x22629204,0x7E02,0x4017,{ 0x81,0x36,0xDA,0x1B,0x6A,0x1B,0x9B,0xBF } }; // 22629204-7E02-4017-8136-DA1B6A1B9BBF
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>{ 0x2A179EBA,0xA975,0x46E3,{ 0xB5,0x6B,0x08,0xFF,0xD7,0x83,0xA5,0xFE } }; // 2A179EBA-A975-46E3-B56B-08FFD783A5FE
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>{ 0xEADBFDC4,0xB1F6,0x44FF,{ 0x9F,0x7C,0xE7,0xA8,0x2A,0xB8,0x68,0x21 } }; // EADBFDC4-B1F6-44FF-9F7C-E7A82AB86821
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2>{ 0x736BDFC6,0x3C81,0x4D1E,{ 0xBA,0xF2,0xDD,0xBB,0x81,0x28,0x45,0x12 } }; // 736BDFC6-3C81-4D1E-BAF2-DDBB81284512
    template <> inline constexpr guid guid_v<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics>{ 0x98888303,0x69CA,0x413A,{ 0x84,0xF7,0x43,0x44,0xC7,0x29,0x29,0x97 } }; // 98888303-69CA-413A-84F7-4344C7292997
    template <> struct default_interface<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceService>{ using type = winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService; };
    template <> struct default_interface<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommDeviceServicesResult>{ using type = winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult; };
    template <> struct default_interface<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId>{ using type = winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId; };
    template <> struct default_interface<winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceProvider>{ using type = winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider; };
    template <> struct abi<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ConnectionHostName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ConnectionServiceName(void**) noexcept = 0;
            virtual int32_t __stdcall get_ServiceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_ProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxProtectionLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetSdpRawAttributesAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetSdpRawAttributesWithCacheModeAsync(int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Device(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DeviceAccessInformation(void**) noexcept = 0;
            virtual int32_t __stdcall RequestAccessAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIdAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelector(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDeviceSelectorForBluetoothDevice(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorForBluetoothDeviceWithCacheMode(void*, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorForBluetoothDeviceAndServiceId(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeviceSelectorForBluetoothDeviceAndServiceIdWithCacheMode(void*, void*, int32_t, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Error(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Services(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uuid(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall AsShortId(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall AsString(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromUuid(winrt::guid, void**) noexcept = 0;
            virtual int32_t __stdcall FromShortId(uint32_t, void**) noexcept = 0;
            virtual int32_t __stdcall get_SerialPort(void**) noexcept = 0;
            virtual int32_t __stdcall get_ObexObjectPush(void**) noexcept = 0;
            virtual int32_t __stdcall get_ObexFileTransfer(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhoneBookAccessPce(void**) noexcept = 0;
            virtual int32_t __stdcall get_PhoneBookAccessPse(void**) noexcept = 0;
            virtual int32_t __stdcall get_GenericFileTransfer(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ServiceId(void**) noexcept = 0;
            virtual int32_t __stdcall get_SdpRawAttributes(void**) noexcept = 0;
            virtual int32_t __stdcall StartAdvertising(void*) noexcept = 0;
            virtual int32_t __stdcall StopAdvertising() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall StartAdvertisingWithRadioDiscoverability(void*, bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAsync(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService
    {
        [[nodiscard]] auto ConnectionHostName() const;
        [[nodiscard]] auto ConnectionServiceName() const;
        [[nodiscard]] auto ServiceId() const;
        [[nodiscard]] auto ProtectionLevel() const;
        [[nodiscard]] auto MaxProtectionLevel() const;
        auto GetSdpRawAttributesAsync() const;
        auto GetSdpRawAttributesAsync(winrt::Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
    };
    template <> struct consume<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService2
    {
        [[nodiscard]] auto Device() const;
    };
    template <> struct consume<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService3
    {
        [[nodiscard]] auto DeviceAccessInformation() const;
        auto RequestAccessAsync() const;
    };
    template <> struct consume<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceService3>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceService3<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics
    {
        auto FromIdAsync(param::hstring const& deviceId) const;
        auto GetDeviceSelector(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId) const;
    };
    template <> struct consume<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics2
    {
        auto GetDeviceSelectorForBluetoothDevice(winrt::Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice) const;
        auto GetDeviceSelectorForBluetoothDevice(winrt::Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, winrt::Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
        auto GetDeviceSelectorForBluetoothDeviceAndServiceId(winrt::Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId) const;
        auto GetDeviceSelectorForBluetoothDeviceAndServiceId(winrt::Windows::Devices::Bluetooth::BluetoothDevice const& bluetoothDevice, winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId, winrt::Windows::Devices::Bluetooth::BluetoothCacheMode const& cacheMode) const;
    };
    template <> struct consume<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServiceStatics2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServiceStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServicesResult
    {
        [[nodiscard]] auto Error() const;
        [[nodiscard]] auto Services() const;
    };
    template <> struct consume<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommDeviceServicesResult>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommDeviceServicesResult<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceId
    {
        [[nodiscard]] auto Uuid() const;
        auto AsShortId() const;
        auto AsString() const;
    };
    template <> struct consume<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceId>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceId<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceIdStatics
    {
        auto FromUuid(winrt::guid const& uuid) const;
        auto FromShortId(uint32_t shortId) const;
        [[nodiscard]] auto SerialPort() const;
        [[nodiscard]] auto ObexObjectPush() const;
        [[nodiscard]] auto ObexFileTransfer() const;
        [[nodiscard]] auto PhoneBookAccessPce() const;
        [[nodiscard]] auto PhoneBookAccessPse() const;
        [[nodiscard]] auto GenericFileTransfer() const;
    };
    template <> struct consume<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceIdStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceIdStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider
    {
        [[nodiscard]] auto ServiceId() const;
        [[nodiscard]] auto SdpRawAttributes() const;
        auto StartAdvertising(winrt::Windows::Networking::Sockets::StreamSocketListener const& listener) const;
        auto StopAdvertising() const;
    };
    template <> struct consume<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider2
    {
        auto StartAdvertising(winrt::Windows::Networking::Sockets::StreamSocketListener const& listener, bool radioDiscoverable) const;
    };
    template <> struct consume<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProvider2>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProvider2<D>;
    };
    template <typename D>
    struct consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProviderStatics
    {
        auto CreateAsync(winrt::Windows::Devices::Bluetooth::Rfcomm::RfcommServiceId const& serviceId) const;
    };
    template <> struct consume<winrt::Windows::Devices::Bluetooth::Rfcomm::IRfcommServiceProviderStatics>
    {
        template <typename D> using type = consume_Windows_Devices_Bluetooth_Rfcomm_IRfcommServiceProviderStatics<D>;
    };
}
#endif
