// #include "mainwindow.h"
// #include "ui_mainwindow.h"

// MainWindow::~MainWindow() {
//     delete ui;  // Giải phóng bộ nhớ giao diện nếu `ui` được cấp phát động
// }


// MainWindow::MainWindow(QWidget *parent)
//     : QMainWindow(parent), ui(new Ui::MainWindow)
// {
//     ui->setupUi(this);

//     Player = new QMediaPlayer(this);
//     AudioOutput = new QAudioOutput(this);  // Khởi tạo AudioOutput
//     Video = new QVideoWidget(this);

//     Player->setAudioOutput(AudioOutput);  // Liên kết với QMediaPlayer

//     Player->setVideoOutput(Video); // Liên kết với Video


//     Video->setGeometry(5, 5, ui->groupBox_Video->width() - 5, ui->groupBox_Video->height() - 5);
//     Video->setParent(ui->groupBox_Video);


//     ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
//     ui->pushButton_Play_Pause->setIconSize(QSize(45, 45));


//     ui->pushButton_Stop->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
//     ui->pushButton_Stop->setIconSize(QSize(45, 45));

//     ui->pushButton_Seek_Backward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
//     ui->pushButton_Seek_Backward->setIconSize(QSize(45,45));

//     ui->pushButton_Seek_Forward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
//     ui->pushButton_Seek_Forward->setIconSize(QSize(45,45));

//     ui->pushButton_Volume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
//     ui->pushButton_Volume->setIconSize(QSize(100,100));

//     ui->pushButton_Next->setIcon(style()->standardIcon(QStyle::SP_MediaSkipForward));
//     ui->pushButton_Next->setIconSize(QSize(45,45));

//     ui->pushButton_Previous->setIcon(style()->standardIcon(QStyle::SP_MediaSkipBackward));
//     ui->pushButton_Previous->setIconSize(QSize(45,45));


//     ui->horizontalSlider_Volume->setMinimum(0);
//     ui->horizontalSlider_Volume->setMaximum(100);
//     ui->horizontalSlider_Volume->setValue(10);

//     AudioOutput->setVolume(ui->horizontalSlider_Volume->value() / 100.0);  // Đặt âm lượng

//     connect(Player, &QMediaPlayer::durationChanged, this, &MainWindow::durationChanged);
//     connect(Player, &QMediaPlayer::positionChanged, this, &MainWindow::positionChanged);

//     connect(ui->pushButton_Next, &QPushButton::clicked, this, &MainWindow::playNextSong);
//     connect(ui->pushButton_Previous, &QPushButton::clicked, this, &MainWindow::playPreviousSong);

//     connect(ui->horizontalSlider_Duration, &QSlider::valueChanged, this, &MainWindow::checkSliderPosition);



//     ui->horizontalSlider_Duration->setRange(0, Player->duration() / 1000);

//     connect(ui->horizontalSlider_Volume, &QSlider::valueChanged, [&](int value) {
//         if (!AudioOutput->isMuted()) {
//             AudioOutput->setVolume(value / 100.0);
//         }
//     });


// }
// void MainWindow::on_actionOpen_File_triggered()
// {

//     // Cho phép người dùng chọn nhiều tệp .mp4 hoặc .mp3
//     QStringList fileNames = QFileDialog::getOpenFileNames(
//         this,
//         tr("Open Files"),
//         "",
//         tr("Media Files (*.mp4 *.mp3)"));

//     if (!fileNames.isEmpty()) {
//         loadPlaylist(fileNames); // Nạp playlist với các tệp đã chọn
//     }

// }

// void MainWindow::durationChanged(qint64 duration)
// {
//     mDuration = duration / 1000;
//     ui->horizontalSlider_Duration->setMaximum(mDuration);
// }

// void MainWindow::positionChanged(qint64 duration)
// {
//     if (!ui->horizontalSlider_Duration->isSliderDown())
//     {
//         ui->horizontalSlider_Duration->setValue(duration / 1000);
//     }
//     updateDuration(duration / 1000);
// }

// void MainWindow::updateDuration(qint64 Duration)
// {
//     QTime CurrentTime((Duration / 3600) % 60, (Duration / 60) % 60, Duration % 60);

//     QTime TotalTime((mDuration / 3600) % 60, (mDuration / 60) % 60, mDuration % 60);

//     QString Format = (mDuration > 3600) ? "hh:mm:ss" : "mm:ss";

//     ui->label_current_Time->setText(CurrentTime.toString(Format));
//     ui->label_Total_Time->setText(TotalTime.toString(Format));
// }

// void MainWindow::on_horizontalSlider_Duration_valueChanged(int value)
// {
//     Player->setPosition(value * 1000);
// }

// void MainWindow::on_pushButton_Play_Pause_clicked()
// {
//     if (IS_Pause)
//     {
//         IS_Pause = false;
//         Player->play();
//         ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
//     }
//     else
//     {
//         IS_Pause = true;
//         Player->pause();
//         ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
//     }
// }

