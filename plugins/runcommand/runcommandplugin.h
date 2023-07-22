/**
 * SPDX-FileCopyrightText: 2015 Albert Vaca <albertvaka@gmail.com>
 *
 * SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only OR LicenseRef-KDE-Accepted-GPL
 */

#ifndef RUNCOMMANDPLUGIN_H
#define RUNCOMMANDPLUGIN_H

#include <QObject>

#include <QFile>
#include <QFileSystemWatcher>
#include <QMap>
#include <QPair>
#include <QString>
#include <core/kdeconnectplugin.h>

class Q_DECL_EXPORT RunCommandPlugin : public KdeConnectPlugin
{
    Q_OBJECT

public:
    explicit RunCommandPlugin(QObject *parent, const QVariantList &args);

    bool receivePacket(const NetworkPacket &np) override;
    void connected() override;

private Q_SLOTS:
    void configChanged();

private:
    void sendConfig();
};

#endif
