// Copyright (c) 2017 The PIVX developers
// Copyright (c) 2017-2018 The HUZU developers
// Copyright (c) 2018-2019 The ZIJA developers
// Copyright (c) 2019 The 2PAY developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZIJA_BLOCKSIGNATURE_H
#define ZIJA_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block);

#endif //ZIJA_BLOCKSIGNATURE_H
