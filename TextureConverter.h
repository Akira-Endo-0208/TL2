#pragma once
#include <string>
#include "windows.h"
#include <DirectXTex.h>

class TextureConverter
{
public:

	void ConverterTextureWICToDDS(const std::string& filePath);

private:

	void LoadWICTextureFromFile(const std::string& filePath);


private:

	static std::wstring ConverterMultiByteStringToWideString(const std::string& mString);


};

