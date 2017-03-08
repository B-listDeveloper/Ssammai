#ifndef VIC
#define VIC

#define VIC0IRQSTATUS_REG __REG(ELFIN_VIC0_BASE_ADDR + 0x0)
#define VIC0INTSELECT_REG __REG(ELFIN_VIC0_BASE_ADDR + 0xc)
#define VIC0INTENABLE_REG __REG(ELFIN_VIC0_BASE_ADDR + 0x10)
#define VIC0INTENCLEAR_REG __REG(ELFIN_VIC0_BASE_ADDR + 0x14)

#define VIC0VECTADDR9 __REG(ELFIN_VIC0_BASE_ADDR + 0x124)
#define VIC0VECTADDR11 __REG(ELFIN_VIC0_BASE_ADDR + 0x12C)
#define VIC0VECTADDR24 __REG(ELFIN_VIC0_BASE_ADDR + 0x160)
#define VIC0VECTADDR25 __REG(ELFIN_VIC0_BASE_ADDR + 0x164)
#define VIC0VECTADDR29 __REG(ELFIN_VIC0_BASE_ADDR + 0x174)
#define VIC0VECTADDR30 __REG(ELFIN_VIC0_BASE_ADDR + 0x178)
#define VIC0VECTADDR31 __REG(ELFIN_VIC0_BASE_ADDR + 0x17C)

#define VIC1IRQSTATUS_REG __REG(ELFIN_VIC1_BASE_ADDR + 0x0)
#define VIC1RAWINTR_REG __REG(ELFIN_VIC1_BASE_ADDR + 0x8)
#define VIC1INTSELECT_REG __REG(ELFIN_VIC1_BASE_ADDR + 0xc)
#define VIC1INTENABLE_REG __REG(ELFIN_VIC1_BASE_ADDR + 0x10)
#define VIC1INTENCLEAR_REG __REG(ELFIN_VIC1_BASE_ADDR + 0x14)

#define VIC1VECTADDR30 __REG(ELFIN_VIC1_BASE_ADDR + 0x178)
#define VIC1VECTADDR31 __REG(ELFIN_VIC1_BASE_ADDR + 0x17c)

#endif