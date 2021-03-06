#include "LimitAdjuster.h"

using namespace injector;

class StreamingInfoIII : public SimpleAdjuster
{
    public:
        const char* GetLimitName() { return GetGVM().IsIII()? "StreamingInfo" : nullptr; }
        void ChangeLimit(int, const std::string& value)
	{
		int n = std::stoi(value);
		// The unrolled loop in CStreaming::Init inits 6 more elements
		// after looping in 8 element increments because the default
		// size 6350 % 8 == 6. We'll just allocate 6 more elements.
		char *streaminginfo = new char[(n+6)*0x14];
		// fix loop limit
		WriteMemory(0x40664A + 1, n-8, true);
		// move array references
		WriteMemory(0x40644C, streaminginfo + 0x0, true);
		WriteMemory(0x406493, streaminginfo + 0x0, true);
		WriteMemory(0x4064D8, streaminginfo + 0x0, true);
		WriteMemory(0x40651C, streaminginfo + 0x0, true);
		WriteMemory(0x406560, streaminginfo + 0x0, true);
		WriteMemory(0x4065A4, streaminginfo + 0x0, true);
		WriteMemory(0x4065E8, streaminginfo + 0x0, true);
		WriteMemory(0x406630, streaminginfo + 0x0, true);
		WriteMemory(0x406688, streaminginfo + 0x0, true);
		WriteMemory(0x4066DD, streaminginfo + 0x0, true);
		WriteMemory(0x40673F, streaminginfo + 0x0, true);
		WriteMemory(0x4067A1, streaminginfo + 0x0, true);
		WriteMemory(0x4067FC, streaminginfo + 0x0, true);
		WriteMemory(0x40684E, streaminginfo + 0x0, true);
		WriteMemory(0x406EAB, streaminginfo + 0x0, true);
		WriteMemory(0x406EF2, streaminginfo + 0x0, true);
		WriteMemory(0x406FD3, streaminginfo + 0x0, true);
		WriteMemory(0x4077AF, streaminginfo + 0x0, true);
		WriteMemory(0x407E8A, streaminginfo + 0x0, true);
		WriteMemory(0x407F28, streaminginfo + 0x0, true);
		WriteMemory(0x407F30, streaminginfo + 0x0, true);
		WriteMemory(0x407F96, streaminginfo + 0x0, true);
		WriteMemory(0x40887E, streaminginfo + 0x0, true);
		WriteMemory(0x408894, streaminginfo + 0x0, true);
		WriteMemory(0x4088C4, streaminginfo + 0x0, true);
		WriteMemory(0x4089C9, streaminginfo + 0x0, true);
		WriteMemory(0x40937D, streaminginfo + 0x0, true);
		WriteMemory(0x409406, streaminginfo + 0x0, true);
		WriteMemory(0x40946E, streaminginfo + 0x0, true);
		WriteMemory(0x4094DD, streaminginfo + 0x0, true);
		WriteMemory(0x40958E, streaminginfo + 0x0, true);
		WriteMemory(0x40975B, streaminginfo + 0x0, true);
		WriteMemory(0x409C93, streaminginfo + 0x0, true);
		WriteMemory(0x409E8E, streaminginfo + 0x0, true);
		WriteMemory(0x409F16, streaminginfo + 0x0, true);
		WriteMemory(0x40A0AC, streaminginfo + 0x0, true);
		WriteMemory(0x40A123, streaminginfo + 0x0, true);
		WriteMemory(0x40A1A4, streaminginfo + 0x0, true);
		WriteMemory(0x40A4AD, streaminginfo + 0x0, true);
		WriteMemory(0x40A699, streaminginfo + 0x0, true);
		WriteMemory(0x40A709, streaminginfo + 0x0, true);
		WriteMemory(0x40A7D4, streaminginfo + 0x0, true);
		WriteMemory(0x40A7DC, streaminginfo + 0x0, true);
		WriteMemory(0x40A864, streaminginfo + 0x0, true);
		WriteMemory(0x40A86C, streaminginfo + 0x0, true);
		WriteMemory(0x40A9D7, streaminginfo + 0x0, true);
		WriteMemory(0x406456, streaminginfo + 0x4, true);
		WriteMemory(0x40649D, streaminginfo + 0x4, true);
		WriteMemory(0x4064E2, streaminginfo + 0x4, true);
		WriteMemory(0x406526, streaminginfo + 0x4, true);
		WriteMemory(0x40656A, streaminginfo + 0x4, true);
		WriteMemory(0x4065AE, streaminginfo + 0x4, true);
		WriteMemory(0x4065F2, streaminginfo + 0x4, true);
		WriteMemory(0x40663A, streaminginfo + 0x4, true);
		WriteMemory(0x406692, streaminginfo + 0x4, true);
		WriteMemory(0x4066E7, streaminginfo + 0x4, true);
		WriteMemory(0x406749, streaminginfo + 0x4, true);
		WriteMemory(0x4067AB, streaminginfo + 0x4, true);
		WriteMemory(0x406806, streaminginfo + 0x4, true);
		WriteMemory(0x406858, streaminginfo + 0x4, true);
		WriteMemory(0x406444, streaminginfo + 0x8, true);
		WriteMemory(0x40648C, streaminginfo + 0x8, true);
		WriteMemory(0x4064D1, streaminginfo + 0x8, true);
		WriteMemory(0x406515, streaminginfo + 0x8, true);
		WriteMemory(0x406559, streaminginfo + 0x8, true);
		WriteMemory(0x40659D, streaminginfo + 0x8, true);
		WriteMemory(0x4065E1, streaminginfo + 0x8, true);
		WriteMemory(0x406629, streaminginfo + 0x8, true);
		WriteMemory(0x406681, streaminginfo + 0x8, true);
		WriteMemory(0x4066D6, streaminginfo + 0x8, true);
		WriteMemory(0x406738, streaminginfo + 0x8, true);
		WriteMemory(0x40679A, streaminginfo + 0x8, true);
		WriteMemory(0x4067F5, streaminginfo + 0x8, true);
		WriteMemory(0x406847, streaminginfo + 0x8, true);
		WriteMemory(0x4068FA, streaminginfo + 0x8, true);
		WriteMemory(0x407EB9, streaminginfo + 0x8, true);
		WriteMemory(0x407EF2, streaminginfo + 0x8, true);
		WriteMemory(0x407FBB, streaminginfo + 0x8, true);
		WriteMemory(0x4082A4, streaminginfo + 0x8, true);
		WriteMemory(0x4082B6, streaminginfo + 0x8, true);
		WriteMemory(0x4082D1, streaminginfo + 0x8, true);
		WriteMemory(0x4082E3, streaminginfo + 0x8, true);
		WriteMemory(0x408300, streaminginfo + 0x8, true);
		WriteMemory(0x408312, streaminginfo + 0x8, true);
		WriteMemory(0x408376, streaminginfo + 0x8, true);
		WriteMemory(0x408846, streaminginfo + 0x8, true);
		WriteMemory(0x40889D, streaminginfo + 0x8, true);
		WriteMemory(0x4088D3, streaminginfo + 0x8, true);
		WriteMemory(0x40890A, streaminginfo + 0x8, true);
		WriteMemory(0x408934, streaminginfo + 0x8, true);
		WriteMemory(0x408962, streaminginfo + 0x8, true);
		WriteMemory(0x409698, streaminginfo + 0x8, true);
		WriteMemory(0x409D68, streaminginfo + 0x8, true);
		WriteMemory(0x40A198, streaminginfo + 0x8, true);
		WriteMemory(0x40A214, streaminginfo + 0x8, true);
		WriteMemory(0x40A7CB, streaminginfo + 0x8, true);
		WriteMemory(0x40A85B, streaminginfo + 0x8, true);
		WriteMemory(0x40B01B, streaminginfo + 0x8, true);
		WriteMemory(0x40B1DF, streaminginfo + 0x8, true);
		WriteMemory(0x40B225, streaminginfo + 0x8, true);
		WriteMemory(0x40B262, streaminginfo + 0x8, true);
		WriteMemory(0x4180F7, streaminginfo + 0x8, true);
		WriteMemory(0x4276A7, streaminginfo + 0x8, true);
		WriteMemory(0x4355A8, streaminginfo + 0x8, true);
		WriteMemory(0x4371F2, streaminginfo + 0x8, true);
		WriteMemory(0x43790D, streaminginfo + 0x8, true);
		WriteMemory(0x43A77A, streaminginfo + 0x8, true);
		WriteMemory(0x444609, streaminginfo + 0x8, true);
		WriteMemory(0x4A9ED3, streaminginfo + 0x8, true);
		WriteMemory(0x542729, streaminginfo + 0x8, true);
		WriteMemory(0x54A5FD, streaminginfo + 0x8, true);
		WriteMemory(0x54DD66, streaminginfo + 0x8, true);
		WriteMemory(0x585C2A, streaminginfo + 0x8, true);
		WriteMemory(0x5860E1, streaminginfo + 0x8, true);
		WriteMemory(0x5872D3, streaminginfo + 0x8, true);
		WriteMemory(0x587404, streaminginfo + 0x8, true);
		WriteMemory(0x5953B1, streaminginfo + 0x8, true);
		WriteMemory(0x5955B8, streaminginfo + 0x8, true);
		WriteMemory(0x406901, streaminginfo + 0x9, true);
		WriteMemory(0x407ECB, streaminginfo + 0x9, true);
		WriteMemory(0x407EDC, streaminginfo + 0x9, true);
		WriteMemory(0x407EEC, streaminginfo + 0x9, true);
		WriteMemory(0x407EFD, streaminginfo + 0x9, true);
		WriteMemory(0x407F40, streaminginfo + 0x9, true);
		WriteMemory(0x407FC2, streaminginfo + 0x9, true);
		WriteMemory(0x4088A7, streaminginfo + 0x9, true);
		WriteMemory(0x4088B8, streaminginfo + 0x9, true);
		WriteMemory(0x40896C, streaminginfo + 0x9, true);
		WriteMemory(0x40898B, streaminginfo + 0x9, true);
		WriteMemory(0x4096BA, streaminginfo + 0x9, true);
		WriteMemory(0x4098B8, streaminginfo + 0x9, true);
		WriteMemory(0x40991D, streaminginfo + 0x9, true);
		WriteMemory(0x409948, streaminginfo + 0x9, true);
		WriteMemory(0x4099F4, streaminginfo + 0x9, true);
		WriteMemory(0x409A37, streaminginfo + 0x9, true);
		WriteMemory(0x409AB3, streaminginfo + 0x9, true);
		WriteMemory(0x409CDE, streaminginfo + 0x9, true);
		WriteMemory(0x409D07, streaminginfo + 0x9, true);
		WriteMemory(0x409EF4, streaminginfo + 0x9, true);
		WriteMemory(0x409F69, streaminginfo + 0x9, true);
		WriteMemory(0x409F7A, streaminginfo + 0x9, true);
		WriteMemory(0x40A0E9, streaminginfo + 0x9, true);
		WriteMemory(0x40A1C7, streaminginfo + 0x9, true);
		WriteMemory(0x40A2B4, streaminginfo + 0x9, true);
		WriteMemory(0x40A2C5, streaminginfo + 0x9, true);
		WriteMemory(0x40A4C9, streaminginfo + 0x9, true);
		WriteMemory(0x40A4DC, streaminginfo + 0x9, true);
		WriteMemory(0x40A7A3, streaminginfo + 0x9, true);
		WriteMemory(0x40A7C0, streaminginfo + 0x9, true);
		WriteMemory(0x40A833, streaminginfo + 0x9, true);
		WriteMemory(0x40A850, streaminginfo + 0x9, true);
		WriteMemory(0x40B0CB, streaminginfo + 0x9, true);
		WriteMemory(0x40B1C6, streaminginfo + 0x9, true);
		WriteMemory(0x40B22E, streaminginfo + 0x9, true);
		WriteMemory(0x40B272, streaminginfo + 0x9, true);
		WriteMemory(0x491175, streaminginfo + 0x9, true);
		WriteMemory(0x406461, streaminginfo + 0xA, true);
		WriteMemory(0x4064A8, streaminginfo + 0xA, true);
		WriteMemory(0x4064ED, streaminginfo + 0xA, true);
		WriteMemory(0x406531, streaminginfo + 0xA, true);
		WriteMemory(0x406575, streaminginfo + 0xA, true);
		WriteMemory(0x4065B9, streaminginfo + 0xA, true);
		WriteMemory(0x4065FD, streaminginfo + 0xA, true);
		WriteMemory(0x406645, streaminginfo + 0xA, true);
		WriteMemory(0x40669D, streaminginfo + 0xA, true);
		WriteMemory(0x4066F2, streaminginfo + 0xA, true);
		WriteMemory(0x406754, streaminginfo + 0xA, true);
		WriteMemory(0x4067B6, streaminginfo + 0xA, true);
		WriteMemory(0x406811, streaminginfo + 0xA, true);
		WriteMemory(0x406863, streaminginfo + 0xA, true);
		WriteMemory(0x406F0D, streaminginfo + 0xA, true);
		WriteMemory(0x407027, streaminginfo + 0xA, true);
		WriteMemory(0x40A2D3, streaminginfo + 0xA, true);
		WriteMemory(0x406472, streaminginfo + 0xC, true);
		WriteMemory(0x4064B9, streaminginfo + 0xC, true);
		WriteMemory(0x4064FE, streaminginfo + 0xC, true);
		WriteMemory(0x406542, streaminginfo + 0xC, true);
		WriteMemory(0x406586, streaminginfo + 0xC, true);
		WriteMemory(0x4065CA, streaminginfo + 0xC, true);
		WriteMemory(0x40660E, streaminginfo + 0xC, true);
		WriteMemory(0x40665B, streaminginfo + 0xC, true);
		WriteMemory(0x4066AE, streaminginfo + 0xC, true);
		WriteMemory(0x406703, streaminginfo + 0xC, true);
		WriteMemory(0x406765, streaminginfo + 0xC, true);
		WriteMemory(0x4067C7, streaminginfo + 0xC, true);
		WriteMemory(0x406822, streaminginfo + 0xC, true);
		WriteMemory(0x406874, streaminginfo + 0xC, true);
		WriteMemory(0x406468, streaminginfo + 0x10, true);
		WriteMemory(0x4064AF, streaminginfo + 0x10, true);
		WriteMemory(0x4064F4, streaminginfo + 0x10, true);
		WriteMemory(0x406538, streaminginfo + 0x10, true);
		WriteMemory(0x40657C, streaminginfo + 0x10, true);
		WriteMemory(0x4065C0, streaminginfo + 0x10, true);
		WriteMemory(0x406604, streaminginfo + 0x10, true);
		WriteMemory(0x406651, streaminginfo + 0x10, true);
		WriteMemory(0x4066A4, streaminginfo + 0x10, true);
		WriteMemory(0x4066F9, streaminginfo + 0x10, true);
		WriteMemory(0x40675B, streaminginfo + 0x10, true);
		WriteMemory(0x4067BD, streaminginfo + 0x10, true);
		WriteMemory(0x406818, streaminginfo + 0x10, true);
		WriteMemory(0x40686A, streaminginfo + 0x10, true);
		WriteMemory(0x41820F, streaminginfo + 0x30, true);
		WriteMemory(0x418255, streaminginfo + 0x44, true);
		WriteMemory(0x41828A, streaminginfo + 0x58, true);
		WriteMemory(0x41FD35, streaminginfo + 0x6C, true);
		WriteMemory(0x41FE02, streaminginfo + 0x80, true);
		WriteMemory(0x4182CB, streaminginfo + 0xD0, true);
		WriteMemory(0x4182D4, streaminginfo + 0xE4, true);
		WriteMemory(0x40ADCA, streaminginfo + 0x210, true);
		WriteMemory(0x41FDF7, streaminginfo + 0x79C, true);
		WriteMemory(0x41FE32, streaminginfo + 0x79C, true);
		WriteMemory(0x41FD2A, streaminginfo + 0x850, true);
		WriteMemory(0x41FD65, streaminginfo + 0x850, true);
		WriteMemory(0x40AF2D, streaminginfo + 0x864, true);
		WriteMemory(0x41824C, streaminginfo + 0x864, true);
		WriteMemory(0x40AEE9, streaminginfo + 0x92C, true);
		WriteMemory(0x418206, streaminginfo + 0x92C, true);
		WriteMemory(0x40AF8E, streaminginfo + 0x990, true);
		WriteMemory(0x418278, streaminginfo + 0x990, true);
		WriteMemory(0x490F13, streaminginfo + 0x990, true);
		WriteMemory(0x40AF84, streaminginfo + 0x9A4, true);
		WriteMemory(0x418281, streaminginfo + 0x9A4, true);
		WriteMemory(0x54FF19, streaminginfo + 0x9B8, true);
		WriteMemory(0x40696B, streaminginfo + 0x1ADB8, true);
		WriteMemory(0x409ED9, streaminginfo + 0x1ADB8, true);
	}
} StreamingInfoIII;
