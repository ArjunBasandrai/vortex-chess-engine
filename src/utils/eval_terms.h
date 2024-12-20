#pragma once

#include "../evaluate.h"
#include "../types.h"
namespace elixir::eval {
    const std::array<EvalScore, 6> material_score = {S(66, 29),   S(233, 326), S(250, 325),
                                                     S(335, 540), S(749, 948), S(0, 0)};

    const std::array<std::array<EvalScore, 64>, 6> psqt = {
        {{S(0, 0),    S(0, 0),     S(0, 0),    S(0, 0),    S(0, 0),    S(0, 0),    S(0, 0),
          S(0, 0),    S(46, 245),  S(51, 245), S(32, 252), S(67, 219), S(59, 222), S(53, 228),
          S(0, 264),  S(-19, 261), S(-6, 78),  S(-5, 92),  S(15, 59),  S(17, 38),  S(28, 36),
          S(43, 46),  S(18, 82),   S(-10, 76), S(-23, 74), S(-13, 78), S(-11, 60), S(-7, 49),
          S(12, 47),  S(-1, 52),   S(-3, 72),  S(-15, 59), S(-31, 65), S(-20, 78), S(-17, 59),
          S(-7, 55),  S(-2, 53),   S(-8, 54),  S(-10, 70), S(-24, 53), S(-37, 62), S(-34, 75),
          S(-26, 59), S(-24, 62),  S(-17, 60), S(-20, 57), S(-15, 66), S(-28, 50), S(-31, 66),
          S(-25, 78), S(-24, 65),  S(-30, 63), S(-20, 69), S(-11, 59), S(-3, 66),  S(-26, 52),
          S(0, 0),    S(0, 0),     S(0, 0),    S(0, 0),    S(0, 0),    S(0, 0),    S(0, 0),
          S(0, 0)},
         {S(-155, -75), S(-126, -23), S(-74, -7),  S(-45, -18), S(-14, -16), S(-71, -33),
          S(-111, -20), S(-112, -93), S(-38, -25), S(-18, -10), S(4, -9),    S(22, -9),
          S(0, -14),    S(53, -28),   S(-18, -13), S(-4, -41),  S(8, -14),   S(7, -17),
          S(-13, 14),   S(4, -1),     S(7, 13),    S(24, -10),  S(32, -17),  S(5, -10),
          S(-30, 6),    S(-12, 0),    S(3, 5),     S(15, 13),   S(8, 8),     S(26, 7),
          S(-2, 0),     S(-4, -22),   S(-36, -14), S(-17, -8),  S(-3, 13),   S(-4, 13),
          S(3, 15),     S(0, 4),      S(1, -6),    S(-26, -22), S(-46, -18), S(-25, -6),
          S(-13, 0),    S(-5, 12),    S(5, 10),    S(-7, -4),   S(-7, -11),  S(-31, -18),
          S(-50, -21),  S(-41, -14),  S(-28, -9),  S(-17, -5),  S(-17, -6),  S(-14, -10),
          S(-21, -23),  S(-24, -15),  S(-77, -28), S(-42, -32), S(-44, -15), S(-33, -15),
          S(-28, -13),  S(-22, -23),  S(-40, -26), S(-51, -26)},
         {S(-35, 7),  S(-51, 11), S(-52, 5),  S(-84, 13), S(-75, 12), S(-68, 3),  S(-30, 1),
          S(-56, 0),  S(-20, -6), S(-2, 1),   S(-11, 1),  S(-26, 6),  S(-5, -3),  S(-6, 0),
          S(-11, 4),  S(-26, -4), S(-10, 8),  S(6, 4),    S(6, 8),    S(14, 0),   S(11, 3),
          S(35, 8),   S(16, 5),   S(8, 6),    S(-18, 5),  S(-5, 11),  S(3, 9),    S(16, 20),
          S(9, 14),   S(6, 13),   S(-7, 9),   S(-16, 4),  S(-14, 3),  S(-13, 10), S(-8, 16),
          S(8, 16),   S(6, 15),   S(-8, 12),  S(-9, 8),   S(-6, -6),  S(-15, 2),  S(-1, 9),
          S(-3, 11),  S(-4, 12),  S(-2, 15),  S(0, 9),    S(0, 5),    S(1, -6),   S(-7, 5),
          S(-1, -3),  S(3, -5),   S(-12, 5),  S(-2, 3),   S(5, -1),   S(16, -1),  S(0, -8),
          S(-14, -6), S(1, 3),    S(-13, -1), S(-15, 2),  S(-8, 1),   S(-14, 7),  S(-4, -4),
          S(2, -22)},
         {S(-9, 11),  S(-14, 19), S(-13, 21), S(-15, 20), S(-5, 11),  S(0, 15),    S(-6, 17),
          S(-5, 11),  S(-20, 14), S(-20, 26), S(-5, 23),  S(5, 17),   S(-4, 13),   S(14, 10),
          S(4, 7),    S(3, 2),    S(-31, 12), S(-10, 14), S(-15, 12), S(-16, 10),  S(8, -2),
          S(11, 0),   S(34, -3),  S(-4, -5),  S(-34, 12), S(-24, 12), S(-22, 13),  S(-19, 10),
          S(-17, -2), S(-10, 1),  S(-13, 3),  S(-19, -3), S(-39, 3),  S(-39, 11),  S(-30, 5),
          S(-28, 6),  S(-23, 0),  S(-34, 7),  S(-18, -1), S(-29, -8), S(-38, -1),  S(-38, 3),
          S(-31, 0),  S(-31, 3),  S(-19, -5), S(-22, -3), S(-1, -18), S(-15, -22), S(-38, -6),
          S(-34, 0),  S(-23, -1), S(-25, 0),  S(-18, -8), S(-14, -7), S(-7, -18),  S(-30, -19),
          S(-24, -1), S(-24, 0),  S(-19, 2),  S(-14, -1), S(-9, -8),  S(-12, -3),  S(-17, -7),
          S(-18, -15)},
         {S(-28, 40), S(-27, 44), S(-12, 55), S(8, 41),   S(3, 45),   S(12, 41),  S(53, -5),
          S(0, 31),   S(-1, 26),  S(-15, 47), S(-15, 72), S(-24, 85), S(-25, 95), S(10, 56),
          S(13, 43),  S(43, 35),  S(-1, 30),  S(-3, 38),  S(-5, 61),  S(-1, 65),  S(7, 68),
          S(29, 51),  S(37, 30),  S(26, 34),  S(-11, 41), S(-6, 48),  S(-4, 54),  S(-7, 71),
          S(-5, 73),  S(1, 61),   S(6, 57),   S(8, 42),   S(-6, 35),  S(-9, 54),  S(-5, 52),
          S(-2, 65),  S(0, 60),   S(0, 50),   S(8, 43),   S(8, 41),   S(-4, 24),  S(-1, 39),
          S(0, 47),   S(-1, 43),  S(2, 49),   S(4, 46),   S(15, 33),  S(9, 27),   S(-2, 21),
          S(1, 22),   S(6, 21),   S(9, 28),   S(7, 32),   S(16, 11),  S(19, -3),  S(20, -17),
          S(-5, 19),  S(-5, 18),  S(0, 25),   S(4, 34),   S(5, 21),   S(-3, 15),  S(3, 0),
          S(3, -3)},
         {S(67, -73),  S(78, -27), S(78, -15), S(-23, 17), S(-11, 0),   S(17, 0),    S(64, -9),
          S(138, -99), S(-49, 0),  S(32, 19),  S(-10, 29), S(56, 19),   S(3, 24),    S(8, 34),
          S(36, 24),   S(-15, 5),  S(-68, 4),  S(77, 11),  S(0, 29),    S(-31, 41),  S(-5, 37),
          S(60, 22),   S(22, 23),  S(-32, 2),  S(-41, -9), S(12, 10),   S(-41, 31),  S(-81, 42),
          S(-92, 40),  S(-51, 31), S(-43, 19), S(-103, 4), S(-50, -18), S(-10, 6),   S(-55, 28),
          S(-89, 42),  S(-92, 39), S(-53, 24), S(-48, 13), S(-109, -1), S(-34, -17), S(2, 5),
          S(-39, 23),  S(-43, 31), S(-43, 29), S(-42, 22), S(-18, 6),   S(-47, -11), S(28, -29),
          S(13, 2),    S(8, 11),   S(-10, 19), S(-15, 20), S(-4, 12),   S(10, -1),   S(20, -28),
          S(21, -49),  S(39, -20), S(34, -7),  S(-20, 8),  S(19, -11),  S(-10, 3),   S(28, -16),
          S(34, -55)}}};

