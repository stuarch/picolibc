#include "test.h"
 one_line_type gammaf_vec[] = {
{ 1, 0,123,__LINE__, 0x3ff9444d, 0xbc815e67, 0xbff33333, 0x33333333},	/* 1.57918=f(-1.2)*/
{ 1, 0,123,__LINE__, 0x3ffa119e, 0x5af00691, 0xbff30a3d, 0x70a3d70a},	/* 1.6293=f(-1.19)*/
{ 1, 0,123,__LINE__, 0x3ffaeb82, 0xd88fb2e3, 0xbff2e147, 0xae147ae1},	/* 1.6825=f(-1.18)*/
{ 1, 0,123,__LINE__, 0x3ffbd343, 0x8eecec14, 0xbff2b851, 0xeb851eb8},	/* 1.73908=f(-1.17)*/
{ 1, 0,123,__LINE__, 0x3ffcca67, 0x50ea5a8a, 0xbff28f5c, 0x28f5c28f},	/* 1.79941=f(-1.16)*/
{ 1, 0,123,__LINE__, 0x3ffdd2c0, 0xb17c6aca, 0xbff26666, 0x66666666},	/* 1.86395=f(-1.15)*/
{ 1, 0,123,__LINE__, 0x3ffeee83, 0xd9aff6ae, 0xbff23d70, 0xa3d70a3d},	/* 1.93323=f(-1.14)*/
{ 1, 0,123,__LINE__, 0x40001031, 0xa42ad9c3, 0xbff2147a, 0xe147ae14},	/* 2.00791=f(-1.13)*/
{ 1, 0,123,__LINE__, 0x4000b5db, 0xe8d4fb5a, 0xbff1eb85, 0x1eb851eb},	/* 2.0888=f(-1.12)*/
{ 1, 0,123,__LINE__, 0x40016a5d, 0xef7c4f7c, 0xbff1c28f, 0x5c28f5c2},	/* 2.17694=f(-1.11)*/
{ 1, 0,123,__LINE__, 0x4002306f, 0xe71e76b4, 0xbff19999, 0x99999999},	/* 2.27365=f(-1.1)*/
{ 1, 0,123,__LINE__, 0x40030ba7, 0x38de8aed, 0xbff170a3, 0xd70a3d70},	/* 2.38069=f(-1.09)*/
{ 1, 0,123,__LINE__, 0x400400de, 0xe7d0a56a, 0xbff147ae, 0x147ae147},	/* 2.50043=f(-1.08)*/
{ 1, 0,123,__LINE__, 0x400516e5, 0x90c3028f, 0xbff11eb8, 0x51eb851e},	/* 2.63618=f(-1.07)*/
{ 1, 0,123,__LINE__, 0x400657b5, 0xa24bcb95, 0xbff0f5c2, 0x8f5c28f5},	/* 2.79283=f(-1.06)*/
{ 1, 0,123,__LINE__, 0x4007d2c3, 0x7b320f6b, 0xbff0cccc, 0xcccccccc},	/* 2.97791=f(-1.05)*/
{ 1, 0,123,__LINE__, 0x4009a1f8, 0x5c940d14, 0xbff0a3d7, 0x0a3d70a3},	/* 3.20409=f(-1.04)*/
{ 1, 0,123,__LINE__, 0x400bf5e6, 0x27cf6d0c, 0xbff07ae1, 0x47ae147a},	/* 3.49507=f(-1.03)*/
{ 1, 0,123,__LINE__, 0x400f3b97, 0xb6c0f5e5, 0xbff051eb, 0x851eb851},	/* 3.9041=f(-1.02)*/
{ 1, 0,123,__LINE__, 0x40126780, 0x4dbe225d, 0xbff028f5, 0xc28f5c28},	/* 4.60108=f(-1.01)*/
{ 1, 0, 34,__LINE__, 0x7ff00000, 0x00000000, 0xbfefffff, 0xfffffffe},	/* inf=f(-1)*/
{ 8, 0,123,__LINE__, 0x40127028, 0xf2f32762, 0xbfefae14, 0x7ae147ac},	/* 4.60953=f(-0.99)*/
{ 8, 0,123,__LINE__, 0x400f5e39, 0x86115ad7, 0xbfef5c28, 0xf5c28f5a},	/* 3.92101=f(-0.98)*/
{ 9, 0,123,__LINE__, 0x400c29d7, 0xd0539fee, 0xbfef0a3d, 0x70a3d708},	/* 3.52043=f(-0.97)*/
{ 9, 0,123,__LINE__, 0x4009e738, 0x05eacb8b, 0xbfeeb851, 0xeb851eb6},	/* 3.2379=f(-0.96)*/
{ 9, 0,123,__LINE__, 0x40082950, 0x0d9eb719, 0xbfee6666, 0x66666664},	/* 3.02017=f(-0.95)*/
{ 9, 0,123,__LINE__, 0x4006bf8d, 0x14d133d9, 0xbfee147a, 0xe147ae12},	/* 2.84353=f(-0.94)*/
{ 9, 0,123,__LINE__, 0x40059006, 0x634ba715, 0xbfedc28f, 0x5c28f5c0},	/* 2.69532=f(-0.93)*/
{ 9, 0,123,__LINE__, 0x40048b44, 0xd5c89723, 0xbfed70a3, 0xd70a3d6e},	/* 2.568=f(-0.92)*/
{ 9, 0,123,__LINE__, 0x4003a74e, 0xfd7ca184, 0xbfed1eb8, 0x51eb851c},	/* 2.45669=f(-0.91)*/
{ 9, 0,123,__LINE__, 0x4002dd55, 0x591934e5, 0xbfeccccc, 0xccccccca},	/* 2.35807=f(-0.9)*/
{ 9, 0,123,__LINE__, 0x4002287d, 0x2ebb7164, 0xbfec7ae1, 0x47ae1478},	/* 2.26977=f(-0.89)*/
{ 9, 0,123,__LINE__, 0x40018530, 0x4198ac8d, 0xbfec28f5, 0xc28f5c26},	/* 2.19003=f(-0.88)*/
{ 9, 0,123,__LINE__, 0x4000f0b5, 0xf1f6569d, 0xbfebd70a, 0x3d70a3d4},	/* 2.11753=f(-0.87)*/
{ 9, 0,123,__LINE__, 0x400068f0, 0xae45c9e5, 0xbfeb851e, 0xb851eb82},	/* 2.05124=f(-0.86)*/
{ 9, 0,123,__LINE__, 0x3fffd867, 0x30405477, 0xbfeb3333, 0x33333330},	/* 1.99033=f(-0.85)*/
{ 9, 0,123,__LINE__, 0x3ffef249, 0xb18ab563, 0xbfeae147, 0xae147ade},	/* 1.93415=f(-0.84)*/
{10, 0,123,__LINE__, 0x3ffe1d54, 0x7df84dd4, 0xbfea8f5c, 0x28f5c28c},	/* 1.88216=f(-0.83)*/
{10, 0,123,__LINE__, 0x3ffd57b3, 0x889a14a5, 0xbfea3d70, 0xa3d70a3a},	/* 1.83391=f(-0.82)*/
{10, 0,123,__LINE__, 0x3ffc9fe0, 0x4d89becb, 0xbfe9eb85, 0x1eb851e8},	/* 1.78903=f(-0.81)*/
{10, 0,123,__LINE__, 0x3ffbf48f, 0xc30400d4, 0xbfe99999, 0x99999996},	/* 1.74721=f(-0.8)*/
{10, 0,123,__LINE__, 0x3ffb54a8, 0xb55eeea1, 0xbfe947ae, 0x147ae144},	/* 1.70817=f(-0.79)*/
{10, 0,123,__LINE__, 0x3ffabf39, 0x7b529e9a, 0xbfe8f5c2, 0x8f5c28f2},	/* 1.67169=f(-0.78)*/
{10, 0,123,__LINE__, 0x3ffa3371, 0x308635d2, 0xbfe8a3d7, 0x0a3d70a0},	/* 1.63756=f(-0.77)*/
{10, 0,123,__LINE__, 0x3ff9b09a, 0x4fd09381, 0xbfe851eb, 0x851eb84e},	/* 1.60562=f(-0.76)*/
{10, 0,123,__LINE__, 0x3ff93615, 0xf587ca47, 0xbfe7ffff, 0xfffffffc},	/* 1.5757=f(-0.75)*/
{10, 0,123,__LINE__, 0x3ff8c358, 0xd3e72afa, 0xbfe7ae14, 0x7ae147aa},	/* 1.54769=f(-0.74)*/
{10, 0,123,__LINE__, 0x3ff857e7, 0x7a3a15dc, 0xbfe75c28, 0xf5c28f58},	/* 1.52146=f(-0.73)*/
{10, 0,123,__LINE__, 0x3ff7f355, 0x1ffa9e8e, 0xbfe70a3d, 0x70a3d706},	/* 1.49691=f(-0.72)*/
{10, 0,123,__LINE__, 0x3ff79540, 0xbb78e2ec, 0xbfe6b851, 0xeb851eb4},	/* 1.47394=f(-0.71)*/
{10, 0,123,__LINE__, 0x3ff73d54, 0x37039bd4, 0xbfe66666, 0x66666662},	/* 1.45247=f(-0.7)*/
{10, 0,123,__LINE__, 0x3ff6eb42, 0xa5375317, 0xbfe6147a, 0xe147ae10},	/* 1.43244=f(-0.69)*/
{10, 0,123,__LINE__, 0x3ff69ec6, 0x7ab681e6, 0xbfe5c28f, 0x5c28f5be},	/* 1.41376=f(-0.68)*/
{10, 0,123,__LINE__, 0x3ff657a2, 0x11b2f3ac, 0xbfe570a3, 0xd70a3d6c},	/* 1.39639=f(-0.67)*/
{10, 0,123,__LINE__, 0x3ff6159d, 0xe9e01371, 0xbfe51eb8, 0x51eb851a},	/* 1.38028=f(-0.66)*/
{10, 0,123,__LINE__, 0x3ff5d888, 0x23156ab9, 0xbfe4cccc, 0xccccccc8},	/* 1.36536=f(-0.65)*/
{11, 0,123,__LINE__, 0x3ff5a033, 0xc25bdfc6, 0xbfe47ae1, 0x47ae1476},	/* 1.35161=f(-0.64)*/
{11, 0,123,__LINE__, 0x3ff56c78, 0xb267c483, 0xbfe428f5, 0xc28f5c24},	/* 1.33898=f(-0.63)*/
{11, 0,123,__LINE__, 0x3ff53d32, 0xb061f0be, 0xbfe3d70a, 0x3d70a3d2},	/* 1.32744=f(-0.62)*/
{11, 0,123,__LINE__, 0x3ff51241, 0xceaa2d23, 0xbfe3851e, 0xb851eb80},	/* 1.31696=f(-0.61)*/
{11, 0,123,__LINE__, 0x3ff4eb88, 0xd4c6eb24, 0xbfe33333, 0x3333332e},	/* 1.3075=f(-0.6)*/
{11, 0,123,__LINE__, 0x3ff4c8ee, 0x29357c3c, 0xbfe2e147, 0xae147adc},	/* 1.29906=f(-0.59)*/
{11, 0,123,__LINE__, 0x3ff4aa5b, 0x29b142d4, 0xbfe28f5c, 0x28f5c28a},	/* 1.29159=f(-0.58)*/
{11, 0,123,__LINE__, 0x3ff48fbc, 0x26d24de4, 0xbfe23d70, 0xa3d70a38},	/* 1.28509=f(-0.57)*/
{11, 0,123,__LINE__, 0x3ff478ff, 0xbc0cdd34, 0xbfe1eb85, 0x1eb851e6},	/* 1.27954=f(-0.56)*/
{11, 0,123,__LINE__, 0x3ff46616, 0xd1a2c473, 0xbfe19999, 0x99999994},	/* 1.27492=f(-0.55)*/
{11, 0,123,__LINE__, 0x3ff456f5, 0x3c8fee3f, 0xbfe147ae, 0x147ae142},	/* 1.27123=f(-0.54)*/
{11, 0,123,__LINE__, 0x3ff44b90, 0x8f7d180a, 0xbfe0f5c2, 0x8f5c28f0},	/* 1.26845=f(-0.53)*/
{11, 0,123,__LINE__, 0x3ff443e0, 0xb66a51a9, 0xbfe0a3d7, 0x0a3d709e},	/* 1.26657=f(-0.52)*/
{11, 0,123,__LINE__, 0x3ff43fdf, 0xcd32a1fd, 0xbfe051eb, 0x851eb84c},	/* 1.26559=f(-0.51)*/
{11, 0,123,__LINE__, 0x3ff43f89, 0x9aeaec7e, 0xbfdfffff, 0xfffffff4},	/* 1.26551=f(-0.5)*/
{11, 0,123,__LINE__, 0x3ff442dc, 0xa2f723c2, 0xbfdf5c28, 0xf5c28f50},	/* 1.26632=f(-0.49)*/
{11, 0,123,__LINE__, 0x3ff449d8, 0xe516e212, 0xbfdeb851, 0xeb851eac},	/* 1.26803=f(-0.48)*/
{11, 0,123,__LINE__, 0x3ff45480, 0x7ca92c08, 0xbfde147a, 0xe147ae08},	/* 1.27063=f(-0.47)*/
{12, 0,123,__LINE__, 0x3ff462d7, 0x91a686d4, 0xbfdd70a3, 0xd70a3d64},	/* 1.27413=f(-0.46)*/
{12, 0,123,__LINE__, 0x3ff474e4, 0xc7a52151, 0xbfdccccc, 0xccccccc0},	/* 1.27854=f(-0.45)*/
{12, 0,123,__LINE__, 0x3ff48ab0, 0x9e3e2944, 0xbfdc28f5, 0xc28f5c1c},	/* 1.28386=f(-0.44)*/
{12, 0,123,__LINE__, 0x3ff4a445, 0x80a3474e, 0xbfdb851e, 0xb851eb78},	/* 1.29011=f(-0.43)*/
{12, 0,123,__LINE__, 0x3ff4c1b0, 0xd54ea1fd, 0xbfdae147, 0xae147ad4},	/* 1.29729=f(-0.42)*/
{12, 0,123,__LINE__, 0x3ff4e301, 0xef1dd9e4, 0xbfda3d70, 0xa3d70a30},	/* 1.30542=f(-0.41)*/
{12, 0,123,__LINE__, 0x3ff5084b, 0x0b78ad1e, 0xbfd99999, 0x9999998c},	/* 1.31452=f(-0.4)*/
{12, 0,123,__LINE__, 0x3ff531a1, 0x02b14cc9, 0xbfd8f5c2, 0x8f5c28e8},	/* 1.32462=f(-0.39)*/
{12, 0,123,__LINE__, 0x3ff55f1b, 0x99d9ff88, 0xbfd851eb, 0x851eb844},	/* 1.33572=f(-0.38)*/
{12, 0,123,__LINE__, 0x3ff590d6, 0x1f7215c4, 0xbfd7ae14, 0x7ae147a0},	/* 1.34786=f(-0.37)*/
{12, 0,123,__LINE__, 0x3ff5c6ef, 0x0d4e9ed0, 0xbfd70a3d, 0x70a3d6fc},	/* 1.36107=f(-0.36)*/
{12, 0,123,__LINE__, 0x3ff60188, 0x970f11be, 0xbfd66666, 0x66666658},	/* 1.37537=f(-0.35)*/
{13, 0,123,__LINE__, 0x3ff640c8, 0xed86d33c, 0xbfd5c28f, 0x5c28f5b4},	/* 1.39082=f(-0.34)*/
{13, 0,123,__LINE__, 0x3ff684db, 0x696097ac, 0xbfd51eb8, 0x51eb8510},	/* 1.40744=f(-0.33)*/
{13, 0,123,__LINE__, 0x3ff6cdef, 0xbd2cb4dc, 0xbfd47ae1, 0x47ae146c},	/* 1.42528=f(-0.32)*/
{13, 0,123,__LINE__, 0x3ff71c3c, 0x38ff2402, 0xbfd3d70a, 0x3d70a3c8},	/* 1.44439=f(-0.31)*/
{13, 0,123,__LINE__, 0x3ff76ffc, 0x037d485a, 0xbfd33333, 0x33333324},	/* 1.46484=f(-0.3)*/
{13, 0,123,__LINE__, 0x3ff7c973, 0x1cad0816, 0xbfd28f5c, 0x28f5c280},	/* 1.48668=f(-0.29)*/
{13, 0,123,__LINE__, 0x3ff828ec, 0x425ffdae, 0xbfd1eb85, 0x1eb851dc},	/* 1.50999=f(-0.28)*/
{13, 0,123,__LINE__, 0x3ff88ebb, 0xc79e622c, 0xbfd147ae, 0x147ae138},	/* 1.53485=f(-0.27)*/
{13, 0,123,__LINE__, 0x3ff8fb41, 0x183c5f38, 0xbfd0a3d7, 0x0a3d7094},	/* 1.56134=f(-0.26)*/
{13, 0,123,__LINE__, 0x3ff96ee6, 0x7e189ec1, 0xbfcfffff, 0xffffffe0},	/* 1.58958=f(-0.25)*/
{13, 0,123,__LINE__, 0x3ff9ea25, 0xb5e0f7c9, 0xbfceb851, 0xeb851e98},	/* 1.61966=f(-0.24)*/
{13, 0,123,__LINE__, 0x3ffa6d88, 0x18492cfd, 0xbfcd70a3, 0xd70a3d50},	/* 1.65174=f(-0.23)*/
{13, 0,123,__LINE__, 0x3ffaf9aa, 0x55530f31, 0xbfcc28f5, 0xc28f5c08},	/* 1.68595=f(-0.22)*/
{13, 0,123,__LINE__, 0x3ffb8f40, 0x1532bc89, 0xbfcae147, 0xae147ac0},	/* 1.72247=f(-0.21)*/
{14, 0,123,__LINE__, 0x3ffc2f17, 0xf9097035, 0xbfc99999, 0x99999978},	/* 1.7615=f(-0.2)*/
{14, 0,123,__LINE__, 0x3ffcda22, 0x161be6d4, 0xbfc851eb, 0x851eb830},	/* 1.80326=f(-0.19)*/
{14, 0,123,__LINE__, 0x3ffd9175, 0x1d98a89f, 0xbfc70a3d, 0x70a3d6e8},	/* 1.84801=f(-0.18)*/
{14, 0,123,__LINE__, 0x3ffe5659, 0x92dbbe55, 0xbfc5c28f, 0x5c28f5a0},	/* 1.89608=f(-0.17)*/
{14, 0,123,__LINE__, 0x3fff2a54, 0xb3a4a033, 0xbfc47ae1, 0x47ae1458},	/* 1.94783=f(-0.16)*/
{14, 0,123,__LINE__, 0x4000079b, 0xaa290a03, 0xbfc33333, 0x33333310},	/* 2.00371=f(-0.15)*/
{14, 0,123,__LINE__, 0x4000839a, 0x6d945439, 0xbfc1eb85, 0x1eb851c8},	/* 2.06426=f(-0.14)*/
{15, 0,123,__LINE__, 0x40010a7e, 0xe42ad9c3, 0xbfc0a3d7, 0x0a3d7080},	/* 2.13012=f(-0.13)*/
{15, 0,123,__LINE__, 0x40019df4, 0xe86fbecb, 0xbfbeb851, 0xeb851e71},	/* 2.20213=f(-0.12)*/
{15, 0,123,__LINE__, 0x40024018, 0xceaaa3a2, 0xbfbc28f5, 0xc28f5be2},	/* 2.2813=f(-0.11)*/
{16, 0,123,__LINE__, 0x4002f3a2, 0x05d90518, 0xbfb99999, 0x99999953},	/* 2.36896=f(-0.1)*/
{16, 0,123,__LINE__, 0x4003bc25, 0x571dd837, 0xbfb70a3d, 0x70a3d6c4},	/* 2.46687=f(-0.09)*/
{16, 0,123,__LINE__, 0x40049e7c, 0xc519257b, 0xbfb47ae1, 0x47ae1435},	/* 2.57739=f(-0.08)*/
{16, 0,123,__LINE__, 0x4005a176, 0xad7d0c71, 0xbfb1eb85, 0x1eb851a6},	/* 2.70384=f(-0.07)*/
{16, 0,123,__LINE__, 0x4006cf0a, 0xa5ea6fe7, 0xbfaeb851, 0xeb851e2d},	/* 2.85109=f(-0.06)*/
{17, 0,123,__LINE__, 0x400836ae, 0xfe6e796f, 0xbfa99999, 0x9999990e},	/* 3.0267=f(-0.05)*/
{17, 0,123,__LINE__, 0x4009f24a, 0xbf250b00, 0xbfa47ae1, 0x47ae13ef},	/* 3.24331=f(-0.04)*/
{17, 0,123,__LINE__, 0x400c326f, 0x09cb30b3, 0xbf9eb851, 0xeb851da0},	/* 3.52463=f(-0.03)*/
{18, 0,123,__LINE__, 0x400f6425, 0x781da02d, 0xbf947ae1, 0x47ae1362},	/* 3.9239=f(-0.02)*/
{20, 0,123,__LINE__, 0x401271b0, 0x6e17e03c, 0xbf847ae1, 0x47ae1249},	/* 4.61102=f(-0.01)*/
{64, 0,123,__LINE__, 0x40414837, 0x20000000, 0x3cd19000, 0x00000000},	/* 34.5642=f(9.74915e-16)*/
{36, 0,123,__LINE__, 0x401265de, 0x11e81fc4, 0x3f847ae1, 0x47ae16ad},	/* 4.59948=f(0.01)*/
{37, 0,123,__LINE__, 0x400f34d9, 0x07e25fd3, 0x3f947ae1, 0x47ae1594},	/* 3.9008=f(0.02)*/
{36, 0,123,__LINE__, 0x400beb75, 0xf634cf4d, 0x3f9eb851, 0xeb851fd2},	/* 3.48997=f(0.03)*/
{40, 0,123,__LINE__, 0x4009939d, 0xc0daf500, 0x3fa47ae1, 0x47ae1508},	/* 3.19708=f(0.04)*/
{39, 0,123,__LINE__, 0x4007c043, 0xc1918691, 0x3fa99999, 0x99999a27},	/* 2.96888=f(0.05)*/
{37, 0,123,__LINE__, 0x400640d4, 0x9a159019, 0x3faeb851, 0xeb851f46},	/* 2.78166=f(0.06)*/
{36, 0,123,__LINE__, 0x4004fb66, 0x5282f38f, 0x3fb1eb85, 0x1eb85232},	/* 2.62275=f(0.07)*/
{37, 0,123,__LINE__, 0x4003e080, 0xbae6da85, 0x3fb47ae1, 0x47ae14c1},	/* 2.48462=f(0.08)*/
{36, 0,123,__LINE__, 0x4002e628, 0xe8e227c9, 0x3fb70a3d, 0x70a3d750},	/* 2.36238=f(0.09)*/
{37, 0,123,__LINE__, 0x4002058e, 0x3a26fae8, 0x3fb99999, 0x999999df},	/* 2.25271=f(0.1)*/
{36, 0,123,__LINE__, 0x400139d3, 0xf1555c5e, 0x3fbc28f5, 0xc28f5c6e},	/* 2.15324=f(0.11)*/
{36, 0,123,__LINE__, 0x40007f62, 0xd7904135, 0x3fbeb851, 0xeb851efd},	/* 2.0622=f(0.12)*/
{36, 0,123,__LINE__, 0x3fffa701, 0x37aa4c7a, 0x3fc0a3d7, 0x0a3d70c6},	/* 1.97827=f(0.13)*/
{37, 0,123,__LINE__, 0x3ffe681c, 0x24d7578e, 0x3fc1eb85, 0x1eb8520e},	/* 1.90042=f(0.14)*/
{36, 0,123,__LINE__, 0x3ffd3eb9, 0xabadebfa, 0x3fc33333, 0x33333356},	/* 1.82781=f(0.15)*/
{36, 0,123,__LINE__, 0x3ffc2823, 0x0c5b5fcd, 0x3fc47ae1, 0x47ae149e},	/* 1.7598=f(0.16)*/
{36, 0,123,__LINE__, 0x3ffb221f, 0xad2441ab, 0x3fc5c28f, 0x5c28f5e6},	/* 1.69583=f(0.17)*/
{38, 0,123,__LINE__, 0x3ffa2ad8, 0xa2675761, 0x3fc70a3d, 0x70a3d72e},	/* 1.63546=f(0.18)*/
{36, 0,123,__LINE__, 0x3ff940c3, 0x29e4192c, 0x3fc851eb, 0x851eb876},	/* 1.57831=f(0.19)*/
{37, 0,123,__LINE__, 0x3ff86290, 0xc6f68fcb, 0x3fc99999, 0x999999be},	/* 1.52406=f(0.2)*/
{36, 0,123,__LINE__, 0x3ff78f23, 0xeacd4377, 0x3fcae147, 0xae147b06},	/* 1.47245=f(0.21)*/
{36, 0,123,__LINE__, 0x3ff6c586, 0xeaacf0cf, 0x3fcc28f5, 0xc28f5c4e},	/* 1.42322=f(0.22)*/
{37, 0,123,__LINE__, 0x3ff604e4, 0x67b6d303, 0x3fcd70a3, 0xd70a3d96},	/* 1.37619=f(0.23)*/
{36, 0,123,__LINE__, 0x3ff54c82, 0x8a1f0837, 0x3fceb851, 0xeb851ede},	/* 1.33118=f(0.24)*/
{39, 0,123,__LINE__, 0x3ff49bbd, 0x81e7613f, 0x3fd00000, 0x00000013},	/* 1.28802=f(0.25)*/
{37, 0,123,__LINE__, 0x3ff3f205, 0x27c3a0c8, 0x3fd0a3d7, 0x0a3d70b7},	/* 1.24659=f(0.26)*/
{37, 0,123,__LINE__, 0x3ff34ed9, 0x38619dd4, 0x3fd147ae, 0x147ae15b},	/* 1.20675=f(0.27)*/
{38, 0,123,__LINE__, 0x3ff2b1c7, 0x7da00252, 0x3fd1eb85, 0x1eb851ff},	/* 1.1684=f(0.28)*/
{38, 0,123,__LINE__, 0x3ff21a69, 0xa352f7ea, 0x3fd28f5c, 0x28f5c2a3},	/* 1.13145=f(0.29)*/
{38, 0,123,__LINE__, 0x3ff18863, 0x7c82b7a6, 0x3fd33333, 0x33333347},	/* 1.0958=f(0.3)*/
{37, 0,123,__LINE__, 0x3ff0fb62, 0x0700dbfe, 0x3fd3d70a, 0x3d70a3eb},	/* 1.06137=f(0.31)*/
{38, 0,123,__LINE__, 0x3ff0731a, 0x02d34b24, 0x3fd47ae1, 0x47ae148f},	/* 1.0281=f(0.32)*/
{36, 0,123,__LINE__, 0x3fefde8d, 0xad3ed0a9, 0x3fd51eb8, 0x51eb8533},	/* 0.995917=f(0.33)*/
{37, 0,123,__LINE__, 0x3feedf54, 0xa4f25988, 0x3fd5c28f, 0x5c28f5d7},	/* 0.964762=f(0.34)*/
{35, 0,123,__LINE__, 0x3fede816, 0xd1e1dc84, 0x3fd66666, 0x6666667b},	/* 0.934581=f(0.35)*/
{37, 0,123,__LINE__, 0x3fecf86b, 0x6562c260, 0x3fd70a3d, 0x70a3d71f},	/* 0.905325=f(0.36)*/
{39, 0,123,__LINE__, 0x3fec0ff2, 0xc11bd478, 0x3fd7ae14, 0x7ae147c3},	/* 0.876947=f(0.37)*/
{36, 0,123,__LINE__, 0x3feb2e53, 0xcc4c00f0, 0x3fd851eb, 0x851eb867},	/* 0.849405=f(0.38)*/
{37, 0,123,__LINE__, 0x3fea533c, 0xfa9d666e, 0x3fd8f5c2, 0x8f5c290b},	/* 0.822661=f(0.39)*/
{36, 0,123,__LINE__, 0x3fe97e62, 0x690ea5c5, 0x3fd99999, 0x999999af},	/* 0.796678=f(0.4)*/
{39, 0,123,__LINE__, 0x3fe8af7e, 0x21c44c38, 0x3fda3d70, 0xa3d70a53},	/* 0.771422=f(0.41)*/
{36, 0,123,__LINE__, 0x3fe7e64e, 0xd562bc06, 0x3fdae147, 0xae147af7},	/* 0.746864=f(0.42)*/
{39, 0,123,__LINE__, 0x3fe72297, 0x7eb97163, 0x3fdb851e, 0xb851eb9b},	/* 0.722973=f(0.43)*/
{38, 0,123,__LINE__, 0x3fe6641f, 0xc383ad79, 0x3fdc28f5, 0xc28f5c3f},	/* 0.699722=f(0.44)*/
{34, 0,123,__LINE__, 0x3fe5aab2, 0xb0b5bd5e, 0x3fdccccc, 0xcccccce3},	/* 0.677087=f(0.45)*/
{38, 0,123,__LINE__, 0x3fe4f61e, 0x5cb2f259, 0x3fdd70a3, 0xd70a3d87},	/* 0.655044=f(0.46)*/
{37, 0,123,__LINE__, 0x3fe44634, 0xc6ada7f1, 0x3fde147a, 0xe147ae2b},	/* 0.63357=f(0.47)*/
{36, 0,123,__LINE__, 0x3fe39aca, 0x35d23bdd, 0x3fdeb851, 0xeb851ecf},	/* 0.612645=f(0.48)*/
{37, 0,123,__LINE__, 0x3fe2f3b5, 0x7a11b87b, 0x3fdf5c28, 0xf5c28f73},	/* 0.59225=f(0.49)*/
{36, 0,123,__LINE__, 0x3fe250d0, 0x4a2a2705, 0x3fe00000, 0x0000000b},	/* 0.572365=f(0.5)*/
{37, 0,123,__LINE__, 0x3fe1b1f6, 0x259abc06, 0x3fe051eb, 0x851eb85d},	/* 0.552974=f(0.51)*/
{36, 0,123,__LINE__, 0x3fe11704, 0xd32b5cae, 0x3fe0a3d7, 0x0a3d70af},	/* 0.53406=f(0.52)*/
{39, 0,123,__LINE__, 0x3fe07fdb, 0xe105cfec, 0x3fe0f5c2, 0x8f5c2901},	/* 0.515608=f(0.53)*/
{35, 0,123,__LINE__, 0x3fdfd8b8, 0x8dc04704, 0x3fe147ae, 0x147ae153},	/* 0.497603=f(0.54)*/
{37, 0,123,__LINE__, 0x3fdeb8d3, 0x3974ee32, 0x3fe19999, 0x999999a5},	/* 0.480031=f(0.55)*/
{35, 0,123,__LINE__, 0x3fdd9fd0, 0x0fcc8b2f, 0x3fe1eb85, 0x1eb851f7},	/* 0.462879=f(0.56)*/
{33, 0,123,__LINE__, 0x3fdc8d7a, 0xe4b6c86e, 0x3fe23d70, 0xa3d70a49},	/* 0.446135=f(0.57)*/
{37, 0,123,__LINE__, 0x3fdb81a1, 0xd93af4ae, 0x3fe28f5c, 0x28f5c29b},	/* 0.429787=f(0.58)*/
{37, 0,123,__LINE__, 0x3fda7c15, 0xdb2a0f0f, 0x3fe2e147, 0xae147aed},	/* 0.413824=f(0.59)*/
{36, 0,123,__LINE__, 0x3fd97ca9, 0xace4536f, 0x3fe33333, 0x3333333f},	/* 0.398234=f(0.6)*/
{37, 0,123,__LINE__, 0x3fd88333, 0x45574b76, 0x3fe3851e, 0xb851eb91},	/* 0.383008=f(0.61)*/
{39, 0,123,__LINE__, 0x3fd78f89, 0x3e783d09, 0x3fe3d70a, 0x3d70a3e3},	/* 0.368136=f(0.62)*/
{36, 0,123,__LINE__, 0x3fd6a184, 0xb660edf5, 0x3fe428f5, 0xc28f5c35},	/* 0.353608=f(0.63)*/
{36, 0,123,__LINE__, 0x3fd5b900, 0x769080e6, 0x3fe47ae1, 0x47ae1487},	/* 0.339417=f(0.64)*/
{36, 0,123,__LINE__, 0x3fd4d5d8, 0xf3aa551d, 0x3fe4cccc, 0xccccccd9},	/* 0.325552=f(0.65)*/
{34, 0,123,__LINE__, 0x3fd3f7eb, 0xd87fb23d, 0x3fe51eb8, 0x51eb852b},	/* 0.312007=f(0.66)*/
{34, 0,123,__LINE__, 0x3fd31f19, 0x39343150, 0x3fe570a3, 0xd70a3d7d},	/* 0.298773=f(0.67)*/
{34, 0,123,__LINE__, 0x3fd24b41, 0x9525f868, 0x3fe5c28f, 0x5c28f5cf},	/* 0.285843=f(0.68)*/
{35, 0,123,__LINE__, 0x3fd17c46, 0xeb22b3a3, 0x3fe6147a, 0xe147ae21},	/* 0.27321=f(0.69)*/
{38, 0,123,__LINE__, 0x3fd0b20c, 0xa3f190b0, 0x3fe66666, 0x66666673},	/* 0.260867=f(0.7)*/
{35, 0,123,__LINE__, 0x3fcfd8ee, 0x2438e89e, 0x3fe6b851, 0xeb851ec5},	/* 0.248808=f(0.71)*/
{42, 0,123,__LINE__, 0x3fce56d7, 0x002b0b94, 0x3fe70a3d, 0x70a3d717},	/* 0.237025=f(0.72)*/
{34, 0,123,__LINE__, 0x3fccdda2, 0x2e2f511c, 0x3fe75c28, 0xf5c28f69},	/* 0.225514=f(0.73)*/
{40, 0,123,__LINE__, 0x3fcb6d1e, 0x60c6a82d, 0x3fe7ae14, 0x7ae147bb},	/* 0.214268=f(0.74)*/
{35, 0,123,__LINE__, 0x3fca051c, 0x53c1adc7, 0x3fe80000, 0x0000000d},	/* 0.203281=f(0.75)*/
{39, 0,123,__LINE__, 0x3fc8a56e, 0x817b63f8, 0x3fe851eb, 0x851eb85f},	/* 0.192549=f(0.76)*/
{34, 0,123,__LINE__, 0x3fc74de9, 0x7bce5171, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.182065=f(0.77)*/
{35, 0,123,__LINE__, 0x3fc5fe63, 0x256b0b31, 0x3fe8f5c2, 0x8f5c2903},	/* 0.171826=f(0.78)*/
{36, 0,123,__LINE__, 0x3fc4b6b2, 0x55088afa, 0x3fe947ae, 0x147ae155},	/* 0.161825=f(0.79)*/
{35, 0,123,__LINE__, 0x3fc376b0, 0xe7dff963, 0x3fe99999, 0x999999a7},	/* 0.15206=f(0.8)*/
{36, 0,123,__LINE__, 0x3fc23e38, 0x93b209ab, 0x3fe9eb85, 0x1eb851f9},	/* 0.142524=f(0.81)*/
{37, 0,123,__LINE__, 0x3fc10d24, 0xbb2f5ad5, 0x3fea3d70, 0xa3d70a4b},	/* 0.133214=f(0.82)*/
{41, 0,123,__LINE__, 0x3fbfc6a4, 0x207b22c8, 0x3fea8f5c, 0x28f5c29d},	/* 0.124125=f(0.83)*/
{37, 0,123,__LINE__, 0x3fbd813c, 0xe754a9d3, 0x3feae147, 0xae147aef},	/* 0.115253=f(0.84)*/
{37, 0,123,__LINE__, 0x3fbb49d0, 0xfbfab898, 0x3feb3333, 0x33333341},	/* 0.106595=f(0.85)*/
{35, 0,123,__LINE__, 0x3fb92022, 0x3746c36a, 0x3feb851e, 0xb851eb93},	/* 0.0981466=f(0.86)*/
{39, 0,123,__LINE__, 0x3fb703f1, 0xc1352c5e, 0x3febd70a, 0x3d70a3e5},	/* 0.0899039=f(0.87)*/
{36, 0,123,__LINE__, 0x3fb4f503, 0xccea6e55, 0x3fec28f5, 0xc28f5c37},	/* 0.0818636=f(0.88)*/
{35, 0,123,__LINE__, 0x3fb2f31e, 0x2891d38b, 0x3fec7ae1, 0x47ae1489},	/* 0.0740222=f(0.89)*/
{38, 0,123,__LINE__, 0x3fb0fe08, 0xdcd9635a, 0x3feccccc, 0xccccccdb},	/* 0.0663763=f(0.9)*/
{40, 0,123,__LINE__, 0x3fae2b18, 0xa0d79f07, 0x3fed1eb8, 0x51eb852d},	/* 0.0589225=f(0.91)*/
{35, 0,123,__LINE__, 0x3faa72ea, 0x8dda3734, 0x3fed70a3, 0xd70a3d7f},	/* 0.051658=f(0.92)*/
{35, 0,123,__LINE__, 0x3fa6d31f, 0x2d163ab0, 0x3fedc28f, 0x5c28f5d1},	/* 0.0445795=f(0.93)*/
{35, 0,123,__LINE__, 0x3fa34b52, 0xcbb309a4, 0x3fee147a, 0xe147ae23},	/* 0.037684=f(0.94)*/
{36, 0,123,__LINE__, 0x3f9fb649, 0x30a47354, 0x3fee6666, 0x66666675},	/* 0.0309688=f(0.95)*/
{35, 0,123,__LINE__, 0x3f99046d, 0x0a9a3aa6, 0x3feeb851, 0xeb851ec7},	/* 0.0244309=f(0.96)*/
{36, 0,123,__LINE__, 0x3f928057, 0xd6300915, 0x3fef0a3d, 0x70a3d719},	/* 0.0180677=f(0.97)*/
{35, 0,123,__LINE__, 0x3f8852b9, 0xeea5291e, 0x3fef5c28, 0xf5c28f6b},	/* 0.0118765=f(0.98)*/
{36, 0,123,__LINE__, 0x3f77fb34, 0x33627623, 0x3fefae14, 0x7ae147bd},	/* 0.0058548=f(0.99)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x3ff00000, 0x00000007},	/* 0=f(1)*/
{37, 0,123,__LINE__, 0xbf774eb6, 0xf8897572, 0x3ff028f5, 0xc28f5c30},	/* -0.0056903=f(1.01)*/
{40, 0,123,__LINE__, 0xbf86f9b6, 0xc0f5e4c3, 0x3ff051eb, 0x851eb859},	/* -0.0112185=f(1.02)*/
{37, 0,123,__LINE__, 0xbf90fc23, 0xe7b6860b, 0x3ff07ae1, 0x47ae1482},	/* -0.0165868=f(1.03)*/
{36, 0,123,__LINE__, 0xbf96521e, 0x4a068a14, 0x3ff0a3d7, 0x0a3d70ab},	/* -0.0217976=f(1.04)*/
{37, 0,123,__LINE__, 0xbf9b7f5d, 0x9907b57f, 0x3ff0cccc, 0xccccccd4},	/* -0.026853=f(1.05)*/
{36, 0,123,__LINE__, 0xbfa04238, 0x92f2e540, 0x3ff0f5c2, 0x8f5c28fd},	/* -0.0317552=f(1.06)*/
{36, 0,123,__LINE__, 0xbfa2b0f4, 0x30c0a3b3, 0x3ff11eb8, 0x51eb8526},	/* -0.0365063=f(1.07)*/
{36, 0,123,__LINE__, 0xbfa50c21, 0xf4295a8c, 0x3ff147ae, 0x147ae14f},	/* -0.0411082=f(1.08)*/
{36, 0,123,__LINE__, 0xbfa75406, 0x37a2bb58, 0x3ff170a3, 0xd70a3d78},	/* -0.0455629=f(1.09)*/
{37, 0,123,__LINE__, 0xbfa988e1, 0xc79dad01, 0x3ff19999, 0x999999a1},	/* -0.0498725=f(1.1)*/
{40, 0,123,__LINE__, 0xbfabaaf3, 0xdf13df1f, 0x3ff1c28f, 0x5c28f5ca},	/* -0.0540386=f(1.11)*/
{36, 0,123,__LINE__, 0xbfadba7a, 0x353ed69e, 0x3ff1eb85, 0x1eb851f3},	/* -0.0580633=f(1.12)*/
{36, 0,123,__LINE__, 0xbfafb7b1, 0x0ab670b5, 0x3ff2147a, 0xe147ae1c},	/* -0.0619483=f(1.13)*/
{37, 0,123,__LINE__, 0xbfb0d169, 0x9aff6adf, 0x3ff23d70, 0xa3d70a45},	/* -0.0656954=f(1.14)*/
{36, 0,123,__LINE__, 0xbfb1be0d, 0x17c6aca2, 0x3ff26666, 0x6666666e},	/* -0.0693062=f(1.15)*/
{36, 0,123,__LINE__, 0xbfb2a1df, 0x0ea5a89f, 0x3ff28f5c, 0x28f5c297},	/* -0.0727825=f(1.16)*/
{35, 0,123,__LINE__, 0xbfb37cfa, 0xeecec13f, 0x3ff2b851, 0xeb851ec0},	/* -0.0761258=f(1.17)*/
{36, 0,123,__LINE__, 0xbfb44f7b, 0x88fb2e37, 0x3ff2e147, 0xae147ae9},	/* -0.0793378=f(1.18)*/
{35, 0,123,__LINE__, 0xbfb5197b, 0xaf006909, 0x3ff30a3d, 0x70a3d712},	/* -0.0824201=f(1.19)*/
{ 0, 0,123,__LINE__, 0xc016dfac, 0xcd14780e, 0xc01921fb, 0x54442d18},	/* -5.71843=f(-6.28319)*/
{ 0, 0,123,__LINE__, 0xc00758af, 0x7a972fa5, 0xc012d97c, 0x7f3321d2},	/* -2.9183=f(-4.71239)*/
{ 9, 0,123,__LINE__, 0x3f8fe589, 0xe779af7d, 0xc00921fb, 0x54442d18},	/* 0.0155745=f(-3.14159)*/
{ 1, 0,123,__LINE__, 0x3feab00e, 0xe04725be, 0xbff921fb, 0x54442d18},	/* 0.833991=f(-1.5708)*/
{ 2, 0, 34,__LINE__, 0x7ff00000, 0x00000000, 0x00000000, 0x00000000},	/* inf=f(0)*/
{38, 0,123,__LINE__, 0xbfbdabdf, 0x02392df1, 0x3ff921fb, 0x54442d18},	/* -0.115904=f(1.5708)*/
{35, 0,123,__LINE__, 0x3fea7c79, 0x90000000, 0x400921fb, 0x54442d18},	/* 0.827695=f(3.14159)*/
{35, 0,123,__LINE__, 0x400608aa, 0x94000000, 0x4012d97c, 0x7f3321d2},	/* 2.75423=f(4.71239)*/
{ 2, 0, 34,__LINE__, 0x7ff00000, 0x00000000, 0xc03e0000, 0x00000000},	/* inf=f(-30)*/
{ 0, 0,123,__LINE__, 0xc050e289, 0x67d54b18, 0xc03c4ccc, 0xcccccccd},	/* -67.5396=f(-28.3)*/
{ 0, 0,123,__LINE__, 0xc04f0519, 0xec69797c, 0xc03a9999, 0x9999999a},	/* -62.0399=f(-26.6)*/
{ 0, 0,123,__LINE__, 0xc04bae30, 0x10add2e0, 0xc038e666, 0x66666667},	/* -55.3608=f(-24.9)*/
{ 0, 0,123,__LINE__, 0xc049480a, 0x9a66d41b, 0xc0373333, 0x33333334},	/* -50.5628=f(-23.2)*/
{ 0, 0,123,__LINE__, 0xc046e33b, 0x67e46d66, 0xc0358000, 0x00000001},	/* -45.7753=f(-21.5)*/
{ 0, 0,123,__LINE__, 0xc0440737, 0x21889925, 0xc033cccc, 0xccccccce},	/* -40.0564=f(-19.8)*/
{ 0, 0,123,__LINE__, 0xc0412f28, 0x5facc233, 0xc0321999, 0x9999999b},	/* -34.3684=f(-18.1)*/
{ 0, 0,123,__LINE__, 0xc03e9a68, 0xaeedd41f, 0xc0306666, 0x66666668},	/* -30.6032=f(-16.4)*/
{ 0, 0,123,__LINE__, 0xc039b925, 0x23b88867, 0xc02d6666, 0x6666666a},	/* -25.7232=f(-14.7)*/
{ 2, 0, 34,__LINE__, 0x7ff00000, 0x00000000, 0xc02a0000, 0x00000004},	/* inf=f(-13)*/
{ 0, 0,123,__LINE__, 0xc030e1df, 0xabab98a1, 0xc0269999, 0x9999999e},	/* -16.8823=f(-11.3)*/
{ 0, 0,123,__LINE__, 0xc029f3f9, 0x6c129663, 0xc0233333, 0x33333338},	/* -12.9765=f(-9.6)*/
{ 1, 0,123,__LINE__, 0xc02024e2, 0x3c0befc8, 0xc01f9999, 0x999999a3},	/* -8.07204=f(-7.9)*/
{ 0, 0,123,__LINE__, 0xc0151f75, 0xe5ba886a, 0xc018cccc, 0xccccccd6},	/* -5.28072=f(-6.2)*/
{ 0, 0,123,__LINE__, 0xc0068132, 0x2b156fd6, 0xc0120000, 0x00000009},	/* -2.81308=f(-4.5)*/
{11, 0,123,__LINE__, 0x3fc09d52, 0xebde3c87, 0xc0066666, 0x66666678},	/* 0.129801=f(-2.8)*/
{ 1, 0,123,__LINE__, 0x4002306f, 0xe71e76b4, 0xbff19999, 0x999999bd},	/* 2.27365=f(-1.1)*/
{36, 0,123,__LINE__, 0x3fd97ca9, 0xace4536f, 0x3fe33333, 0x333332ec},	/* 0.398234=f(0.6)*/
{36, 0,123,__LINE__, 0x3fc3bc7a, 0xa8255203, 0x40026666, 0x66666654},	/* 0.154189=f(2.3)*/
{64, 0,123,__LINE__, 0x3ffcab0c, 0x00000000, 0x400fffff, 0xffffffee},	/* 1.79176=f(4)*/
{35, 0,123,__LINE__, 0x401122c8, 0x50000000, 0x4016cccc, 0xccccccc4},	/* 4.28397=f(5.7)*/
{38, 0,123,__LINE__, 0x401d5c93, 0x23000000, 0x401d9999, 0x99999991},	/* 7.34041=f(7.4)*/
{35, 0,123,__LINE__, 0x4025a375, 0x0c3779e8, 0x40223333, 0x3333332f},	/* 10.8193=f(9.1)*/
{36, 0,123,__LINE__, 0x402d459e, 0xee137cf9, 0x40259999, 0x99999995},	/* 14.636=f(10.8)*/
{39, 0,123,__LINE__, 0x4032bbfe, 0x3ecae0e0, 0x4028ffff, 0xfffffffb},	/* 18.7343=f(12.5)*/
{36, 0,123,__LINE__, 0x40371300, 0x0c00456b, 0x402c6666, 0x66666661},	/* 23.0742=f(14.2)*/
{36, 0,123,__LINE__, 0x403ba020, 0x34ebc783, 0x402fcccc, 0xccccccc7},	/* 27.6255=f(15.9)*/
{37, 0,123,__LINE__, 0x40402eaf, 0xfaf1fce0, 0x40319999, 0x99999997},	/* 32.3647=f(17.6)*/
{38, 0,123,__LINE__, 0x4042a2f9, 0x1d4f9383, 0x40334ccc, 0xccccccca},	/* 37.2732=f(19.3)*/
{36, 0,123,__LINE__, 0x40452af5, 0x89dd0df3, 0x4034ffff, 0xfffffffd},	/* 42.3356=f(21)*/
{36, 0,123,__LINE__, 0x4047c501, 0xafa0261b, 0x4036b333, 0x33333330},	/* 47.5391=f(22.7)*/
{38, 0,123,__LINE__, 0x404a6fba, 0xe2715dff, 0x40386666, 0x66666663},	/* 52.8729=f(24.4)*/
{37, 0,123,__LINE__, 0x404d29f1, 0x39876d1b, 0x403a1999, 0x99999996},	/* 58.3277=f(26.1)*/
{36, 0,123,__LINE__, 0x404ff29d, 0x11cb635a, 0x403bcccc, 0xccccccc9},	/* 63.8954=f(27.8)*/
{38, 0,123,__LINE__, 0x4051646b, 0xdd7cf160, 0x403d7fff, 0xfffffffc},	/* 69.5691=f(29.5)*/
0,};
test_gammaf(m)   {run_vector_1(m,gammaf_vec,(char *)(gammaf),"gammaf","ff");   }	
