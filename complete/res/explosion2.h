int explosion2_width = 32;
int explosion2_height = 32;
unsigned int explosion2[32][32] = {{0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff908080, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff807068, 0xff785850, 0xff806050, 0xff806058, 0xff807068, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff887068, 0xff806058, 0xff704838, 0xff784830, 0xff785040, 0xff785850, 0xff806860, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff785850, 0xff784030, 0xff784030, 0xff784030, 0xff784830, 0xff82482e, 0xff805840, 0xff908080, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff784030, 0xff78381c, 0xff78381c, 0xff854022, 0xff854022, 0xff90461a, 0xff8a5031, 0xff806858, 0xff887068, 0xff806858, 0xff7e5e4a, 0xff806050, 0xffffff, 0xffffff, 0xffffff, 0xff887870, 0xff806860, 0xff887070, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff854022, 0xff80280c, 0xff803018, 0xff8b3912, 0xffa1491b, 0xffa5531c, 0xff905828, 0xff905838, 0xff90684d, 0xff885840, 0xff82482e, 0xff82482e, 0xff784830, 0xff7e5e4a, 0xff806058, 0xff806050, 0xff7e5e4a, 0xff806050, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff883010, 0xff782810, 0xff782810, 0xffd05808, 0xfff87808, 0xffe1670b, 0xffba6022, 0xffa86030, 0xffa05838, 0xff985830, 0xff915020, 0xff905828, 0xff82482e, 0xff805030, 0xff805840, 0xff805030, 0xff784830, 0xff854022, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff805840, 0xff782810, 0xff782810, 0xffe1670b, 0xfff87808, 0xffe2700d, 0xffc56822, 0xffc06828, 0xffb06028, 0xffa5531c, 0xff915020, 0xff915020, 0xff905828, 0xff8a5031, 0xff8a5031, 0xff82482e, 0xff783828, 0xff782810, 0xff883010, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff80280c, 0xff782810, 0xffb04808, 0xfff87808, 0xffe2700d, 0xffc87020, 0xffc87030, 0xffc07038, 0xffba6022, 0xffb06028, 0xffba6022, 0xffa5531c, 0xff915020, 0xff8a5031, 0xff82482e, 0xff854022, 0xff783018, 0xff783018, 0xff78381c, 0xff854022, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xff887060, 0xff80280c, 0xff782810, 0xffe1670b, 0xffc06828, 0xffc06830, 0xffc87030, 0xffc88450, 0xffd28d4d, 0xffc89058, 0xffe8a460, 0xffd88030, 0xffba6022, 0xffa5531c, 0xff915020, 0xff90461a, 0xff854022, 0xff783828, 0xff704838, 0xff785850, 0xff887068, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff883010, 0xff90461a, 0xff986038, 0xff90684d, 0xff90684d, 0xffb87040, 0xffdd9a5d, 0xfff0c8a0, 0xfff2e5d2, 0xfff0c8a0, 0xffe8a460, 0xffd06818, 0xffb85818, 0xffb04810, 0xffa1491b, 0xff90461a, 0xff784030, 0xff785040, 0xff806858, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff915020, 0xff887060, 0xffffff, 0xff887068, 0xff986038, 0xffa5531c, 0xffc86818, 0xffd87820, 0xfff8d8b0, 0xfff8e8e0, 0xfff3dbbe, 0xffe8a460, 0xffc6600e, 0xffc85810, 0xffbe5814, 0xffa1491b, 0xff90461a, 0xff82482e, 0xff885840, 0xff7e5e4a, 0xff887068, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff887068, 0xff7e5e4a, 0xff905838, 0xffb06028, 0xffd06818, 0xffe9933d, 0xfff8e8e0, 0xfff5d2a8, 0xfff0b870, 0xffe9933d, 0xffd88030, 0xffc87830, 0xffc06830, 0xffc06830, 0xffb06028, 0xffb86838, 0xffa86030, 0xff985830, 0xff887060, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff908078, 0xff7e5e4a, 0xffc56822, 0xffd87820, 0xfff0b870, 0xfff0c898, 0xfff0c8a0, 0xffe8c090, 0xffe8b888, 0xffe8b888, 0xffe4b080, 0xffe8b078, 0xffd89c64, 0xffd28d4d, 0xffc07838, 0xffb06028, 0xff90461a, 0xff82482e, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff887870, 0xff90684d, 0xffb06028, 0xffd88030, 0xffdc8d3c, 0xffdd9a5d, 0xffe8a460, 0xfff0c088, 0xfff5d2a8, 0xfff0c898, 0xffe8c090, 0xffe8b888, 0xffe8b078, 0xffdd9a5d, 0xffca7e3c, 0xffb87030, 0xffa1491b, 0xff90461a, 0xff8b3912, 0xff805030, 0xff908078, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff806858, 0xff905838, 0xff985830, 0xffa86030, 0xffb87030, 0xffc87030, 0xffd47c38, 0xffd58545, 0xffe8a460, 0xffe8b078, 0xffe8b078, 0xffe8b078, 0xffe8a460, 0xffd47c38, 0xffc06828, 0xffba6022, 0xffb25215, 0xffa04010, 0xff8b3912, 0xff883010, 0xff803018, 0xff784830, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff887868, 0xff806050, 0xff885840, 0xff985830, 0xffa5531c, 0xffb85818, 0xffc86818, 0xffd88030, 0xffd58545, 0xffdd9a5d, 0xffe8a460, 0xffe9933d, 0xffc56822, 0xffbe5814, 0xffb25215, 0xffb04810, 0xff883010, 0xff80280c, 0xff80280c, 0xff782810, 0xff784030, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff806860, 0xff785040, 0xff82482e, 0xff90461a, 0xffa5531c, 0xffba6022, 0xffc56822, 0xffc87028, 0xffd07828, 0xffd87820, 0xffc87020, 0xffc56822, 0xffb85818, 0xffa1491b, 0xff915020, 0xff854022, 0xff784830, 0xff785840, 0xff806860, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff785038, 0xff78381c, 0xff883010, 0xff8b3912, 0xffb25215, 0xffb85818, 0xffba6022, 0xffc56822, 0xffc56822, 0xffba661e, 0xffba6022, 0xffa5531c, 0xffa05830, 0xff8a5031, 0xff8a5031, 0xff805840, 0xff806058, 0xff887870, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff806050, 0xff854022, 0xff854022, 0xff90461a, 0xffa1491b, 0xffa5531c, 0xffba6022, 0xffba6022, 0xffc86818, 0xffbe5814, 0xffb85818, 0xffa5531c, 0xff915020, 0xff8a5031, 0xff805030, 0xff785038, 0xff785040, 0xff806058, 0xff807068, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff806860, 0xff805030, 0xff82482e, 0xff854022, 0xff8b3912, 0xff90461a, 0xffb04810, 0xffbe5814, 0xffc6600e, 0xffbe5814, 0xffb85818, 0xffa1491b, 0xff82482e, 0xff805030, 0xff785040, 0xff785040, 0xff784030, 0xff784030, 0xff785040, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff908080, 0xffffff, 0xff887870, 0xff7e5e4a, 0xff82482e, 0xff90461a, 0xffa1491b, 0xffb25215, 0xffb85010, 0xff883010, 0xff78381c, 0xff785040, 0xff785040, 0xff887870, 0xff887070, 0xff785850, 0xff783828, 0xff854022, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff887870, 0xff785850, 0xff805030, 0xff8a5031, 0xff82482e, 0xff8b3912, 0xff782810, 0xff783828, 0xff806868, 0xff887878, 0xffffff, 0xffffff, 0xff806860, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff887070, 0xff806058, 0xff806860, 0xff806858, 0xff805840, 0xff854022, 0xff803018, 0xff806058, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff807068, 0xff785038, 0xff7e5e4a, 0xffffff, 0xffffff, 0xff805840, 0xff887060, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff887070, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}};