// void MainWindow::on_pushButton_Stop_clicked()
// {
//     Player->stop();
//     IS_Pause = true;
//     ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
// }

// void MainWindow::on_pushButton_Volume_clicked()
// {
//     IS_Muted = !IS_Muted;
//     AudioOutput->setMuted(IS_Muted);
//     ui->pushButton_Volume->setIcon(style()->standardIcon(IS_Muted ? QStyle::SP_MediaVolumeMuted : QStyle::SP_MediaVolume));
// }

// void MainWindow::on_horizontalSlider_Volume_valueChanged(int value)
// {
//     AudioOutput->setVolume(value / 100.0);
// }

// void MainWindow::on_pushButton_Seek_Backward_clicked()
// {
//     int newPosition = ui->horizontalSlider_Duration->value() - 5;
//     ui->horizontalSlider_Duration->setValue(newPosition);
//     Player->setPosition(newPosition * 1000);
// }

// void MainWindow::on_pushButton_Seek_Forward_clicked()
// {
//     int newPosition = ui->horizontalSlider_Duration->value() + 5;
//     ui->horizontalSlider_Duration->setValue(newPosition);
//     Player->setPosition(newPosition * 1000);
// }

// void MainWindow::loadPlaylist(const QStringList &songs) {
//     playlist = songs;
//     currentSongIndex = 0;
//     playSong(currentSongIndex);
// }


// void MainWindow::playNextSong() {
//     if (currentSongIndex + 1 < playlist.size()) {
//         currentSongIndex++;
//         playSong(currentSongIndex);
//     }
// }

// void MainWindow::playPreviousSong() {
//     if (currentSongIndex - 1 >= 0) {
//         currentSongIndex--;
//         playSong(currentSongIndex);
//     }
// }

// void MainWindow::checkSliderPosition(int value) {
//     if (value >= ui->horizontalSlider_Duration->maximum()) {
//         playNextSong();
//     }
// }

// void MainWindow::playSong(int index) {
//     if (index >= 0 && index < playlist.size()) {
//         Player->setSource(QUrl::fromLocalFile(playlist[index]));
//         Player->play();
//         ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));

//         // Lấy tên file mà không có phần mở rộng
//         QString songName = QFileInfo(playlist[index]).baseName();  // Lấy tên tệp không có đuôi
//         ui->label_songTitle->setText(songName);  // Hiển thị tên bài hát trên nhãn
//     }
// }


#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPointer>
#include <QFileInfo>
#include <QTime>

MainWindow::~MainWindow() {
    delete ui;  // Giải phóng bộ nhớ giao diện nếu `ui` được cấp phát động
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Khởi tạo Player, AudioOutput, và Video chỉ một lần
    Player = new QMediaPlayer(this);
    AudioOutput = new QAudioOutput(this);
    Video = new QVideoWidget(this);

    Player->setAudioOutput(AudioOutput);  // Liên kết với QMediaPlayer
    Player->setVideoOutput(Video);  // Liên kết với Video

    // Đặt video widget vào groupBox_Video
    Video->setGeometry(5, 5, ui->groupBox_Video->width() - 5, ui->groupBox_Video->height() - 5);
    Video->setParent(ui->groupBox_Video);

    // Thiết lập icon cho các nút một lần trong constructor
    ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->pushButton_Play_Pause->setIconSize(QSize(45, 45));
    ui->pushButton_Stop->setIcon(style()->standardIcon(QStyle::SP_MediaStop));
    ui->pushButton_Stop->setIconSize(QSize(45, 45));
    ui->pushButton_Seek_Backward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
    ui->pushButton_Seek_Backward->setIconSize(QSize(45,45));
    ui->pushButton_Seek_Forward->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));
    ui->pushButton_Seek_Forward->setIconSize(QSize(45,45));
    ui->pushButton_Volume->setIcon(style()->standardIcon(QStyle::SP_MediaVolume));
    ui->pushButton_Volume->setIconSize(QSize(100,100));
    ui->pushButton_Next->setIcon(style()->standardIcon(QStyle::SP_MediaSkipForward));
    ui->pushButton_Next->setIconSize(QSize(45,45));
    ui->pushButton_Previous->setIcon(style()->standardIcon(QStyle::SP_MediaSkipBackward));
    ui->pushButton_Previous->setIconSize(QSize(45,45));

    // Cài đặt thanh trượt âm lượng
    ui->horizontalSlider_Volume->setMinimum(0);
    ui->horizontalSlider_Volume->setMaximum(100);
    ui->horizontalSlider_Volume->setValue(10);
    AudioOutput->setVolume(ui->horizontalSlider_Volume->value() / 100.0);

    connect(Player, &QMediaPlayer::durationChanged, this, &MainWindow::durationChanged);
    connect(Player, &QMediaPlayer::positionChanged, this, &MainWindow::positionChanged);
    connect(ui->pushButton_Next, &QPushButton::clicked, this, &MainWindow::playNextSong);
    connect(ui->pushButton_Previous, &QPushButton::clicked, this, &MainWindow::playPreviousSong);
    connect(ui->horizontalSlider_Duration, &QSlider::valueChanged, this, &MainWindow::checkSliderPosition);

    // Thiết lập phạm vi cho thanh trượt thời gian
    ui->horizontalSlider_Duration->setRange(0, Player->duration() / 1000);

    // Kết nối sự kiện thay đổi âm lượng
    connect(ui->horizontalSlider_Volume, &QSlider::valueChanged, [&](int value) {
        if (!AudioOutput->isMuted()) {
            AudioOutput->setVolume(value / 100.0);
        }
    });
}

