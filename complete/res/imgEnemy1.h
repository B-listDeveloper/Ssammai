int imgEnemy1_width = 32;
int imgEnemy1_height = 32;
unsigned int imgEnemy1[32][32] = {{0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff000000, 0xff00a800, 0xff00a800, 0xff00a800, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff00a800, 0xff000000, 0xff000000, 0xff00a800, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff006400, 0xff006400, 0xff000000, 0xff00a800, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff00a800, 0xff008000, 0xff006400, 0xff000000, 0xff00a800, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff00a800, 0xff008000, 0xff006400, 0xff000000, 0xff00a800, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xff000000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff008000, 0xff006400, 0xff000000, 0xff008000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xff000000, 0xffd2d2d2, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff00a800, 0xff008000, 0xff008000, 0xff006400, 0xff000000, 0xff008000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff000000, 0xff000000}, {0xffffff, 0xff000000, 0xffd2d2d2, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff00a800, 0xff008000, 0xff008000, 0xff006400, 0xff000000, 0xff008000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff00a800, 0xff00a800, 0xff000000}, {0xffffff, 0xff000000, 0xffd2d2d2, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff008000, 0xff008000, 0xff006400, 0xff000000, 0xff008000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff008000, 0xff000000}, {0xffffff, 0xff000000, 0xffc0c0c0, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff008000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff008000, 0xff000000}, {0xffffff, 0xff000000, 0xffc0c0c0, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff000000, 0xff000000, 0xff00a800, 0xff00a800, 0xff00a800, 0xff00a800, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff00a800, 0xff008000, 0xff008000, 0xff000000}, {0xffffff, 0xff000000, 0xffc0c0c0, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff00a800, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff00a800, 0xff00a800, 0xff00a800, 0xff00a800, 0xff00a800, 0xff000000, 0xff000000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff00a800, 0xff008000, 0xff008000, 0xff000000}, {0xffffff, 0xff000000, 0xff000000, 0xff000000, 0xffd2d2d2, 0xff000000, 0xff008000, 0xff008000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff00a800, 0xff00a800, 0xff00a800, 0xff00a800, 0xff000000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff008000, 0xff008000, 0xff000000}, {0xffffff, 0xff000000, 0xffd2d2d2, 0xffd2d2d2, 0xffc0c0c0, 0xff000000, 0xff008000, 0xff000000, 0xff000000, 0xff80ffff, 0xff000000, 0xff80ffff, 0xff80ffff, 0xff80ffff, 0xff000000, 0xff000000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff00a800, 0xff00a800, 0xff000000, 0xff000000, 0xff000000, 0xff008000, 0xff008000, 0xff000000, 0xff000000, 0xff000000}, {0xff000000, 0xffc0c0c0, 0xffc0c0c0, 0xffc0c0c0, 0xffc0c0c0, 0xff000000, 0xff008000, 0xff000000, 0xff80ffff, 0xff000000, 0xff80ffff, 0xff80ffff, 0xff80ffff, 0xff80ffff, 0xff80ffff, 0xff80ffff, 0xff000000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff006400, 0xff000000, 0xff008000, 0xff008000, 0xff000000}, {0xff000000, 0xffafafaf, 0xffc0c0c0, 0xffc0c0c0, 0xffc0c0c0, 0xff000000, 0xff006400, 0xff000000, 0xff80ffff, 0xff000000, 0xff80ffff, 0xff80ffff, 0xff80ffff, 0xff80ffff, 0xff80ffff, 0xff80ffff, 0xff000000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff006400, 0xff000000, 0xff008000, 0xff008000, 0xff000000}, {0xffffff, 0xff000000, 0xffafafaf, 0xffafafaf, 0xffc0c0c0, 0xff000000, 0xff006400, 0xff000000, 0xff000000, 0xff80ffff, 0xff000000, 0xff80ffff, 0xff80ffff, 0xff80ffff, 0xff000000, 0xff000000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff000000, 0xff000000, 0xff000000, 0xff006400, 0xff006400, 0xff000000, 0xff000000, 0xff000000}, {0xffffff, 0xff000000, 0xff000000, 0xff000000, 0xffafafaf, 0xff000000, 0xff006400, 0xff006400, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff006400, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff000000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff006400, 0xff006400, 0xff006400, 0xff000000}, {0xffffff, 0xff000000, 0xffafafaf, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff006400, 0xff006400, 0xff006400, 0xff006400, 0xff006400, 0xff006400, 0xff006400, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff000000, 0xff000000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff008000, 0xff008000, 0xff000000}, {0xffffff, 0xff000000, 0xffafafaf, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff000000, 0xff000000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff008000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff008000, 0xff008000, 0xff000000}, {0xffffff, 0xff000000, 0xffafafaf, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff006400, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff008000, 0xff000000}, {0xffffff, 0xff000000, 0xffc0c0c0, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff006400, 0xff006400, 0xff006400, 0xff006400, 0xff000000, 0xff006400, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff008000, 0xff000000}, {0xffffff, 0xff000000, 0xffc0c0c0, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff008000, 0xff008000, 0xff006400, 0xff000000, 0xff006400, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff008000, 0xff000000}, {0xffffff, 0xff000000, 0xffc0c0c0, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff008000, 0xff008000, 0xff006400, 0xff000000, 0xff006400, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff000000, 0xff000000}, {0xffffff, 0xff000000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff008000, 0xff006400, 0xff000000, 0xff008000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff008000, 0xff008000, 0xff006400, 0xff000000, 0xff008000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff008000, 0xff006400, 0xff000000, 0xff008000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff006400, 0xff000000, 0xff008000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff008000, 0xff000000, 0xff000000, 0xff008000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff000000, 0xff008000, 0xff008000, 0xff008000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xff000000, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}};