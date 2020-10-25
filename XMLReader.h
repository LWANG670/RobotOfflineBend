#pragma once
#include <Qtxml>

/*
 * 实现对XML文件的读取，创建，更新等
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

