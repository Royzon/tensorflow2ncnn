
#set(OpenCV_LIBS /home/zyhan/ncnn/3rdparty/lib)
#find_package(OpenCV QUIET COMPONENTS 3rdparty)
find_package(OpenCV QUIET COMPONENTS core highgui imgproc imgcodecs)
if(NOT OpenCV_FOUND)
    find_package(OpenCV REQUIRED COMPONENTS core highgui imgproc)
    #find_package(OpenCV REQUIRED COMPONENTS 3rdparty)
endif()

add_executable(ncnn2table ncnn2table.cpp)
target_link_libraries(ncnn2table PRIVATE ncnn ${OpenCV_LIBS})

add_executable(ncnn2int8 ncnn2int8.cpp)
target_link_libraries(ncnn2int8 PRIVATE ncnn)
