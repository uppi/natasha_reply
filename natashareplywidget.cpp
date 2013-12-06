#include "natashareplywidget.h"

NatashaReplyWidget::NatashaReplyWidget(QWidget *parent) :
    QLabel(parent)
{
    QUrl imageUrl("http://gyazo.com/b8d07f5fe69fe35d16a7d901244adac2.png");
    m_pImgCtrl = new FileDownloader(imageUrl, this);
    connect(m_pImgCtrl, SIGNAL(downloaded()), SLOT(loadImage()));
}

void NatashaReplyWidget::loadImage()
{
    QPixmap buttonImage;
    buttonImage.loadFromData(m_pImgCtrl->downloadedData());
    this->setPixmap(buttonImage);
    this->resize(buttonImage.size());
}
