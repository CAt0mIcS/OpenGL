#pragma once


class IndexBuffer {
private:
	unsigned int m_RendererID;
	unsigned int m_Count;
public:
	IndexBuffer(const unsigned int* data, unsigned int count); //size = bytes, count = amount of elements
	~IndexBuffer();

	void Bind() const;
	void Unbind() const;
};


