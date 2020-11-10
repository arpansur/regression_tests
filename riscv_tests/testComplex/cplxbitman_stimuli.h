/*
 * Copyright (C) 2018 ETH Zurich and University of Bologna
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

/* 
 * Mantainer: Luca Valente, luca.valente2@unibo.it
 */
#ifndef CLPBITMAN
#define CLPBITMAN
int cplxbitman_opA[] = {
0x2058aacd,
0x99c1628,
0x3d1095b3,
0xb5a7317f,
0xe9785a99,
0x87435b57,
0x27f0048d,
0x626f1a89,
0x3bd9270d,
0xdbd3a924,
0x2019aaee,
0x4c19f22e,
0x3620b449,
0xa5941f54,
0x5e159c30,
0x46fdf426,
0xa4e7e6d,
0x14205099,
0x8218475e,
0xa1f8c9c8,
0x251f6b91,
0x701e293b,
0x43c44d10,
0x741dd28e,
0x7bb27f9d,
0x2a8c4ff0,
0x421f9bcb,
0x501476a5,
0x95f9783f,
0x146ff5a9,
0xe9cff40e,
0x727c5b6c,
0xac06f41e,
0x3b7c869c,
0x50642e1e,
0x99afdd74,
0x6af7584,
0xc29409ce,
0xdc5c4a74,
0xca1136b1,
0x86a1580e,
0xf3d9f49d,
0x6b42c8c0,
0x40ff43ed,
0x3996013b,
0xf54a556e,
0xb0db2366,
0x178467c6,
0xee625ce1,
0x8aff5300,
0x30753ec7,
0xb44b24af,
0x2e7d3724,
0x819876df,
0xad900ad9,
0x62e74baa,
0x40473431,
0xfcf256c0,
0x9aadab8a,
0xacc53df1,
0x9360d444,
0xf7aaa20f,
0x9d5443b,
0xa11c0f2e,
0x622ef838,
0x36ff2c1b,
0x50ca92a3,
0xc9c8eb4a,
0x62297f47,
0x8a204b60,
0x970a0fb9,
0x43eaed07,
0x43c7d752,
0x82dc40dc,
0x7ecede75,
0xb2b92fa1,
0xd1b1122e,
0x5669aa63,
0xb991db86,
0xd3bef785,
0x23a01bbf,
0xae630abd,
0xf607746b,
0xf3b2782b,
0xc38b5830,
0x67e97dd3,
0x6ada5a96,
0x31e8abd4,
0xecb0aea2,
0x8d17b4c4,
0xe4656b7e,
0x7dac3fd0,
0xea33b616,
0x919dd415,
0xcb9aa3c4,
0xbf83655b,
0x7019ef3b,
0x63a66de6,
0xe6116620,
0xbe515758,
};

int cplxbitman_opB[] = {
0xd52ba99d,
0x433263a,
0xd20e4006,
0xeea8361b,
0xeadfbebf,
0x2a3d7bbf,
0xbb8fcf44,
0x855ba7ea,
0x7bffa5c2,
0x498616f8,
0x7c53479a,
0x36d50909,
0x76f0ec6c,
0x528d9a7b,
0xf1d35d01,
0x69e10de,
0x3718c6ff,
0x7050ad1,
0x40ec0927,
0xc7e6f5ad,
0x716c2bcb,
0xfb10f223,
0x9a0d2cfb,
0xd2bd806b,
0x9763160d,
0x5da71c43,
0x254c13b6,
0x23947c,
0x2ef79c3c,
0xf93e52b0,
0x638e20ca,
0xe7c9ffdc,
0xaae9aa6,
0xa3cdeece,
0xe47b4b9a,
0x77666bb3,
0x5dd755e7,
0x82e27276,
0xf2e1f7e4,
0xdf1559f,
0x71e28a44,
0x9dfa6b98,
0x14972f,
0x336b9e1d,
0xf0cd2f0b,
0x4fd62ca9,
0x2c86545b,
0xef02379f,
0x266e3734,
0x82ce92cf,
0xfe830ae9,
0x60d1fa34,
0x6caa5c5a,
0x543ee3b3,
0x39535f8b,
0xe9cf6230,
0xcdc8ab35,
0x426487ca,
0x25e7cddd,
0xfce875d0,
0xa27916b5,
0x6b104cbe,
0x845eceff,
0x6335a12,
0xece2aacc,
0xb5b58902,
0x8336eb65,
0x47bf1686,
0xfa3aefe1,
0x4f6c9bfd,
0xfe2d338d,
0xdec2393c,
0xc106cbf6,
0x99d32127,
0x96f7e6ed,
0xfda296bb,
0xe37a3970,
0x87068b3,
0xc2c567d8,
0x12a40ea3,
0x97a5afa7,
0x9b0cc859,
0xdee01adc,
0xabde2cb,
0x7ec9d91a,
0xca75a29,
0x93657cf6,
0x48eceb69,
0xc90546b,
0x3b59e2bf,
0x797ba387,
0xdcf838fb,
0xa1ae5cf5,
0xc4cde568,
0xf40b6474,
0x141bd771,
0x9fca8bb1,
0xa68daf28,
0x91f37eaa,
0x57c4b14a,
};

int cplxpack_opC[] = {
0x2058d52b,
0x99c0433,
0x3d10d20e,
0xb5a7eea8,
0xe978eadf,
0x87432a3d,
0x27f0bb8f,
0x626f855b,
0x3bd97bff,
0xdbd34986,
0x20197c53,
0x4c1936d5,
0x362076f0,
0xa594528d,
0x5e15f1d3,
0x46fd069e,
0xa4e3718,
0x14200705,
0x821840ec,
0xa1f8c7e6,
0x251f716c,
0x701efb10,
0x43c49a0d,
0x741dd2bd,
0x7bb29763,
0x2a8c5da7,
0x421f254c,
0x50140023,
0x95f92ef7,
0x146ff93e,
0xe9cf638e,
0x727ce7c9,
0xac060aae,
0x3b7ca3cd,
0x5064e47b,
0x99af7766,
0x6af5dd7,
0xc29482e2,
0xdc5cf2e1,
0xca110df1,
0x86a171e2,
0xf3d99dfa,
0x6b420014,
0x40ff336b,
0x3996f0cd,
0xf54a4fd6,
0xb0db2c86,
0x1784ef02,
0xee62266e,
0x8aff82ce,
0x3075fe83,
0xb44b60d1,
0x2e7d6caa,
0x8198543e,
0xad903953,
0x62e7e9cf,
0x4047cdc8,
0xfcf24264,
0x9aad25e7,
0xacc5fce8,
0x9360a279,
0xf7aa6b10,
0x9d5845e,
0xa11c0633,
0x622eece2,
0x36ffb5b5,
0x50ca8336,
0xc9c847bf,
0x6229fa3a,
0x8a204f6c,
0x970afe2d,
0x43eadec2,
0x43c7c106,
0x82dc99d3,
0x7ece96f7,
0xb2b9fda2,
0xd1b1e37a,
0x56690870,
0xb991c2c5,
0xd3be12a4,
0x23a097a5,
0xae639b0c,
0xf607dee0,
0xf3b20abd,
0xc38b7ec9,
0x67e90ca7,
0x6ada9365,
0x31e848ec,
0xecb00c90,
0x8d173b59,
0xe465797b,
0x7dacdcf8,
0xea33a1ae,
0x919dc4cd,
0xcb9af40b,
0xbf83141b,
0x70199fca,
0x63a6a68d,
0xe61191f3,
0xbe5157c4,
};

#endif