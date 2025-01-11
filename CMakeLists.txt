zephyr_library()

if (CONFIG_ZMK_SPLIT_EXTRA_COMMUNICATION)
    zephyr_include_directories(include)
    zephyr_include_directories(${APPLICATION_SOURCE_DIR}/include)

    zephyr_library_sources(src/events/split_extra_communication_event.c)

    if (ZMK_SPLIT_EXTRA_COMMUNICATION_CENTRAL)
        zephyr_library_sources(src/split_extra_communication_central.c)
        zephyr_library_sources(src/split_extra_communication_event_catcher.c)
    endif()

    if (ZMK_SPLIT_EXTRA_COMMUNICATION_PERIPHERAL)
        zephyr_library_sources(src/split_extra_communication_peripheral.c)
        zephyr_library_sources(src/split_extra_communication_event_raiser.c)
    endif()

endif()