include("D:/Qt/calculator/build/Desktop_Qt_6_11_0_MinGW_64_bit-Release/.qt/QtDeploySupport.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/calculator-plugins.cmake" OPTIONAL)
set(__QT_DEPLOY_I18N_CATALOGS "qtbase")

qt6_deploy_runtime_dependencies(
    EXECUTABLE "D:/Qt/calculator/build/Desktop_Qt_6_11_0_MinGW_64_bit-Release/calculator.exe"
    GENERATE_QT_CONF
)
