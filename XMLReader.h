#pragma once
#include <Qtxml>

/*
 * ʵ�ֶ�XML�ļ��Ķ�ȡ�����������µ�
 * author:wl
 * time  2020/8/31
 */
class XMLReader
{
public:
	XMLReader();
	~XMLReader();
	void creareDataFiles();
	
private:
	void createXMLFile(const QString filepath, const QString filedir = "data");
	QString filepath;
};

