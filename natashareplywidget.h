#ifndef NATASHAREPLYWIDGET_H
#define NATASHAREPLYWIDGET_H

#include <QLabel>
#include "filedownloader.h"

class NatashaReplyWidget : public QLabel
{
    Q_OBJECT
public:
    explicit NatashaReplyWidget(QWidget *parent = 0);

signals:

private slots:

    void loadImage();

private:
    FileDownloader* m_pImgCtrl;
};

#endif // NATASHAREPLYWIDGET_H
