cmake_minimum_required(VERSION 2.8.3)
project(dub_sim)

find_package(catkin REQUIRED)
catkin_package()

install(DIRECTORY launch models urdf
        DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
)

catkin_install_python (PROGRAMS src/genroad.py
  DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION}
)
