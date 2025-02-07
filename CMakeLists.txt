cmake_minimum_required(VERSION 3.10)

# 프로젝트 이름과 버전 설정
project(HelloWorld VERSION 1.0)

# include 디렉토리 추가
include_directories(include)

# 정적 라이브러리 생성
add_library(messages STATIC lib/messages.cpp)

# 실행 파일 생성 및 링크
add_executable(main src/main.cpp)
target_link_libraries(main messages)