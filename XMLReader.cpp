#include "XMLReader.h"
#include <QDir>
#include "QMessageBox"


XMLReader::XMLReader()
{
}

XMLReader::~XMLReader()
{
}

/*
*������������XML����
* author:wl
* time  2020 / 8 / 31
*/
void XMLReader::creareDataFiles()
{
	createXMLFile("workpieces.xml");

	QFile file("./data/workpieces.xml"); //���·��������·������Դ·��������
	if (!file.open(QFile::WriteOnly)) //������QIODevice��Truncate��ʾ���ԭ��������
		return;

	QDomDocument doc;
	//д��xmlͷ��
	QDomProcessingInstruction instruction; //��Ӵ�������
	instruction = doc.createProcessingInstruction("xml", "version=\"1.0\" encoding=\"UTF-8\"");
	doc.appendChild(instruction);
	//��Ӹ��ڵ�
	QDomElement root = doc.createElement("WorkPiecePos");
	doc.appendChild(root);
	//��ӵ�һ���ӽڵ㼰����Ԫ��
	QDomElement book = doc.createElement("book");
	book.setAttribute("id", 1); //��ʽһ����������  ���м�ֵ�Ե�ֵ�����Ǹ�������
	QDomAttr time = doc.createAttribute("time"); //��ʽ������������ ֵ�������ַ���
	time.setValue("2013/6/13");
	book.setAttributeNode(time);
	QDomElement title = doc.createElement("title"); //������Ԫ��
	QDomText text; //�������ű�ǩ�м��ֵ
	text = doc.createTextNode("C++ primer");
	book.appendChild(title);
	title.appendChild(text);
	QDomElement author = doc.createElement("author"); //������Ԫ��
	text = doc.createTextNode("Stanley Lippman");
	author.appendChild(text);
	book.appendChild(author);
	root.appendChild(book);

	//��ӵڶ����ӽڵ㼰����Ԫ�أ����ֱ���ֻ�����¸�ֵ
	book = doc.createElement("book");
	book.setAttribute("id", 2);
	time = doc.createAttribute("time");
	time.setValue("2007/5/25");
	book.setAttributeNode(time);
	title = doc.createElement("title");
	text = doc.createTextNode("Thinking in Java");
	book.appendChild(title);
	title.appendChild(text);
	author = doc.createElement("author");
	text = doc.createTextNode("Bruce Eckel");
	author.appendChild(text);
	book.appendChild(author);
	root.appendChild(book);

	//������ļ�
	QTextStream out_stream(&file);
	doc.save(out_stream, 4); //����4��
	file.close();

	
}

//Ĭ�ϵ�ַ��data�ļ���
void XMLReader::createXMLFile(QString filepath, const QString filedir)
{
	QDir folder;
	bool ok = true;
	if(!folder.exists(filedir))
		ok = folder.mkdir(filedir);
	if (!ok)
	{
		return;
	}
	filepath = filedir +"/"+ filepath;
	QFile file(filepath);
	if(!file.exists(filepath))
		file.open(QFile::ReadWrite | QIODevice::Text);
	file.close();

	
}
