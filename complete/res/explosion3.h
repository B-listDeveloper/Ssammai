int explosion3_width = 32;
int explosion3_height = 32;
unsigned int explosion3[32][32] = {{0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff907870, 0xff806860, 0xff887060, 0xff805840, 0xff805840, 0xff887870, 0xff989088, 0xff908080, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff908078, 0xff806860, 0xff785840, 0xff784830, 0xff783828, 0xff785040, 0xff7e5e4a, 0xff805838, 0xff854022, 0xff784030, 0xff806058, 0xff806858, 0xff806058, 0xff887870, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff887870, 0xff805840, 0xff82482e, 0xff854022, 0xff78381c, 0xff803018, 0xff854022, 0xff82482e, 0xff905828, 0xff854022, 0xff854022, 0xff785038, 0xff805840, 0xff785040, 0xff854022, 0xff854022, 0xffffff, 0xffffff, 0xff887870, 0xff805840, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff8b3912, 0xff8b3912, 0xffa04010, 0xff90461a, 0xff803018, 0xff915020, 0xffa86030, 0xff985830, 0xff90461a, 0xff82482e, 0xff8a5031, 0xff805838, 0xff82482e, 0xff803018, 0xff805030, 0xff887068, 0xff806050, 0xff82482e, 0xff783010, 0xff783018, 0xff887060, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff854022, 0xff854022, 0xff8b3912, 0xff803018, 0xff90461a, 0xffa1491b, 0xffa1491b, 0xffa5531c, 0xffb06028, 0xffb87040, 0xffa86838, 0xff915020, 0xff985830, 0xff985830, 0xff8a5031, 0xff854022, 0xff8b3912, 0xff805840, 0xff885840, 0xff90461a, 0xff8b3912, 0xff783010, 0xff704838, 0xff887068, 0xff908078, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xff8b3912, 0xff90461a, 0xffa04010, 0xffa1491b, 0xffa1491b, 0xffa1491b, 0xffb25215, 0xffba6022, 0xffc06830, 0xffc07838, 0xffbc8048, 0xffc88860, 0xffd08840, 0xffa86838, 0xffa86030, 0xff985830, 0xff90461a, 0xff8a5031, 0xff885840, 0xff915020, 0xff90461a, 0xff803018, 0xff78381c, 0xff805030, 0xff805840, 0xff806050, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xff8b3912, 0xffa1491b, 0xffb25215, 0xffb85818, 0xffba6022, 0xffba661e, 0xffc56822, 0xffc87028, 0xffd47c38, 0xffd28d4d, 0xffd0a078, 0xffe0c0a0, 0xffe0b898, 0xffb87040, 0xffb06838, 0xffb06828, 0xffa05830, 0xff986038, 0xffa05838, 0xffba6022, 0xffa5531c, 0xff854022, 0xff854022, 0xff985830, 0xff8a5031, 0xff90461a, 0xff908880, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xff8b3912, 0xffa1491b, 0xffa5531c, 0xffc56822, 0xffd87820, 0xffd87820, 0xffd87820, 0xffd87820, 0xffd88030, 0xffe9933d, 0xffe8c8a8, 0xffe8d8c0, 0xffe0b898, 0xffc89058, 0xffc88450, 0xffd28d4d, 0xffb07048, 0xffb87040, 0xffb87030, 0xffc86818, 0xffb85818, 0xffa5531c, 0xffa5531c, 0xffa5531c, 0xffa5531c, 0xff883010, 0xff7e5e4a, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xff883010, 0xff8b3912, 0xffb25215, 0xffc86818, 0xffd06818, 0xffec821a, 0xffe9933d, 0xffe9933d, 0xffe9933d, 0xfff0c080, 0xfff2e5d2, 0xfff3dbbe, 0xffe8c0a0, 0xffd0a078, 0xffe4b080, 0xffd0a080, 0xffc88860, 0xffd08840, 0xffd6782c, 0xffd06818, 0xffba661e, 0xffba661e, 0xffd06818, 0xffc6600e, 0xff883010, 0xff782810, 0xff805030, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xff8b3912, 0xff80280c, 0xffb85010, 0xffc6600e, 0xffd06818, 0xffc87020, 0xffdc8d3c, 0xfff0b870, 0xfff8c890, 0xfff8e8e0, 0xfff6f4f0, 0xfff0e8e0, 0xffecd4bc, 0xfff0d0b0, 0xffe8ccb0, 0xffe0c0a0, 0xffd0a080, 0xffe8a460, 0xffe9933d, 0xffd06818, 0xffc86818, 0xffd06818, 0xffd06818, 0xffb85010, 0xff782810, 0xff883010, 0xff887068, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xff7e5e4a, 0xff782810, 0xffa04010, 0xffe1670b, 0xffe1670b, 0xffd06818, 0xffd6782c, 0xffe8b878, 0xfff6f4f0, 0xfff6f4f0, 0xfff6f4f0, 0xfff8e8e0, 0xfff3dbbe, 0xfff2e5d2, 0xfff2e5d2, 0xfff3dbbe, 0xffecd4bc, 0xfff5d2a8, 0xffe9933d, 0xffd06818, 0xffba6022, 0xffba6022, 0xffc6600e, 0xff883010, 0xff80280c, 0xff887060, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff80280c, 0xff782810, 0xff8b3912, 0xffd05808, 0xffd06818, 0xffd07828, 0xfff0b870, 0xfff8e8e0, 0xfff3dbbe, 0xfff0d0b0, 0xfff3dbbe, 0xfff2e5d2, 0xfff8e8e0, 0xfff6f4f0, 0xfff8e8e0, 0xfff8e8e0, 0xfff8b870, 0xffe87810, 0xffc86818, 0xffa5531c, 0xff8a5031, 0xff82482e, 0xff784030, 0xff78381c, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff80280c, 0xff80280c, 0xff883010, 0xff883010, 0xffd06818, 0xffd07828, 0xffe9933d, 0xffe8a460, 0xffe8a460, 0xffe4b080, 0xfff0d0b0, 0xfff2e5d2, 0xfff6f4f0, 0xfff6f4f0, 0xfff6f4f0, 0xfff6f4f0, 0xfff2e5d2, 0xffec821a, 0xffc6600e, 0xff915020, 0xff805030, 0xff785840, 0xff785850, 0xff806858, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff7e5e4a, 0xff883010, 0xff80340c, 0xff8b3912, 0xffd06818, 0xffd07828, 0xffd88030, 0xffdc8d3c, 0xffdd9a5d, 0xffe8b078, 0xfff0d0b0, 0xfff8e8e0, 0xfff6f4f0, 0xfff6f4f0, 0xfff6f4f0, 0xfff6f4f0, 0xfff8e8e0, 0xffe8a460, 0xfff87808, 0xffc6600e, 0xff854022, 0xff785040, 0xff806858, 0xff887870, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff805030, 0xff8b3912, 0xffb25215, 0xffba661e, 0xffd07828, 0xffdc8d3c, 0xffd28d4d, 0xffe8a460, 0xfff0c098, 0xfff3dbbe, 0xfff8e8e0, 0xfff6f4f0, 0xfff6f4f0, 0xfff6f4f0, 0xfff3dbbe, 0xffe8a460, 0xffec821a, 0xfff87808, 0xfff87808, 0xffa04010, 0xff78381c, 0xff785040, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff8a5031, 0xff90461a, 0xffa5531c, 0xffc56822, 0xffd07828, 0xffdc8d3c, 0xffe8a460, 0xfff0c8a0, 0xfff3dbbe, 0xfff2e5d2, 0xfff0f0e0, 0xfff6f4f0, 0xfff6f4f0, 0xfff6f4f0, 0xfff0b870, 0xffd87820, 0xfff87808, 0xfff87808, 0xffe2700d, 0xffbe5814, 0xff80280c, 0xff78381c, 0xff806050, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff805030, 0xff915020, 0xffb25215, 0xffc56822, 0xffc87028, 0xffdd9a5d, 0xfff0b870, 0xfff8d8b0, 0xfff8e8e0, 0xfff8e8e0, 0xfff6f4f0, 0xfff6f4f0, 0xfff6f4f0, 0xfff2e5d2, 0xffe9933d, 0xffe07818, 0xfff87808, 0xffe2700d, 0xffe07015, 0xffd06818, 0xffb05010, 0xff783010, 0xff783828, 0xff887060, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff806050, 0xff804018, 0xff8b3912, 0xffb25215, 0xffba6022, 0xffd6782c, 0xffec821a, 0xfff8c890, 0xfff6f4f0, 0xfff8e8e0, 0xffe8d8c0, 0xfff3dbbe, 0xfff6f4f0, 0xfff6f4f0, 0xfff8d8b0, 0xffe9933d, 0xffe07818, 0xffe2700d, 0xffe2700d, 0xffc86810, 0xffc86818, 0xffc6600e, 0xffa04010, 0xff783010, 0xff785038, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff854022, 0xff783010, 0xff8b3912, 0xffa5531c, 0xffc87020, 0xffe87810, 0xffec821a, 0xffd88030, 0xffd28d4d, 0xffe8b888, 0xffc88860, 0xffd28d4d, 0xfff0c080, 0xfff2e5d2, 0xfff0c080, 0xffe07818, 0xffd87820, 0xffe1670b, 0xffe1670b, 0xffe1670b, 0xffb85818, 0xffb85810, 0xffb05010, 0xff8b3912, 0xff78381c, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff854022, 0xff783010, 0xff8b3912, 0xffbe5814, 0xffe87810, 0xffe87810, 0xffd87820, 0xffb47034, 0xffdc8d3c, 0xffd28d4d, 0xffa86838, 0xffb47034, 0xffdc8d3c, 0xffec821a, 0xffec821a, 0xffe2700d, 0xffd06818, 0xffc86810, 0xffe1670b, 0xffb05010, 0xffa1491b, 0xff804018, 0xffa04010, 0xff8b3912, 0xff8b3912, 0xff7e5e4a, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff854022, 0xff783010, 0xffa04010, 0xffd06818, 0xffe87810, 0xffc87020, 0xffc06828, 0xffc87028, 0xffdc8d3c, 0xffb87030, 0xff905838, 0xff986038, 0xffc06828, 0xffec821a, 0xfff07810, 0xffe2700d, 0xffbe5814, 0xffbe5814, 0xffbe5814, 0xffb05010, 0xff854022, 0xff783828, 0xff78381c, 0xff804018, 0xff8b3912, 0xff785840, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff854022, 0xff782810, 0xffb05010, 0xffe87810, 0xffe07015, 0xffba661e, 0xffba661e, 0xffba6022, 0xffc87020, 0xffa05830, 0xff7e5e4a, 0xff885840, 0xffa05830, 0xffd06818, 0xfff07810, 0xffe87810, 0xffb25215, 0xff90461a, 0xffa1491b, 0xffa04010, 0xff90461a, 0xff785038, 0xff784030, 0xff78381c, 0xff803018, 0xff806050, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff854022, 0xff80280c, 0xffbe5814, 0xffe07015, 0xffbe5814, 0xffb25215, 0xffa1491b, 0xffa5531c, 0xffa04010, 0xff8a5031, 0xff806858, 0xff806858, 0xff82482e, 0xffa5531c, 0xffe07015, 0xffe07015, 0xffb25215, 0xff854022, 0xff803018, 0xff90461a, 0xff8a5031, 0xff7e5e4a, 0xff7e5e4a, 0xff784030, 0xff8a5031, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff854022, 0xff8b3912, 0xffb25215, 0xffb25215, 0xffa04010, 0xffa04010, 0xffa04010, 0xff8b3912, 0xff8b3912, 0xff7e5e4a, 0xff887870, 0xff887870, 0xff785038, 0xff803018, 0xffa1491b, 0xffd06818, 0xffa5531c, 0xff854022, 0xff783828, 0xff804018, 0xff887060, 0xffffff, 0xffffff, 0xff806050, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff8a5031, 0xff90461a, 0xffa04010, 0xff90461a, 0xff8b3912, 0xff8b3912, 0xff8b3912, 0xff854022, 0xff887870, 0xffffff, 0xffffff, 0xffffff, 0xff887068, 0xff883010, 0xff803018, 0xffa5531c, 0xff915020, 0xff805030, 0xff785040, 0xff806050, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff7e5e4a, 0xff805030, 0xff854022, 0xff854022, 0xff803018, 0xff803018, 0xff784830, 0xff887870, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff7e5e4a, 0xff80280c, 0xff803018, 0xff82482e, 0xff805840, 0xff887068, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff806860, 0xff785040, 0xff784030, 0xff783828, 0xff785040, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xff82482e, 0xff8b3912, 0xff805030, 0xff806858, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}, {0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff, 0xffffff}};