/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*-
 *
 * Copyright (C) 2019 Tianjin KYLIN Information Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */
#ifndef SUCCESSDIAOLOG_H
#define SUCCESSDIAOLOG_H

#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QPixmap>
#include <QGraphicsSvgItem>
#include <QSvgWidget>
class SuccessDiaolog : public QWidget
{
    Q_OBJECT
public:
    explicit SuccessDiaolog(QWidget *parent = nullptr);
    QPushButton *m_backloginBtn;
    QLabel      *m_textLabel;
    QSvgWidget      *m_bkgWidget;
    void     set_mode_text(const int &mode);
private:
    QVBoxLayout *m_workLayout;
signals:

};

#endif // SUCCESSDIAOLOG_H
