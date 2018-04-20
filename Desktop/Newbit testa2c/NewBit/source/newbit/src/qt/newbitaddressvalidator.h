// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef NEWBIT_QT_NEWBITADDRESSVALIDATOR_H
#define NEWBIT_QT_NEWBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class NewBitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit NewBitAddressEntryValidator(QObject* parent);

    State validate(QString& input, int& pos) const;
};

/** NewBit address widget validator, checks for a valid newbit address.
 */
class NewBitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit NewBitAddressCheckValidator(QObject* parent);

    State validate(QString& input, int& pos) const;
};

#endif // NEWBIT_QT_NEWBITADDRESSVALIDATOR_H
