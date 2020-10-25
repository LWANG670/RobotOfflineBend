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
*创建所需数据XML集合
* author:wl
* time  2020 / 8 / 31
*/
void XMLReader::creareDataFiles()
{
	createXMLFile("workpieces.xml");

	QFile file("./data/workpieces.xml"); //相对路径、绝对路径、资源路径都可以
	if (!file.open(QFile::WriteOnly)) //可以用QIODevice，Truncate表示清空原来的内容
		return;

	QDomDocument doc;
	//写入xml头部
	QDomProcessingInstruction instruction; //添加处理命令
	instruction = doc.createProcessingInstruction("xml", "version=\"1.0\" encoding=\"UTF-8\"");
	doc.appendChild(instruction);
	//添加根节点
	QDomElement root = doc.createElement("WorkPiecePos");
	doc.appendChild(root);
	//添加第一个子节点及其子元素
	QDomElement book = doc.createElement("book");
	book.setAttribute("id", 1); //方式一：创建属性  其中键值对的值可以是各种类型
	QDomAttr time = doc.createAttribute("time"); //方式二：创建属性 值必须是字符串
	time.setValue("2013/6/13");
	book.setAttributeNode(time);
	QDomElement title = doc.createElement("title"); //创建子元素
	QDomText text; //设置括号标签中间的值
	text = doc.createTextNode("C++ primer");
	book.appendChild(title);
	title.appendChild(text);
	QDomElement author = doc.createElement("author"); //创建子元素
	text = doc.createTextNode("Stanley Lippman");
	author.appendChild(text);
	book.appendChild(author);
	root.appendChild(book);

	//添加第二个子节点及其子元素，部分变量只需重新赋值
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

	//输出到文件
	QTextStream out_stream(&file);
	doc.save(out_stream, 4); //缩进4格
	file.close();

	
}

//默认地址在data文件中
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