void MainWindow::on_actionOpen_File_triggered() {
    QStringList fileNames = QFileDialog::getOpenFileNames(
        this, tr("Open Files"), "", tr("Media Files (*.mp4 *.mp3)"));

    if (!fileNames.isEmpty()) {
        loadPlaylist(fileNames); // Nạp playlist với các tệp đã chọn
    }
}

void MainWindow::durationChanged(qint64 duration) {
    mDuration = duration / 1000;
    ui->horizontalSlider_Duration->setMaximum(mDuration);
}

void MainWindow::positionChanged(qint64 duration) {
    if (!ui->horizontalSlider_Duration->isSliderDown()) {
        ui->horizontalSlider_Duration->setValue(duration / 1000);
    }
    updateDuration(duration / 1000);
}

void MainWindow::updateDuration(qint64 Duration) {
    QTime CurrentTime((Duration / 3600) % 60, (Duration / 60) % 60, Duration % 60);
    QTime TotalTime((mDuration / 3600) % 60, (mDuration / 60) % 60, mDuration % 60);
    QString Format = (mDuration > 3600) ? "hh:mm:ss" : "mm:ss";

    ui->label_current_Time->setText(CurrentTime.toString(Format));
    ui->label_Total_Time->setText(TotalTime.toString(Format));
}

void MainWindow::on_horizontalSlider_Duration_valueChanged(int value) {
    Player->setPosition(value * 1000);
}

void MainWindow::on_pushButton_Play_Pause_clicked() {
    if (IS_Pause) {
        IS_Pause = false;
        Player->play();
        ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
    } else {
        IS_Pause = true;
        Player->pause();
        ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    }
}

void MainWindow::on_pushButton_Stop_clicked() {
    Player->stop();
    IS_Pause = true;
    ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
}

void MainWindow::on_pushButton_Volume_clicked() {
    IS_Muted = !IS_Muted;
    AudioOutput->setMuted(IS_Muted);
    ui->pushButton_Volume->setIcon(style()->standardIcon(IS_Muted ? QStyle::SP_MediaVolumeMuted : QStyle::SP_MediaVolume));
}

void MainWindow::on_horizontalSlider_Volume_valueChanged(int value) {
    AudioOutput->setVolume(value / 100.0);
}

void MainWindow::on_pushButton_Seek_Backward_clicked() {
    int newPosition = ui->horizontalSlider_Duration->value() - 5;
    ui->horizontalSlider_Duration->setValue(newPosition);
    Player->setPosition(newPosition * 1000);
}

void MainWindow::on_pushButton_Seek_Forward_clicked() {
    int newPosition = ui->horizontalSlider_Duration->value() + 5;
    ui->horizontalSlider_Duration->setValue(newPosition);
    Player->setPosition(newPosition * 1000);
}

void MainWindow::loadPlaylist(const QStringList &songs) {
    playlist = songs;  // Chỉ lưu danh sách đường dẫn tệp
    currentSongIndex = 0;
    playSong(currentSongIndex);
}

void MainWindow::playNextSong() {
    if (currentSongIndex + 1 < playlist.size()) {
        currentSongIndex++;
        playSong(currentSongIndex);
    }
}

void MainWindow::playPreviousSong() {
    if (currentSongIndex - 1 >= 0) {
        currentSongIndex--;
        playSong(currentSongIndex);
    }
}

void MainWindow::checkSliderPosition(int value) {
    if (value >= ui->horizontalSlider_Duration->maximum()) {
        playNextSong();
    }
}

void MainWindow::playSong(int index) {
    if (index >= 0 && index < playlist.size()) {
        Player->setSource(QUrl::fromLocalFile(playlist[index]));
        Player->play();

        // Cập nhật nút Play/Pause
        IS_Pause = false;  // Đặt IS_Pause là false khi bài hát được phát
        ui->pushButton_Play_Pause->setIcon(style()->standardIcon(QStyle::SP_MediaPause));

        // Lấy tên file mà không có phần mở rộng
        QString songName = QFileInfo(playlist[index]).baseName();  // Lấy tên tệp không có đuôi
        ui->label_songTitle->setText(songName);  // Hiển thị tên bài hát trên nhãn
    }
}

