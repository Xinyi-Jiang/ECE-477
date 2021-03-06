// Copyright (c) 2015-2016, Kai Wolf
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP

#include <qmainwindow.h>
#include <qobjectdefs.h>
#include <qstring.h>

class QAction;
class QListWidget;
class QMenu;
class QObject;
class QPushButton;
class QWidget;
namespace ret { class ModelWidget; }

namespace ret {
class MainWindow : public QMainWindow {

    Q_OBJECT

  public:
    explicit MainWindow(QWidget *parent = nullptr);

  private:
    void createInterface();
    void createMenu();
    void createToolBar();
    void createActions();

    void openDataset();

    QMenu *file_menu_;
    QMenu *view_menu_;
    QMenu *settings_menu_;
    QMenu *export_menu_;

    QPushButton *scan_button_;

    QListWidget* dataset_widget_;

    QAction *open_dataset_action_;
    QAction *exit_action_;

    ModelWidget *model_widget_;
};
}  // namespace ret

#endif
