添加翻译功能步骤：
1.lupdate-qt5 test_1.pro -ts test.ts
或者在.pro文件中添加TRANSLATIONS = test.ts,然后执行lupdate-qt5 test_1.pro

2.用Linguits工具打开test.ts文件填充翻译字符

3.执行命令lrelease-qt5 test.ts来生成翻译文件

4.在程序上加载翻译文件
QTranslator tsor;
tsor.load(QLocale(),"test", "_",path);
a.installTranslator(&tsor);
