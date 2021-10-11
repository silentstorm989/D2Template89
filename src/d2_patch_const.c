/**
 * D2Template89
 * Copyright 2021 Mir Drualga
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/****************************************************************************
*                                                                           *
*   D2PatchConst.h                                                          *
*   Copyright (C) Olivier Verville                                          *
*                                                                           *
*   Licensed under the Apache License, Version 2.0 (the "License");         *
*   you may not use this file except in compliance with the License.        *
*   You may obtain a copy of the License at                                 *
*                                                                           *
*   http://www.apache.org/licenses/LICENSE-2.0                              *
*                                                                           *
*   Unless required by applicable law or agreed to in writing, software     *
*   distributed under the License is distributed on an "AS IS" BASIS,       *
*   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.*
*   See the License for the specific language governing permissions and     *
*   limitations under the License.                                          *
*                                                                           *
*---------------------------------------------------------------------------*
*                                                                           *
*   https://github.com/olivier-verville/D2Template                          *
*                                                                           *
*   This file defines various expressions to simplify the declaration of    *
*   patches in D2Patch.h, and you shouldn't modify this file unless you     *
*   know what you're doing.                                                 *
*                                                                           *
*****************************************************************************/

#ifndef D2TEMPLATE89_D2PATCHCONST_H_
#define D2TEMPLATE89_D2PATCHCONST_H_

const unsigned char kPatchJmp[1] = { 0xE9 };
const unsigned char kPatchCall[1] = { 0xE8 };
const unsigned char kPatchRet[1] = { 0xC3 };
const unsigned char kPatchRetX[1] = { 0xC2 };
const unsigned char kPatchNop[1] = { 0x90 };

#endif /* D2TEMPLATE89_D2PATCHCONST_H_ */
