# CMakeList.txt : projet CMake pour "test", incluez la source et définissez
# la logique spécifique au projet ici.
#
cmake_minimum_required (VERSION 3.8)

# Activez Rechargement à chaud pour les compilateurs MSVC si cela est pris en charge.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project("test" VERSION 0.1.0 LANGUAGES C CXX)

# Ajoutez une source à l'exécutable de ce projet.
add_executable("test"
 "src/main.cpp"
 "src/token/token.cpp"
 "src/token/token.h"
 "src/token/tokenizer.cpp"
 "src/token/tokenizer.h"
 )

set_property(TARGET "test" PROPERTY CXX_STANDARD 20)
