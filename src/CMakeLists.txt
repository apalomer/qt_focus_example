
add_library(custom_widget SHARED custom_widget.cpp custom_widget.h custom_widget.ui)
target_link_libraries(custom_widget Qt5::Core Qt5::Widgets)

add_library(main_window SHARED main_window.cpp main_window.h main_window.ui)
target_link_libraries(main_window Qt5::Core Qt5::Widgets custom_widget)

add_executable(main main.cpp)
target_link_libraries(main Qt5::Core main_window)
