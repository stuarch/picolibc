#include "test.h"
 one_line_type asinf_vec[] = {
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff33333, 0x33333333},	/* nan=f(-1.2)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff30a3d, 0x70a3d70a},	/* nan=f(-1.19)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff2e147, 0xae147ae1},	/* nan=f(-1.18)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff2b851, 0xeb851eb8},	/* nan=f(-1.17)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff28f5c, 0x28f5c28f},	/* nan=f(-1.16)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff26666, 0x66666666},	/* nan=f(-1.15)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff23d70, 0xa3d70a3d},	/* nan=f(-1.14)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff2147a, 0xe147ae14},	/* nan=f(-1.13)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff1eb85, 0x1eb851eb},	/* nan=f(-1.12)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff1c28f, 0x5c28f5c2},	/* nan=f(-1.11)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff19999, 0x99999999},	/* nan=f(-1.1)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff170a3, 0xd70a3d70},	/* nan=f(-1.09)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff147ae, 0x147ae147},	/* nan=f(-1.08)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff11eb8, 0x51eb851e},	/* nan=f(-1.07)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff0f5c2, 0x8f5c28f5},	/* nan=f(-1.06)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff0cccc, 0xcccccccc},	/* nan=f(-1.05)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff0a3d7, 0x0a3d70a3},	/* nan=f(-1.04)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff07ae1, 0x47ae147a},	/* nan=f(-1.03)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff051eb, 0x851eb851},	/* nan=f(-1.02)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff028f5, 0xc28f5c28},	/* nan=f(-1.01)*/
{36, 0,123,__LINE__, 0xbff921fb, 0x54442d18, 0xbfefffff, 0xfffffffe},	/* -1.5708=f(-1)*/
{39, 0,123,__LINE__, 0xbff6de3c, 0x81598eb5, 0xbfefae14, 0x7ae147ac},	/* -1.42926=f(-0.99)*/
{40, 0,123,__LINE__, 0xbff5ed69, 0x1f3e5c14, 0xbfef5c28, 0xf5c28f5a},	/* -1.37046=f(-0.98)*/
{37, 0,123,__LINE__, 0xbff53425, 0x582f7e9e, 0xbfef0a3d, 0x70a3d708},	/* -1.32523=f(-0.97)*/
{35, 0,123,__LINE__, 0xbff4978f, 0x8e9455ea, 0xbfeeb851, 0xeb851eb6},	/* -1.287=f(-0.96)*/
{35, 0,123,__LINE__, 0xbff40d41, 0x0b5fa9ec, 0xbfee6666, 0x66666664},	/* -1.25324=f(-0.95)*/
{35, 0,123,__LINE__, 0xbff38fe4, 0xc9b4d1d8, 0xbfee147a, 0xe147ae12},	/* -1.22263=f(-0.94)*/
{35, 0,123,__LINE__, 0xbff31c50, 0xa9c87b30, 0xbfedc28f, 0x5c28f5c0},	/* -1.19441=f(-0.93)*/
{36, 0,123,__LINE__, 0xbff2b075, 0x351fc774, 0xbfed70a3, 0xd70a3d6e},	/* -1.16808=f(-0.92)*/
{35, 0,123,__LINE__, 0xbff24ae4, 0x4b75cb0b, 0xbfed1eb8, 0x51eb851c},	/* -1.14328=f(-0.91)*/
{35, 0,123,__LINE__, 0xbff1ea93, 0x61b0e22b, 0xbfeccccc, 0xccccccca},	/* -1.11977=f(-0.9)*/
{37, 0,123,__LINE__, 0xbff18eb9, 0xc68c68fa, 0xbfec7ae1, 0x47ae1478},	/* -1.09735=f(-0.89)*/
{37, 0,123,__LINE__, 0xbff136bb, 0x45ad5983, 0xbfec28f5, 0xc28f5c26},	/* -1.07586=f(-0.88)*/
{36, 0,123,__LINE__, 0xbff0e21b, 0xd6af528f, 0xbfebd70a, 0x3d70a3d4},	/* -1.0552=f(-0.87)*/
{36, 0,123,__LINE__, 0xbff09076, 0xf623edf2, 0xbfeb851e, 0xb851eb82},	/* -1.03527=f(-0.86)*/
{36, 0,123,__LINE__, 0xbff04179, 0xd7c8a085, 0xbfeb3333, 0x33333330},	/* -1.01599=f(-0.85)*/
{35, 0,123,__LINE__, 0xbfefe9be, 0x672ad1cb, 0xbfeae147, 0xae147ade},	/* -0.997283=f(-0.84)*/
{34, 0,123,__LINE__, 0xbfef54d9, 0x93638e13, 0xbfea8f5c, 0x28f5c28c},	/* -0.979108=f(-0.83)*/
{35, 0,123,__LINE__, 0xbfeec3e1, 0x03bde0ac, 0xbfea3d70, 0xa3d70a3a},	/* -0.961411=f(-0.82)*/
{35, 0,123,__LINE__, 0xbfee367e, 0x814feef4, 0xbfe9eb85, 0x1eb851e8},	/* -0.944152=f(-0.81)*/
{36, 0,123,__LINE__, 0xbfedac67, 0x100c65fc, 0xbfe99999, 0x99999996},	/* -0.927295=f(-0.8)*/
{34, 0,123,__LINE__, 0xbfed2558, 0xfbe2adb7, 0xbfe947ae, 0x147ae144},	/* -0.910809=f(-0.79)*/
{38, 0,123,__LINE__, 0xbfeca11a, 0x1cb039e5, 0xbfe8f5c2, 0x8f5c28f2},	/* -0.894666=f(-0.78)*/
{35, 0,123,__LINE__, 0xbfec1f77, 0x6a8ce63e, 0xbfe8a3d7, 0x0a3d70a0},	/* -0.878841=f(-0.77)*/
{34, 0,123,__LINE__, 0xbfeba042, 0xcb85a8ba, 0xbfe851eb, 0x851eb84e},	/* -0.863313=f(-0.76)*/
{34, 0,123,__LINE__, 0xbfeb2353, 0x15c680dc, 0xbfe7ffff, 0xfffffffc},	/* -0.848062=f(-0.75)*/
{34, 0,123,__LINE__, 0xbfeaa883, 0x32a7bc89, 0xbfe7ae14, 0x7ae147aa},	/* -0.83307=f(-0.74)*/
{36, 0,123,__LINE__, 0xbfea2fb1, 0x92ed9505, 0xbfe75c28, 0xf5c28f58},	/* -0.818322=f(-0.73)*/
{34, 0,123,__LINE__, 0xbfe9b8bf, 0xba2aabc0, 0xbfe70a3d, 0x70a3d706},	/* -0.803802=f(-0.72)*/
{35, 0,123,__LINE__, 0xbfe94391, 0xaf50aa2a, 0xbfe6b851, 0xeb851eb4},	/* -0.789498=f(-0.71)*/
{35, 0,123,__LINE__, 0xbfe8d00e, 0x6034c58e, 0xbfe66666, 0x66666662},	/* -0.775397=f(-0.7)*/
{35, 0,123,__LINE__, 0xbfe85e1e, 0x48754dae, 0xbfe6147a, 0xe147ae10},	/* -0.761489=f(-0.69)*/
{35, 0,123,__LINE__, 0xbfe7edab, 0xecdddb0e, 0xbfe5c28f, 0x5c28f5be},	/* -0.747763=f(-0.68)*/
{34, 0,123,__LINE__, 0xbfe77ea3, 0x79635a54, 0xbfe570a3, 0xd70a3d6c},	/* -0.734209=f(-0.67)*/
{34, 0,123,__LINE__, 0xbfe710f2, 0x9446d89a, 0xbfe51eb8, 0x51eb851a},	/* -0.720819=f(-0.66)*/
{34, 0,123,__LINE__, 0xbfe6a488, 0x0d04a7c2, 0xbfe4cccc, 0xccccccc8},	/* -0.707584=f(-0.65)*/
{35, 0,123,__LINE__, 0xbfe63954, 0x63411500, 0xbfe47ae1, 0x47ae1476},	/* -0.694498=f(-0.64)*/
{35, 0,123,__LINE__, 0xbfe5cf48, 0xaaf8d397, 0xbfe428f5, 0xc28f5c24},	/* -0.681553=f(-0.63)*/
{38, 0,123,__LINE__, 0xbfe56657, 0x1c39728e, 0xbfe3d70a, 0x3d70a3d2},	/* -0.668743=f(-0.62)*/
{36, 0,123,__LINE__, 0xbfe4fe72, 0xd1781c28, 0xbfe3851e, 0xb851eb80},	/* -0.656061=f(-0.61)*/
{36, 0,123,__LINE__, 0xbfe4978f, 0xb3269ee4, 0xbfe33333, 0x3333332e},	/* -0.643501=f(-0.6)*/
{38, 0,123,__LINE__, 0xbfe431a2, 0x3def7f60, 0xbfe2e147, 0xae147adc},	/* -0.631059=f(-0.59)*/
{36, 0,123,__LINE__, 0xbfe3cca0, 0x1171572c, 0xbfe28f5c, 0x28f5c28a},	/* -0.618729=f(-0.58)*/
{34, 0,123,__LINE__, 0xbfe3687e, 0xf2f2b28d, 0xbfe23d70, 0xa3d70a38},	/* -0.606506=f(-0.57)*/
{43, 0,123,__LINE__, 0xbfe30535, 0x601246e8, 0xbfe1eb85, 0x1eb851e6},	/* -0.594386=f(-0.56)*/
{34, 0,123,__LINE__, 0xbfe2a2ba, 0x5b29f7c3, 0xbfe19999, 0x99999994},	/* -0.582364=f(-0.55)*/
{35, 0,123,__LINE__, 0xbfe24105, 0x60d96e0d, 0xbfe147ae, 0x147ae142},	/* -0.570437=f(-0.54)*/
{37, 0,123,__LINE__, 0xbfe1e00e, 0x38d8968e, 0xbfe0f5c2, 0x8f5c28f0},	/* -0.558601=f(-0.53)*/
{37, 0,123,__LINE__, 0xbfe17fcd, 0x84a3d081, 0xbfe0a3d7, 0x0a3d709e},	/* -0.546851=f(-0.52)*/
{34, 0,123,__LINE__, 0xbfe1203b, 0xd47dd384, 0xbfe051eb, 0x851eb84c},	/* -0.535185=f(-0.51)*/
{37, 0,123,__LINE__, 0xbfe0c152, 0x382d7366, 0xbfdfffff, 0xfffffff4},	/* -0.523599=f(-0.5)*/
{36, 0,123,__LINE__, 0xbfe0630a, 0x128e9a29, 0xbfdf5c28, 0xf5c28f50},	/* -0.51209=f(-0.49)*/
{39, 0,123,__LINE__, 0xbfe0055d, 0x017adba7, 0xbfdeb851, 0xeb851eac},	/* -0.500655=f(-0.48)*/
{38, 0,123,__LINE__, 0xbfdf508a, 0x4300485e, 0xbfde147a, 0xe147ae08},	/* -0.489291=f(-0.47)*/
{36, 0,123,__LINE__, 0xbfde9779, 0x36697869, 0xbfdd70a3, 0xd70a3d64},	/* -0.477995=f(-0.46)*/
{36, 0,123,__LINE__, 0xbfdddf7b, 0xac32040b, 0xbfdccccc, 0xccccccc0},	/* -0.466765=f(-0.45)*/
{36, 0,123,__LINE__, 0xbfdd2887, 0x53bbb4a3, 0xbfdc28f5, 0xc28f5c1c},	/* -0.455599=f(-0.44)*/
{38, 0,123,__LINE__, 0xbfdc7291, 0xdd91885a, 0xbfdb851e, 0xb851eb78},	/* -0.444493=f(-0.43)*/
{39, 0,123,__LINE__, 0xbfdbbd91, 0x610fb58a, 0xbfdae147, 0xae147ad4},	/* -0.433445=f(-0.42)*/
{40, 0,123,__LINE__, 0xbfdb097c, 0xbf141799, 0xbfda3d70, 0xa3d70a30},	/* -0.422454=f(-0.41)*/
{37, 0,123,__LINE__, 0xbfda564a, 0xc7e2de49, 0xbfd99999, 0x9999998c},	/* -0.411517=f(-0.4)*/
{41, 0,123,__LINE__, 0xbfd9a3f2, 0xa06b16ec, 0xbfd8f5c2, 0x8f5c28e8},	/* -0.400632=f(-0.39)*/
{37, 0,123,__LINE__, 0xbfd8f26c, 0x24d45a33, 0xbfd851eb, 0x851eb844},	/* -0.389796=f(-0.38)*/
{36, 0,123,__LINE__, 0xbfd841af, 0x12b4a4b3, 0xbfd7ae14, 0x7ae147a0},	/* -0.379009=f(-0.37)*/
{35, 0,123,__LINE__, 0xbfd791b3, 0x901549f4, 0xbfd70a3d, 0x70a3d6fc},	/* -0.368268=f(-0.36)*/
{38, 0,123,__LINE__, 0xbfd6e271, 0xe234b51f, 0xbfd66666, 0x66666658},	/* -0.357571=f(-0.35)*/
{36, 0,123,__LINE__, 0xbfd633e2, 0xf2691623, 0xbfd5c28f, 0x5c28f5b4},	/* -0.346917=f(-0.34)*/
{38, 0,123,__LINE__, 0xbfd585ff, 0x7d1e7e17, 0xbfd51eb8, 0x51eb8510},	/* -0.336304=f(-0.33)*/
{36, 0,123,__LINE__, 0xbfd4d8c0, 0x75b64a87, 0xbfd47ae1, 0x47ae146c},	/* -0.325729=f(-0.32)*/
{36, 0,123,__LINE__, 0xbfd42c1f, 0x6841f4f2, 0xbfd3d70a, 0x3d70a3c8},	/* -0.315193=f(-0.31)*/
{36, 0,123,__LINE__, 0xbfd38015, 0xab7ffc0e, 0xbfd33333, 0x33333324},	/* -0.304693=f(-0.3)*/
{37, 0,123,__LINE__, 0xbfd2d49c, 0xc4126f7e, 0xbfd28f5c, 0x28f5c280},	/* -0.294227=f(-0.29)*/
{37, 0,123,__LINE__, 0xbfd229ae, 0xc5cb8e32, 0xbfd1eb85, 0x1eb851dc},	/* -0.283794=f(-0.28)*/
{36, 0,123,__LINE__, 0xbfd17f45, 0x883dba74, 0xbfd147ae, 0x147ae138},	/* -0.273393=f(-0.27)*/
{36, 0,123,__LINE__, 0xbfd0d55b, 0x094c795d, 0xbfd0a3d7, 0x0a3d7094},	/* -0.263022=f(-0.26)*/
{36, 0,123,__LINE__, 0xbfd02be9, 0xce0b87cd, 0xbfcfffff, 0xffffffe0},	/* -0.25268=f(-0.25)*/
{36, 0,123,__LINE__, 0xbfcf05d8, 0x1212ac77, 0xbfceb851, 0xeb851e98},	/* -0.242366=f(-0.24)*/
{39, 0,123,__LINE__, 0xbfcdb4b8, 0xbe38615e, 0xbfcd70a3, 0xd70a3d50},	/* -0.232078=f(-0.23)*/
{39, 0,123,__LINE__, 0xbfcc646a, 0xa1a84804, 0xbfcc28f5, 0xc28f5c08},	/* -0.221814=f(-0.22)*/
{37, 0,123,__LINE__, 0xbfcb14e3, 0x580171d6, 0xbfcae147, 0xae147ac0},	/* -0.211575=f(-0.21)*/
{36, 0,123,__LINE__, 0xbfc9c618, 0xb0d31199, 0xbfc99999, 0x99999978},	/* -0.201358=f(-0.2)*/
{36, 0,123,__LINE__, 0xbfc87800, 0x4a93b889, 0xbfc851eb, 0x851eb830},	/* -0.191162=f(-0.19)*/
{36, 0,123,__LINE__, 0xbfc72a90, 0x742d32d8, 0xbfc70a3d, 0x70a3d6e8},	/* -0.180986=f(-0.18)*/
{37, 0,123,__LINE__, 0xbfc5ddbf, 0x24f1d959, 0xbfc5c28f, 0x5c28f5a0},	/* -0.17083=f(-0.17)*/
{38, 0,123,__LINE__, 0xbfc49182, 0xddd2083f, 0xbfc47ae1, 0x47ae1458},	/* -0.160691=f(-0.16)*/
{37, 0,123,__LINE__, 0xbfc345d2, 0x44a45afb, 0xbfc33333, 0x33333310},	/* -0.150568=f(-0.15)*/
{40, 0,123,__LINE__, 0xbfc1faa3, 0xc08e9dad, 0xbfc1eb85, 0x1eb851c8},	/* -0.140461=f(-0.14)*/
{37, 0,123,__LINE__, 0xbfc0afee, 0x39ca9331, 0xbfc0a3d7, 0x0a3d7080},	/* -0.130369=f(-0.13)*/
{36, 0,123,__LINE__, 0xbfbecb51, 0x4b524a90, 0xbfbeb851, 0xeb851e71},	/* -0.12029=f(-0.12)*/
{36, 0,123,__LINE__, 0xbfbc3793, 0xe86319f8, 0xbfbc28f5, 0xc28f5be2},	/* -0.110223=f(-0.11)*/
{38, 0,123,__LINE__, 0xbfb9a492, 0x7c721fed, 0xbfb99999, 0x99999953},	/* -0.100167=f(-0.1)*/
{37, 0,123,__LINE__, 0xbfb7123b, 0x65e984fb, 0xbfb70a3d, 0x70a3d6c4},	/* -0.0901219=f(-0.09)*/
{36, 0,123,__LINE__, 0xbfb4807d, 0x0b6bcaaf, 0xbfb47ae1, 0x47ae1435},	/* -0.0800856=f(-0.08)*/
{36, 0,123,__LINE__, 0xbfb1ef46, 0x57f14ee8, 0xbfb1eb85, 0x1eb851a6},	/* -0.0700573=f(-0.07)*/
{36, 0,123,__LINE__, 0xbfaebd0b, 0xcbaa674c, 0xbfaeb851, 0xeb851e2d},	/* -0.0600361=f(-0.06)*/
{36, 0,123,__LINE__, 0xbfa99c55, 0x769afa05, 0xbfa99999, 0x9999990e},	/* -0.0500209=f(-0.05)*/
{36, 0,123,__LINE__, 0xbfa47c47, 0x6bff15bb, 0xbfa47ae1, 0x47ae13ef},	/* -0.0400107=f(-0.04)*/
{38, 0,123,__LINE__, 0xbf9eb97f, 0xfcbbb557, 0xbf9eb851, 0xeb851da0},	/* -0.0300045=f(-0.03)*/
{39, 0,123,__LINE__, 0xbf947b3a, 0xbe9d676e, 0xbf947ae1, 0x47ae1362},	/* -0.0200013=f(-0.02)*/
{39, 0,123,__LINE__, 0xbf847af7, 0x9ee16149, 0xbf847ae1, 0x47ae1249},	/* -0.0100002=f(-0.01)*/
{64, 0,123,__LINE__, 0x3cd19000, 0x00000000, 0x3cd19000, 0x00000000},	/* 9.74915e-16=f(9.74915e-16)*/
{39, 0,123,__LINE__, 0x3f847af7, 0x9ee16149, 0x3f847ae1, 0x47ae16ad},	/* 0.0100002=f(0.01)*/
{39, 0,123,__LINE__, 0x3f947b3a, 0xbe9d676e, 0x3f947ae1, 0x47ae1594},	/* 0.0200013=f(0.02)*/
{38, 0,123,__LINE__, 0x3f9eb97f, 0xfcbbb557, 0x3f9eb851, 0xeb851fd2},	/* 0.0300045=f(0.03)*/
{36, 0,123,__LINE__, 0x3fa47c47, 0x6bff15bb, 0x3fa47ae1, 0x47ae1508},	/* 0.0400107=f(0.04)*/
{36, 0,123,__LINE__, 0x3fa99c55, 0x769afa05, 0x3fa99999, 0x99999a27},	/* 0.0500209=f(0.05)*/
{36, 0,123,__LINE__, 0x3faebd0b, 0xcbaa674c, 0x3faeb851, 0xeb851f46},	/* 0.0600361=f(0.06)*/
{36, 0,123,__LINE__, 0x3fb1ef46, 0x57f14ee8, 0x3fb1eb85, 0x1eb85232},	/* 0.0700573=f(0.07)*/
{36, 0,123,__LINE__, 0x3fb4807d, 0x0b6bcaaf, 0x3fb47ae1, 0x47ae14c1},	/* 0.0800856=f(0.08)*/
{37, 0,123,__LINE__, 0x3fb7123b, 0x65e984fb, 0x3fb70a3d, 0x70a3d750},	/* 0.0901219=f(0.09)*/
{38, 0,123,__LINE__, 0x3fb9a492, 0x7c721fed, 0x3fb99999, 0x999999df},	/* 0.100167=f(0.1)*/
{36, 0,123,__LINE__, 0x3fbc3793, 0xe86319f8, 0x3fbc28f5, 0xc28f5c6e},	/* 0.110223=f(0.11)*/
{36, 0,123,__LINE__, 0x3fbecb51, 0x4b524a90, 0x3fbeb851, 0xeb851efd},	/* 0.12029=f(0.12)*/
{37, 0,123,__LINE__, 0x3fc0afee, 0x39ca9331, 0x3fc0a3d7, 0x0a3d70c6},	/* 0.130369=f(0.13)*/
{40, 0,123,__LINE__, 0x3fc1faa3, 0xc08e9dad, 0x3fc1eb85, 0x1eb8520e},	/* 0.140461=f(0.14)*/
{37, 0,123,__LINE__, 0x3fc345d2, 0x44a45afb, 0x3fc33333, 0x33333356},	/* 0.150568=f(0.15)*/
{38, 0,123,__LINE__, 0x3fc49182, 0xddd2083f, 0x3fc47ae1, 0x47ae149e},	/* 0.160691=f(0.16)*/
{37, 0,123,__LINE__, 0x3fc5ddbf, 0x24f1d959, 0x3fc5c28f, 0x5c28f5e6},	/* 0.17083=f(0.17)*/
{36, 0,123,__LINE__, 0x3fc72a90, 0x742d32d8, 0x3fc70a3d, 0x70a3d72e},	/* 0.180986=f(0.18)*/
{36, 0,123,__LINE__, 0x3fc87800, 0x4a93b889, 0x3fc851eb, 0x851eb876},	/* 0.191162=f(0.19)*/
{36, 0,123,__LINE__, 0x3fc9c618, 0xb0d31199, 0x3fc99999, 0x999999be},	/* 0.201358=f(0.2)*/
{37, 0,123,__LINE__, 0x3fcb14e3, 0x580171d6, 0x3fcae147, 0xae147b06},	/* 0.211575=f(0.21)*/
{39, 0,123,__LINE__, 0x3fcc646a, 0xa1a84804, 0x3fcc28f5, 0xc28f5c4e},	/* 0.221814=f(0.22)*/
{39, 0,123,__LINE__, 0x3fcdb4b8, 0xbe38615e, 0x3fcd70a3, 0xd70a3d96},	/* 0.232078=f(0.23)*/
{36, 0,123,__LINE__, 0x3fcf05d8, 0x1212ac77, 0x3fceb851, 0xeb851ede},	/* 0.242366=f(0.24)*/
{36, 0,123,__LINE__, 0x3fd02be9, 0xce0b87cd, 0x3fd00000, 0x00000013},	/* 0.25268=f(0.25)*/
{36, 0,123,__LINE__, 0x3fd0d55b, 0x094c795d, 0x3fd0a3d7, 0x0a3d70b7},	/* 0.263022=f(0.26)*/
{36, 0,123,__LINE__, 0x3fd17f45, 0x883dba74, 0x3fd147ae, 0x147ae15b},	/* 0.273393=f(0.27)*/
{37, 0,123,__LINE__, 0x3fd229ae, 0xc5cb8e32, 0x3fd1eb85, 0x1eb851ff},	/* 0.283794=f(0.28)*/
{37, 0,123,__LINE__, 0x3fd2d49c, 0xc4126f7e, 0x3fd28f5c, 0x28f5c2a3},	/* 0.294227=f(0.29)*/
{36, 0,123,__LINE__, 0x3fd38015, 0xab7ffc0e, 0x3fd33333, 0x33333347},	/* 0.304693=f(0.3)*/
{36, 0,123,__LINE__, 0x3fd42c1f, 0x6841f4f2, 0x3fd3d70a, 0x3d70a3eb},	/* 0.315193=f(0.31)*/
{36, 0,123,__LINE__, 0x3fd4d8c0, 0x75b64a87, 0x3fd47ae1, 0x47ae148f},	/* 0.325729=f(0.32)*/
{38, 0,123,__LINE__, 0x3fd585ff, 0x7d1e7e17, 0x3fd51eb8, 0x51eb8533},	/* 0.336304=f(0.33)*/
{36, 0,123,__LINE__, 0x3fd633e2, 0xf2691623, 0x3fd5c28f, 0x5c28f5d7},	/* 0.346917=f(0.34)*/
{38, 0,123,__LINE__, 0x3fd6e271, 0xe234b51f, 0x3fd66666, 0x6666667b},	/* 0.357571=f(0.35)*/
{35, 0,123,__LINE__, 0x3fd791b3, 0x901549f4, 0x3fd70a3d, 0x70a3d71f},	/* 0.368268=f(0.36)*/
{36, 0,123,__LINE__, 0x3fd841af, 0x12b4a4b3, 0x3fd7ae14, 0x7ae147c3},	/* 0.379009=f(0.37)*/
{37, 0,123,__LINE__, 0x3fd8f26c, 0x24d45a33, 0x3fd851eb, 0x851eb867},	/* 0.389796=f(0.38)*/
{41, 0,123,__LINE__, 0x3fd9a3f2, 0xa06b16ec, 0x3fd8f5c2, 0x8f5c290b},	/* 0.400632=f(0.39)*/
{37, 0,123,__LINE__, 0x3fda564a, 0xc7e2de49, 0x3fd99999, 0x999999af},	/* 0.411517=f(0.4)*/
{40, 0,123,__LINE__, 0x3fdb097c, 0xbf141799, 0x3fda3d70, 0xa3d70a53},	/* 0.422454=f(0.41)*/
{39, 0,123,__LINE__, 0x3fdbbd91, 0x610fb58a, 0x3fdae147, 0xae147af7},	/* 0.433445=f(0.42)*/
{38, 0,123,__LINE__, 0x3fdc7291, 0xdd91885a, 0x3fdb851e, 0xb851eb9b},	/* 0.444493=f(0.43)*/
{36, 0,123,__LINE__, 0x3fdd2887, 0x53bbb4a3, 0x3fdc28f5, 0xc28f5c3f},	/* 0.455599=f(0.44)*/
{36, 0,123,__LINE__, 0x3fdddf7b, 0xac32040b, 0x3fdccccc, 0xcccccce3},	/* 0.466765=f(0.45)*/
{36, 0,123,__LINE__, 0x3fde9779, 0x36697869, 0x3fdd70a3, 0xd70a3d87},	/* 0.477995=f(0.46)*/
{38, 0,123,__LINE__, 0x3fdf508a, 0x4300485e, 0x3fde147a, 0xe147ae2b},	/* 0.489291=f(0.47)*/
{39, 0,123,__LINE__, 0x3fe0055d, 0x017adba7, 0x3fdeb851, 0xeb851ecf},	/* 0.500655=f(0.48)*/
{36, 0,123,__LINE__, 0x3fe0630a, 0x128e9a29, 0x3fdf5c28, 0xf5c28f73},	/* 0.51209=f(0.49)*/
{37, 0,123,__LINE__, 0x3fe0c152, 0x382d7366, 0x3fe00000, 0x0000000b},	/* 0.523599=f(0.5)*/
{34, 0,123,__LINE__, 0x3fe1203b, 0xd47dd384, 0x3fe051eb, 0x851eb85d},	/* 0.535185=f(0.51)*/
{37, 0,123,__LINE__, 0x3fe17fcd, 0x84a3d081, 0x3fe0a3d7, 0x0a3d70af},	/* 0.546851=f(0.52)*/
{37, 0,123,__LINE__, 0x3fe1e00e, 0x38d8968e, 0x3fe0f5c2, 0x8f5c2901},	/* 0.558601=f(0.53)*/
{35, 0,123,__LINE__, 0x3fe24105, 0x60d96e0d, 0x3fe147ae, 0x147ae153},	/* 0.570437=f(0.54)*/
{34, 0,123,__LINE__, 0x3fe2a2ba, 0x5b29f7c3, 0x3fe19999, 0x999999a5},	/* 0.582364=f(0.55)*/
{43, 0,123,__LINE__, 0x3fe30535, 0x601246e8, 0x3fe1eb85, 0x1eb851f7},	/* 0.594386=f(0.56)*/
{34, 0,123,__LINE__, 0x3fe3687e, 0xf2f2b28d, 0x3fe23d70, 0xa3d70a49},	/* 0.606506=f(0.57)*/
{36, 0,123,__LINE__, 0x3fe3cca0, 0x1171572c, 0x3fe28f5c, 0x28f5c29b},	/* 0.618729=f(0.58)*/
{38, 0,123,__LINE__, 0x3fe431a2, 0x3def7f60, 0x3fe2e147, 0xae147aed},	/* 0.631059=f(0.59)*/
{36, 0,123,__LINE__, 0x3fe4978f, 0xb3269ee4, 0x3fe33333, 0x3333333f},	/* 0.643501=f(0.6)*/
{36, 0,123,__LINE__, 0x3fe4fe72, 0xd1781c28, 0x3fe3851e, 0xb851eb91},	/* 0.656061=f(0.61)*/
{38, 0,123,__LINE__, 0x3fe56657, 0x1c39728e, 0x3fe3d70a, 0x3d70a3e3},	/* 0.668743=f(0.62)*/
{35, 0,123,__LINE__, 0x3fe5cf48, 0xaaf8d397, 0x3fe428f5, 0xc28f5c35},	/* 0.681553=f(0.63)*/
{35, 0,123,__LINE__, 0x3fe63954, 0x63411500, 0x3fe47ae1, 0x47ae1487},	/* 0.694498=f(0.64)*/
{34, 0,123,__LINE__, 0x3fe6a488, 0x0d04a7c2, 0x3fe4cccc, 0xccccccd9},	/* 0.707584=f(0.65)*/
{34, 0,123,__LINE__, 0x3fe710f2, 0x9446d89a, 0x3fe51eb8, 0x51eb852b},	/* 0.720819=f(0.66)*/
{34, 0,123,__LINE__, 0x3fe77ea3, 0x79635a54, 0x3fe570a3, 0xd70a3d7d},	/* 0.734209=f(0.67)*/
{35, 0,123,__LINE__, 0x3fe7edab, 0xecdddb0e, 0x3fe5c28f, 0x5c28f5cf},	/* 0.747763=f(0.68)*/
{35, 0,123,__LINE__, 0x3fe85e1e, 0x48754dae, 0x3fe6147a, 0xe147ae21},	/* 0.761489=f(0.69)*/
{35, 0,123,__LINE__, 0x3fe8d00e, 0x6034c58e, 0x3fe66666, 0x66666673},	/* 0.775397=f(0.7)*/
{35, 0,123,__LINE__, 0x3fe94391, 0xaf50aa2a, 0x3fe6b851, 0xeb851ec5},	/* 0.789498=f(0.71)*/
{34, 0,123,__LINE__, 0x3fe9b8bf, 0xba2aabc0, 0x3fe70a3d, 0x70a3d717},	/* 0.803802=f(0.72)*/
{36, 0,123,__LINE__, 0x3fea2fb1, 0x92ed9505, 0x3fe75c28, 0xf5c28f69},	/* 0.818322=f(0.73)*/
{34, 0,123,__LINE__, 0x3feaa883, 0x32a7bc89, 0x3fe7ae14, 0x7ae147bb},	/* 0.83307=f(0.74)*/
{34, 0,123,__LINE__, 0x3feb2353, 0x15c680dc, 0x3fe80000, 0x0000000d},	/* 0.848062=f(0.75)*/
{34, 0,123,__LINE__, 0x3feba042, 0xcb85a8ba, 0x3fe851eb, 0x851eb85f},	/* 0.863313=f(0.76)*/
{35, 0,123,__LINE__, 0x3fec1f77, 0x6a8ce63e, 0x3fe8a3d7, 0x0a3d70b1},	/* 0.878841=f(0.77)*/
{38, 0,123,__LINE__, 0x3feca11a, 0x1cb039e5, 0x3fe8f5c2, 0x8f5c2903},	/* 0.894666=f(0.78)*/
{34, 0,123,__LINE__, 0x3fed2558, 0xfbe2adb7, 0x3fe947ae, 0x147ae155},	/* 0.910809=f(0.79)*/
{36, 0,123,__LINE__, 0x3fedac67, 0x100c65fc, 0x3fe99999, 0x999999a7},	/* 0.927295=f(0.8)*/
{35, 0,123,__LINE__, 0x3fee367e, 0x814feef4, 0x3fe9eb85, 0x1eb851f9},	/* 0.944152=f(0.81)*/
{35, 0,123,__LINE__, 0x3feec3e1, 0x03bde0ac, 0x3fea3d70, 0xa3d70a4b},	/* 0.961411=f(0.82)*/
{34, 0,123,__LINE__, 0x3fef54d9, 0x93638e13, 0x3fea8f5c, 0x28f5c29d},	/* 0.979108=f(0.83)*/
{35, 0,123,__LINE__, 0x3fefe9be, 0x672ad1cb, 0x3feae147, 0xae147aef},	/* 0.997283=f(0.84)*/
{36, 0,123,__LINE__, 0x3ff04179, 0xd7c8a085, 0x3feb3333, 0x33333341},	/* 1.01599=f(0.85)*/
{36, 0,123,__LINE__, 0x3ff09076, 0xf623edf2, 0x3feb851e, 0xb851eb93},	/* 1.03527=f(0.86)*/
{36, 0,123,__LINE__, 0x3ff0e21b, 0xd6af528f, 0x3febd70a, 0x3d70a3e5},	/* 1.0552=f(0.87)*/
{37, 0,123,__LINE__, 0x3ff136bb, 0x45ad5983, 0x3fec28f5, 0xc28f5c37},	/* 1.07586=f(0.88)*/
{37, 0,123,__LINE__, 0x3ff18eb9, 0xc68c68fa, 0x3fec7ae1, 0x47ae1489},	/* 1.09735=f(0.89)*/
{35, 0,123,__LINE__, 0x3ff1ea93, 0x61b0e22b, 0x3feccccc, 0xccccccdb},	/* 1.11977=f(0.9)*/
{35, 0,123,__LINE__, 0x3ff24ae4, 0x4b75cb0b, 0x3fed1eb8, 0x51eb852d},	/* 1.14328=f(0.91)*/
{36, 0,123,__LINE__, 0x3ff2b075, 0x351fc774, 0x3fed70a3, 0xd70a3d7f},	/* 1.16808=f(0.92)*/
{35, 0,123,__LINE__, 0x3ff31c50, 0xa9c87b30, 0x3fedc28f, 0x5c28f5d1},	/* 1.19441=f(0.93)*/
{35, 0,123,__LINE__, 0x3ff38fe4, 0xc9b4d1d8, 0x3fee147a, 0xe147ae23},	/* 1.22263=f(0.94)*/
{35, 0,123,__LINE__, 0x3ff40d41, 0x0b5fa9ec, 0x3fee6666, 0x66666675},	/* 1.25324=f(0.95)*/
{35, 0,123,__LINE__, 0x3ff4978f, 0x8e9455ea, 0x3feeb851, 0xeb851ec7},	/* 1.287=f(0.96)*/
{37, 0,123,__LINE__, 0x3ff53425, 0x582f7e9e, 0x3fef0a3d, 0x70a3d719},	/* 1.32523=f(0.97)*/
{40, 0,123,__LINE__, 0x3ff5ed69, 0x1f3e5c14, 0x3fef5c28, 0xf5c28f6b},	/* 1.37046=f(0.98)*/
{39, 0,123,__LINE__, 0x3ff6de3c, 0x81598eb5, 0x3fefae14, 0x7ae147bd},	/* 1.42926=f(0.99)*/
{36, 0,123,__LINE__, 0x3ff921fb, 0x54442d18, 0x3ff00000, 0x00000007},	/* 1.5708=f(1)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff028f5, 0xc28f5c30},	/* nan=f(1.01)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff051eb, 0x851eb859},	/* nan=f(1.02)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff07ae1, 0x47ae1482},	/* nan=f(1.03)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff0a3d7, 0x0a3d70ab},	/* nan=f(1.04)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff0cccc, 0xccccccd4},	/* nan=f(1.05)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff0f5c2, 0x8f5c28fd},	/* nan=f(1.06)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff11eb8, 0x51eb8526},	/* nan=f(1.07)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff147ae, 0x147ae14f},	/* nan=f(1.08)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff170a3, 0xd70a3d78},	/* nan=f(1.09)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff19999, 0x999999a1},	/* nan=f(1.1)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff1c28f, 0x5c28f5ca},	/* nan=f(1.11)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff1eb85, 0x1eb851f3},	/* nan=f(1.12)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff2147a, 0xe147ae1c},	/* nan=f(1.13)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff23d70, 0xa3d70a45},	/* nan=f(1.14)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff26666, 0x6666666e},	/* nan=f(1.15)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff28f5c, 0x28f5c297},	/* nan=f(1.16)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff2b851, 0xeb851ec0},	/* nan=f(1.17)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff2e147, 0xae147ae9},	/* nan=f(1.18)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff30a3d, 0x70a3d712},	/* nan=f(1.19)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc01921fb, 0x54442d18},	/* nan=f(-6.28319)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc012d97c, 0x7f3321d2},	/* nan=f(-4.71239)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc00921fb, 0x54442d18},	/* nan=f(-3.14159)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff921fb, 0x54442d18},	/* nan=f(-1.5708)*/
{64, 0,123,__LINE__, 0x00000000, 0x00000000, 0x00000000, 0x00000000},	/* 0=f(0)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x3ff921fb, 0x54442d18},	/* nan=f(1.5708)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x400921fb, 0x54442d18},	/* nan=f(3.14159)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x4012d97c, 0x7f3321d2},	/* nan=f(4.71239)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc03e0000, 0x00000000},	/* nan=f(-30)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc03c4ccc, 0xcccccccd},	/* nan=f(-28.3)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc03a9999, 0x9999999a},	/* nan=f(-26.6)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc038e666, 0x66666667},	/* nan=f(-24.9)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0373333, 0x33333334},	/* nan=f(-23.2)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0358000, 0x00000001},	/* nan=f(-21.5)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc033cccc, 0xccccccce},	/* nan=f(-19.8)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0321999, 0x9999999b},	/* nan=f(-18.1)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0306666, 0x66666668},	/* nan=f(-16.4)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc02d6666, 0x6666666a},	/* nan=f(-14.7)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc02a0000, 0x00000004},	/* nan=f(-13)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0269999, 0x9999999e},	/* nan=f(-11.3)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0233333, 0x33333338},	/* nan=f(-9.6)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc01f9999, 0x999999a3},	/* nan=f(-7.9)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc018cccc, 0xccccccd6},	/* nan=f(-6.2)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0120000, 0x00000009},	/* nan=f(-4.5)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xc0066666, 0x66666678},	/* nan=f(-2.8)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0xbff19999, 0x999999bd},	/* nan=f(-1.1)*/
{36, 0,123,__LINE__, 0x3fe4978f, 0xb3269ee4, 0x3fe33333, 0x333332ec},	/* 0.643501=f(0.6)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x40026666, 0x66666654},	/* nan=f(2.3)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x400fffff, 0xffffffee},	/* nan=f(4)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x4016cccc, 0xccccccc4},	/* nan=f(5.7)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x401d9999, 0x99999991},	/* nan=f(7.4)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x40223333, 0x3333332f},	/* nan=f(9.1)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x40259999, 0x99999995},	/* nan=f(10.8)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x4028ffff, 0xfffffffb},	/* nan=f(12.5)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x402c6666, 0x66666661},	/* nan=f(14.2)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x402fcccc, 0xccccccc7},	/* nan=f(15.9)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x40319999, 0x99999997},	/* nan=f(17.6)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x40334ccc, 0xccccccca},	/* nan=f(19.3)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x4034ffff, 0xfffffffd},	/* nan=f(21)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x4036b333, 0x33333330},	/* nan=f(22.7)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x40386666, 0x66666663},	/* nan=f(24.4)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x403a1999, 0x99999996},	/* nan=f(26.1)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x403bcccc, 0xccccccc9},	/* nan=f(27.8)*/
{ 2, 0, 33,__LINE__, 0x7ff80000, 0x00000000, 0x403d7fff, 0xfffffffc},	/* nan=f(29.5)*/
0,};
test_asinf(m)   {run_vector_1(m,asinf_vec,(char *)(asinf),"asinf","ff");   }	
