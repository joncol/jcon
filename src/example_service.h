#pragma once
#include <QObject>
#include <jcon/json_rpc_future.h>

class ExampleService : public QObject
{
    Q_OBJECT

public:
    ExampleService();
    virtual ~ExampleService();

    Q_INVOKABLE int getRandomInt(int limit);
    Q_INVOKABLE QString printMessage(const QString& msg);
    Q_INVOKABLE void printNotification(const QString& msg);
    Q_INVOKABLE void namedParams(QString& msg, int answer);
    Q_INVOKABLE jcon::JsonRpcFuture futureGetRandomInt(int limit);
};