    const std::array<EvalScore, 9> knight_mobility = {S(6, -21),  S(17, -20), S(21, -14),
                                                      S(23, -16), S(25, -13), S(24, -9),
                                                      S(23, -8),  S(22, -8),  S(23, -11)};

    const std::array<EvalScore, 14> bishop_mobility = {S(-12, -58), S(-5, -49), S(-1, -41),
                                                       S(0, -33),   S(5, -23),  S(10, -14),
                                                       S(14, -12),  S(16, -7),  S(16, -3),
                                                       S(17, -4),   S(18, -7),  S(20, -6),
                                                       S(16, -3),   S(33, -12)};

    const std::array<EvalScore, 15> rook_mobility = {S(-10, -33), S(-4, -18), S(0, -16), S(2, -12),
                                                     S(0, -6),    S(3, -5),   S(4, -2),  S(6, 0),
                                                     S(5, 5),     S(7, 7),    S(9, 9),   S(10, 11),
                                                     S(9, 14),    S(12, 15),  S(11, 11)};

    const std::array<EvalScore, 28> queen_mobility = {
        S(-61, -17), S(-59, -102), S(-66, -39), S(-64, -31), S(-63, -26), S(-61, -20), S(-59, -14),
        S(-60, 1),   S(-59, 6),    S(-58, 9),   S(-58, 16),  S(-58, 21),  S(-57, 26),  S(-57, 30),
        S(-57, 35),  S(-56, 37),   S(-55, 40),  S(-57, 47),  S(-54, 49),  S(-53, 48),  S(-44, 44),
        S(-42, 43),  S(-41, 43),   S(-37, 40),  S(-18, 20),  S(21, 6),    S(32, 0),    S(111, -42)};

