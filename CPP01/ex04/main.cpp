#include <iostream>
#include <fstream>
#include <string>

void replaceInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    // 파일 열기
    std::ifstream inputFile(filename.c_str());  // C 스타일로 변환하여 파일 열기
    if (!inputFile.is_open()) {
        std::cerr << "파일을 열 수 없습니다!" << std::endl;
        return;
    }

    // 새로운 파일에 쓸 준비
    std::ofstream outputFile((filename + ".replace").c_str());  // 새 파일 열기
    if (!outputFile.is_open()) {
        std::cerr << "새 파일을 열 수 없습니다!" << std::endl;
        inputFile.close();  // inputFile 닫기
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {  // 파일에서 한 줄씩 읽기
        size_t pos = 0;
        // s1을 찾아 s2로 교체
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line.replace(pos, s1.length(), s2);  // s1을 s2로 교체
            pos += s2.length();  // 교체 후 다음 위치로 이동
        }

        // 교체된 내용을 새 파일에 쓰기
        outputFile << line << std::endl;
    }

    inputFile.close();  // 파일 닫기
    outputFile.close();  // 파일 닫기
}

int main(int argc, char** argv) {
    if (argc != 4) {
        std::cerr << "사용법: ./sed <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    replaceInFile(argv[1], argv[2], argv[3]);  // 파일에서 문자열 교체
    return 0;
}

