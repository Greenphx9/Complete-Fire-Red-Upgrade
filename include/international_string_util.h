#ifndef GUARD_INTERNATIONAL_STRING_UTIL_H
#define GUARD_INTERNATIONAL_STRING_UTIL_H

#include "global.h"
#include "string_util.h"

#include "menu.h"

void sub_81DB52C(const u8 *src);
void TVShowConvertInternationalString(u8 *dest, const u8 *src, u8 language);
#define GetStringRightAlignXOffset(fontId, string, destWidth) ({ \
	s32 w = GetStringWidth(fontId, string, 0);                   \
	destWidth - w;                                               \
})


#define GetStringCenterAlignXOffset(fontId, string, totalWidth) ({        \
	int stringWidth = GetStringWidth(fontId, string, 0);                  \
	int diff = (totalWidth > stringWidth) ? totalWidth - stringWidth : 0; \
	diff / 2;                                                             \
})
s32 GetStringCenterAlignXOffsetWithLetterSpacing(s32 fontId, const u8 *str, s32 totalWidth, s32 letterSpacing);
s32 GetStringWidthDifference(s32 fontId, const u8 *str, s32 totalWidth, s32 letterSpacing);
s32 GetMaxWidthInMenuTable(const struct MenuAction *str, s32 arg1);
s32 sub_81DB3D8(const struct MenuAction *str, u8* arg1, s32 arg2);
// sub_81DB41C
// CopyMonCategoryText
// sub_81DB494
// sub_81DB4DC
// sub_81DB554
// sub_81DB5AC
u32 sub_81DB604(const u8 *);
// sub_81DB620

#endif // GUARD_INTERNATIONAL_STRING_UTIL_H