    const EvalScore stacked_pawn_penalty = S(2, 21);

    const EvalScore bishop_pair_bonus = S(18, 49);

    const std::array<EvalScore, 8> passed_pawn_bonus = {S(10, 20), S(0, -5),  S(5, 121),
                                                        S(12, 56), S(-5, 21), S(-4, -10),
                                                        S(0, -19), S(10, 20)};

    const std::array<EvalScore, 8> rook_open_file_bonus = {S(24, 5),  S(22, 2), S(19, 8), S(22, 5),
                                                           S(21, 11), S(33, 1), S(42, 1), S(55, 1)};

    const std::array<EvalScore, 8> rook_semi_open_file_bonus = {S(1, 31), S(7, 8), S(6, 10),
                                                                S(12, 2), S(7, 5), S(14, 1),
                                                                S(22, 2), S(4, 21)};

    const std::array<EvalScore, 8> isolated_pawn_penalty = {S(1, -7), S(1, 9), S(6, 3), S(5, 10),
                                                            S(9, 9),  S(1, 3), S(0, 9), S(0, -6)};

    const std::array<EvalScore, 64> knight_outpost_bonus = {
        S(10, 0),   S(7, -2),  S(-1, -2),  S(-2, -2),  S(-7, -2),  S(0, 0),   S(4, -3),
        S(0, 3),    S(0, 0),   S(-1, -3),  S(0, -3),   S(-2, -3),  S(-1, -2), S(-5, -1),
        S(0, -3),   S(-3, 0),  S(-27, -4), S(4, 7),    S(45, -10), S(28, 6),  S(58, -20),
        S(45, -2),  S(-2, 0),  S(-6, -17), S(14, -16), S(17, 1),   S(21, 7),  S(28, -2),
        S(33, 3),   S(39, -1), S(49, -3),  S(24, 1),   S(15, 8),   S(16, 6),  S(21, -1),
        S(20, 0),   S(31, -3), S(33, 0),   S(40, -2),  S(22, 7),   S(0, 0),   S(-1, 2),
        S(4, 4),    S(2, -6),  S(4, -7),   S(3, 3),    S(11, -5),  S(7, -3),  S(-1, -5),
        S(-10, 7),  S(-4, 8),  S(-8, -4),  S(-9, -4),  S(-10, -2), S(-17, 5), S(0, -10),
        S(-6, 1),   S(1, -8),  S(-34, 9),  S(-20, 8),  S(-18, -4), S(-21, 5), S(-21, 12),
        S(-15, -21)};

