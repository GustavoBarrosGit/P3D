#pragma once

#include "Luis/Renderer.h"

class Texture {
    unsigned int m_RendererID;
    std::string m_FilePath;
    unsigned char* m_LocalBuffer;
    int m_Width, m_Height, m_BPP;
public:
    Texture(const std::string& path);
    ~Texture();
    Texture();
    void Bind(unsigned int slot = 0) const;
    void Unbind() const;

    void LateInit(const std::string& path);

    inline int GetWidth() const { return m_Width; }
    inline int GetHeight() const { return m_Height; }
};
