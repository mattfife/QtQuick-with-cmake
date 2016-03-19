#include <QGuiApplication>
#include <qqmlengine.h>
#include <qqmlcontext.h>

#include <qqml.h>
#include <qqmlapplicationengine.h>
#include <qtQuick/qquickview.h>
#include <qtQuick/qquickitem.h>
#include <qqmlcontext.h>


int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
/*    
    //QDeclarativeView view;

    // set up binding from c++ to qml binding of AppModel object
    qmlRegisterType<AppModel>("org.qtproject.example", 1, 0, "AppModel");

    
    // set the contents of the listview myModel variable
    QList<QObject*> dataList;
    dataList.append(new DataObject("Item 1", "red"));
    dataList.append(new DataObject("Item 2", "green"));
    dataList.append(new DataObject("Item 3", "blue"));
    dataList.append(new DataObject("Item 4", "yellow"));
    dataList.append(new DataObject("Item 1", "red"));
    dataList.append(new DataObject("Item 2", "green"));
    dataList.append(new DataObject("Item 3", "blue"));
    dataList.append(new DataObject("Item 4", "yellow"));
    dataList.append(new DataObject("Item 1", "red"));
    dataList.append(new DataObject("Item 2", "green"));
    dataList.append(new DataObject("Item 3", "blue"));
    dataList.append(new DataObject("Item 4", "yellow"));
    QQuickView view;
    view.setResizeMode(QQuickView::SizeRootObjectToView);
    QQmlContext *ctxt = view.rootContext();
    ctxt->setContextProperty("myModel", QVariant::fromValue(dataList));
    
    QCoreApplication::addLibraryPath("./");
    
    view.setSource(QUrl(QStringLiteral("qrc:/main.qml")));
    view.show();
*/


    QCoreApplication::addLibraryPath("./");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    
    return app.exec();
}

