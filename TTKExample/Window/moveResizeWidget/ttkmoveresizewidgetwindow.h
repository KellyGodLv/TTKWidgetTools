#ifndef TTKMOVERESIZEWIDGETWINDOW_H
#define TTKMOVERESIZEWIDGETWINDOW_H

/* =================================================
 * This file is part of the TTK WidgetTools project
 * Copyright (C) 2015 - 2019 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include <QMainWindow>
#include "ttkglobaldefine.h"

namespace Ui {
class TTKMoveResizeWidgetWindow;
}

/*!
 * @author Greedysky <greedysky@163.com>
 */
class TTK_CORE_EXPORT TTKMoveResizeWidgetWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit TTKMoveResizeWidgetWindow(QWidget *parent = nullptr);
    ~TTKMoveResizeWidgetWindow();

private Q_SLOTS:
    void changed();

private:
    Ui::TTKMoveResizeWidgetWindow *ui;

};

#endif // TTKMOVERESIZEWIDGETWINDOW_H
