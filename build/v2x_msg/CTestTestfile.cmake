# CMake generated Testfile for 
# Source directory: /home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg
# Build directory: /home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(copyright "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/test_results/v2x_msg/copyright.xunit.xml" "--package-name" "v2x_msg" "--output-file" "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_copyright/copyright.txt" "--command" "/opt/ros/galactic/bin/ament_copyright" "--xunit-file" "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/test_results/v2x_msg/copyright.xunit.xml")
set_tests_properties(copyright PROPERTIES  LABELS "copyright;linter" TIMEOUT "120" WORKING_DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_copyright/cmake/ament_copyright.cmake;46;ament_add_test;/opt/ros/galactic/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;18;ament_copyright;/opt/ros/galactic/share/ament_cmake_copyright/cmake/ament_cmake_copyright_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/CMakeLists.txt;171;ament_package;/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/CMakeLists.txt;0;")
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/test_results/v2x_msg/lint_cmake.xunit.xml" "--package-name" "v2x_msg" "--output-file" "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/galactic/bin/ament_lint_cmake" "--xunit-file" "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/test_results/v2x_msg/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/opt/ros/galactic/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/CMakeLists.txt;171;ament_package;/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/galactic/share/ament_cmake_test/cmake/run_test.py" "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/test_results/v2x_msg/xmllint.xunit.xml" "--package-name" "v2x_msg" "--output-file" "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/ament_xmllint/xmllint.txt" "--command" "/opt/ros/galactic/bin/ament_xmllint" "--xunit-file" "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/build/v2x_msg/test_results/v2x_msg/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg" _BACKTRACE_TRIPLES "/opt/ros/galactic/share/ament_cmake_test/cmake/ament_add_test.cmake;124;add_test;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/opt/ros/galactic/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/opt/ros/galactic/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/opt/ros/galactic/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/CMakeLists.txt;171;ament_package;/home/carla/Documents/GitHub/C-V2X-Autoware-Carla/src/v2x_msg/CMakeLists.txt;0;")
subdirs("v2x_msg__py")