    const std::array<EvalScore, 8> supported_pawn_bonus = {S(0, 0),   S(119, 130), S(18, 52),
                                                           S(12, 14), S(12, 4),    S(17, 7),
                                                           S(52, 73), S(0, 0)};

    const std::array<EvalScore, 8> pawn_duo_bonus = {S(0, 0),  S(-22, 166), S(48, 79), S(19, 24),
                                                     S(10, 6), S(8, 1),     S(3, 0),   S(0, 0)};

    const std::array<EvalScore, 8> king_open_file_penalty = {S(79, 2),  S(89, 0),  S(56, 2),
                                                             S(52, 0),  S(41, -2), S(70, -7),
                                                             S(65, -5), S(61, -12)};

    const std::array<EvalScore, 8> king_semi_open_file_penalty = {S(29, -46), S(46, -22),
                                                                  S(31, -18), S(18, -9),
                                                                  S(16, -6),  S(30, -14),
                                                                  S(39, -24), S(40, -35)};

    const std::array<EvalScore, 24> pawn_shelter_table = {
        S(-56, 40), S(7, 13),  S(-11, 0),  S(-1, -4), S(5, -5), S(8, -8), S(9, -8), S(-7, -4),
        S(0, 0),    S(-6, 22), S(-17, -4), S(-1, -1), S(3, -5), S(3, -8), S(2, -7), S(-11, 0),
        S(-24, 32), S(27, 1),  S(-19, 2),  S(-7, -1), S(0, -1), S(5, -8), S(4, -8), S(0, -3)};

    const std::array<EvalScore, 24> pawn_storm_table = {
        S(8, 0),  S(12, -7), S(8, -1), S(2, 1),   S(-6, 7),  S(11, 14),  S(-11, 22), S(-19, 2),
        S(0, 0),  S(7, -1),  S(1, 3),  S(-7, 0),  S(-14, 1), S(-24, 14), S(-40, 17), S(-3, -1),
        S(20, 6), S(10, -3), S(-9, 1), S(-4, -4), S(-5, -7), S(-7, -5),  S(-23, 11), S(-16, 0)};

    const std::array<EvalScore, 8> our_king_pp_proximity = {S(0, 0),    S(0, 19),   S(-4, 6),
                                                            S(-8, -8),  S(-6, -18), S(0, -22),
                                                            S(12, -23), S(8, -24)};

    const std::array<EvalScore, 8> their_king_pp_proximity = {S(0, 0),   S(-51, -28), S(13, -29),
                                                              S(8, -5),  S(9, 6),     S(5, 17),
                                                              S(-2, 24), S(-13, 20)};

    const std::array<EvalScore, 8> knight_king_proximity_bonus = {S(0, 0),   S(3, 4), S(2, -2),
                                                                  S(15, -7), S(0, 0), S(0, 0),
                                                                  S(0, 0),   S(0, 0)};

    const std::array<EvalScore, 8> bishop_king_proximity_bonus = {S(0, 0),   S(3, 2),    S(8, 0),
                                                                  S(25, -8), S(11, -16), S(0, 0),
                                                                  S(0, 0),   S(0, 0)};

    const std::array<EvalScore, 8> rook_king_proximity_bonus = {S(0, 0),   S(8, -8),   S(14, -11),
                                                                S(20, -7), S(40, -15), S(41, -15),
                                                                S(0, 0),   S(0, 0)};

    const std::array<EvalScore, 8> queen_king_proximity_bonus = {S(0, 0),   S(0, 6),   S(2, 13),
                                                                 S(11, 23), S(19, 35), S(37, 37),
                                                                 S(109, 7), S(101, 0)};

    const EvalScore pawn_minor_threat = S(32, 17);

    const EvalScore pawn_major_threat = S(40, -3);

    const EvalScore passed_pawn_no_threat = S(-93, 30);

}