cmake_minimum_required(VERSION 3.6)

project(chip_main)

set(chip_dir "${bee_matter_root}")
set(chip_dir_output "${matter_output_path}/chip")
set(chip_main chip_main)
set(list_chip_main_sources chip_main_sources)

include(${CMAKE_CURRENT_SOURCE_DIR}/includepath.cmake)

if (matter_enable_shell)
list(
    APPEND ${list_chip_main_sources}
    #shell
    ${chip_dir}/examples/platform/realtek_bee/shell/launch_shell.cpp
)
endif (matter_enable_shell)

list(
    APPEND ${list_chip_main_sources}

    ${chip_dir}/examples/light-switch-app/realtek_bee/main/AppTask.cpp
    ${chip_dir}/examples/light-switch-app/realtek_bee/main/LightSwitch.cpp
    ${chip_dir}/examples/light-switch-app/realtek_bee/main/chipinterface.cpp
    ${chip_dir}/examples/light-switch-app/realtek_bee/main/BindingHandler.cpp
    ${chip_dir}/examples/light-switch-app/realtek_bee/main/DeviceCallbacks.cpp
    ${chip_dir}/examples/light-switch-app/realtek_bee/main/CHIPDeviceManager.cpp
    ${chip_dir}/examples/light-switch-app/realtek_bee/main/Globals.cpp
    ${chip_dir}/examples/platform/realtek_bee/util/LEDWidget.cpp
    ${chip_dir}/examples/providers/DeviceInfoProviderImpl.cpp
)

add_library(
    ${chip_main}
    STATIC
    ${chip_main_sources}
)

chip_configure_data_model(chip_main
    INCLUDE_SERVER
    ZAP_FILE ${matter_example_path}/../light-switch-common/light-switch-app.zap
)

target_include_directories(
    ${chip_main}
    PUBLIC
	${inc_path}
    ${chip_dir}/zzz_generated/light-switch-app
    ${chip_dir}/zzz_generated/light-switch-app/zap-generated
    ${chip_dir}/zzz_generated/app-common
    ${chip_dir}/examples/light-switch-app/light-switch-common
    ${chip_dir}/examples/light-switch-app/realtek_bee/main/include
    ${chip_dir}/examples/platform/realtek_bee
    ${chip_dir}/examples/providers
    ${chip_dir_output}/gen/include
    ${chip_dir}/src/include/
    ${chip_dir}/src/lib/
    ${chip_dir}/src/
    ${chip_dir}/third_party/nlassert/repo/include/
    ${chip_dir}/src/app/
    ${chip_dir}/src/app/util/
    ${chip_dir}/src/app/server/
    ${chip_dir}/src/controller/data_model
    ${chip_dir}/third_party/nlio/repo/include/
)

list(
    APPEND chip_main_flags

    -DINET_CONFIG_ENABLE_IPV4=0
    -DCHIP_PROJECT=1
    -DCHIP_DEVICE_LAYER_TARGET=Realtek_bee
    -DCHIP_HAVE_CONFIG_H
)

if (matter_dac_key_encryption)
list(APPEND chip_main_flags -DCONFIG_DAC_KEY_ENC=1)
endif (matter_dac_key_encryption)

if (matter_enable_persistentstorage_audit)
list(
    APPEND chip_main_flags

    -DCHIP_SUPPORT_ENABLE_STORAGE_API_AUDIT
)
endif (matter_enable_persistentstorage_audit)

if (matter_enable_shell)
list(
    APPEND chip_main_flags

    -DCONFIG_ENABLE_CHIP_SHELL=1
)
endif (matter_enable_shell)

list(
    APPEND chip_main_cpp_flags

	-Wno-unused-parameter
	-std=gnu++17
	-fno-rtti
)
target_compile_definitions(${chip_main} PRIVATE ${chip_main_flags} )
target_compile_options(${chip_main} PRIVATE ${chip_main_cpp_flags})
