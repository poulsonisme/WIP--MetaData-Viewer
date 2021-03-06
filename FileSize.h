#pragma once

class FileSize {
public:

    FileSize(const std::string& path);
    std::string file_size();
    std::string directory_size();

private:
    
    std::string unit(size_t val);
    std::string formatted(int num);
    std::string m_path;
    
};
