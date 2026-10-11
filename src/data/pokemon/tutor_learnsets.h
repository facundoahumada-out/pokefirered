static const u16 sTutorMoves[TUTOR_MOVE_COUNT] =
{
    [TUTOR_MOVE_MEGA_PUNCH] = MOVE_MEGA_PUNCH,
    [TUTOR_MOVE_SWORDS_DANCE] = MOVE_SWORDS_DANCE,
    [TUTOR_MOVE_MEGA_KICK] = MOVE_MEGA_KICK,
    [TUTOR_MOVE_BODY_SLAM] = MOVE_BODY_SLAM,
    [TUTOR_MOVE_DOUBLE_EDGE] = MOVE_DOUBLE_EDGE,
    [TUTOR_MOVE_COUNTER] = MOVE_COUNTER,
    [TUTOR_MOVE_SEISMIC_TOSS] = MOVE_SEISMIC_TOSS,
    [TUTOR_MOVE_MIMIC] = MOVE_MIMIC,
    [TUTOR_MOVE_METRONOME] = MOVE_METRONOME,
    [TUTOR_MOVE_SOFT_BOILED] = MOVE_SOFT_BOILED,
    [TUTOR_MOVE_DREAM_EATER] = MOVE_DREAM_EATER,
    [TUTOR_MOVE_THUNDER_WAVE] = MOVE_THUNDER_WAVE,
    [TUTOR_MOVE_EXPLOSION] = MOVE_EXPLOSION,
    [TUTOR_MOVE_ROCK_SLIDE] = MOVE_ROCK_SLIDE,
    [TUTOR_MOVE_SUBSTITUTE] = MOVE_SUBSTITUTE,
    [TUTOR_MOVE_FIRE_PUNCH] = MOVE_FIRE_PUNCH,
    [TUTOR_MOVE_THUNDER_PUNCH] = MOVE_THUNDER_PUNCH,
    [TUTOR_MOVE_ICE_PUNCH] = MOVE_ICE_PUNCH,
};

#define TUTOR(move) (1 << (TUTOR_##move))

static const u32 sTutorLearnsets[NUM_SPECIES] =
{
    [SPECIES_NONE] = 0,

    [SPECIES_BULBASAUR] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_IVYSAUR] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VENUSAUR] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHARMANDER] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_CHARMELEON] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_CHARIZARD] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SQUIRTLE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_WARTORTLE] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_BLASTOISE] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_CATERPIE] = 0,

    [SPECIES_METAPOD] = 0,

    [SPECIES_BUTTERFREE] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WEEDLE] = 0,

    [SPECIES_KAKUNA] = 0,

    [SPECIES_BEEDRILL] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIDGEY] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIDGEOTTO] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIDGEOT] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RATTATA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RATICATE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPEAROW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FEAROW] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EKANS] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARBOK] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PIKACHU] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_RAICHU] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SANDSHREW] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SANDSLASH] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORAN_F] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORINA] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDOQUEEN] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_NIDORAN_M] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDORINO] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NIDOKING] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_CLEFAIRY] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SOFT_BOILED)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_CLEFABLE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SOFT_BOILED)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_VULPIX] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NINETALES] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JIGGLYPUFF] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_THUNDER_WAVE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH)
                         | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_WIGGLYTUFF] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_THUNDER_WAVE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH)
                         | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ZUBAT] = TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLBAT] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ODDISH] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GLOOM] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VILEPLUME] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PARAS] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PARASECT] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VENONAT] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VENOMOTH] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DIGLETT] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DUGTRIO] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEOWTH] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PERSIAN] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PSYDUCK] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_GOLDUCK] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MANKEY] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_PRIMEAPE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_GROWLITHE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARCANINE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POLIWAG] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_POLIWHIRL] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_POLIWRATH] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ABRA] = TUTOR(MOVE_MEGA_PUNCH)
                   | TUTOR(MOVE_MEGA_KICK)
                   | TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_COUNTER)
                   | TUTOR(MOVE_SEISMIC_TOSS)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_METRONOME)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_THUNDER_WAVE)
                   | TUTOR(MOVE_SUBSTITUTE)
                   | TUTOR(MOVE_FIRE_PUNCH)
                   | TUTOR(MOVE_THUNDER_PUNCH)
                   | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_KADABRA] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ALAKAZAM] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MACHOP] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MACHOKE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MACHAMP] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_BELLSPROUT] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WEEPINBELL] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VICTREEBEL] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TENTACOOL] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TENTACRUEL] = TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GEODUDE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_GRAVELER] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_GOLEM] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_EXPLOSION)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_PONYTA] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RAPIDASH] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLOWPOKE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLOWBRO] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MAGNEMITE] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGNETON] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FARFETCHD] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DODUO] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DODRIO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEEL] = TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DEWGONG] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GRIMER] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MUK] = TUTOR(MOVE_BODY_SLAM)
                  | TUTOR(MOVE_MIMIC)
                  | TUTOR(MOVE_EXPLOSION)
                  | TUTOR(MOVE_SUBSTITUTE)
                  | TUTOR(MOVE_FIRE_PUNCH)
                  | TUTOR(MOVE_THUNDER_PUNCH)
                  | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SHELLDER] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLOYSTER] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GASTLY] = TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_HAUNTER] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_GENGAR] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ONIX] = TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_EXPLOSION)
                   | TUTOR(MOVE_ROCK_SLIDE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DROWZEE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_HYPNO] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_THUNDER_PUNCH)
                    | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_KRABBY] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KINGLER] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VOLTORB] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ELECTRODE] = TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EXEGGCUTE] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_EXEGGUTOR] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CUBONE] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MAROWAK] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_HITMONLEE] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HITMONCHAN] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_METRONOME)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH)
                         | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_LICKITUNG] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_KOFFING] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WEEZING] = TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RHYHORN] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RHYDON] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_CHANSEY] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_SOFT_BOILED)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_TANGELA] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KANGASKHAN] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH)
                         | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_HORSEA] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEADRA] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOLDEEN] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEAKING] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STARYU] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STARMIE] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MR_MIME] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SCYTHER] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JYNX] = TUTOR(MOVE_MEGA_PUNCH)
                   | TUTOR(MOVE_MEGA_KICK)
                   | TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_COUNTER)
                   | TUTOR(MOVE_SEISMIC_TOSS)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_METRONOME)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_SUBSTITUTE)
                   | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ELECTABUZZ] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_THUNDER_WAVE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH)
                         | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MAGMAR] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_PINSIR] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TAUROS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGIKARP] = 0,

    [SPECIES_GYARADOS] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LAPRAS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DITTO] = 0,

    [SPECIES_EEVEE] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VAPOREON] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JOLTEON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLAREON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PORYGON] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OMANYTE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OMASTAR] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KABUTO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KABUTOPS] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AERODACTYL] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNORLAX] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ARTICUNO] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZAPDOS] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MOLTRES] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DRATINI] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DRAGONAIR] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DRAGONITE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MEWTWO] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MEW] = TUTOR(MOVE_MEGA_PUNCH)
                  | TUTOR(MOVE_SWORDS_DANCE)
                  | TUTOR(MOVE_MEGA_KICK)
                  | TUTOR(MOVE_BODY_SLAM)
                  | TUTOR(MOVE_DOUBLE_EDGE)
                  | TUTOR(MOVE_COUNTER)
                  | TUTOR(MOVE_SEISMIC_TOSS)
                  | TUTOR(MOVE_MIMIC)
                  | TUTOR(MOVE_METRONOME)
                  | TUTOR(MOVE_SOFT_BOILED)
                  | TUTOR(MOVE_DREAM_EATER)
                  | TUTOR(MOVE_THUNDER_WAVE)
                  | TUTOR(MOVE_EXPLOSION)
                  | TUTOR(MOVE_ROCK_SLIDE)
                  | TUTOR(MOVE_SUBSTITUTE)
                  | TUTOR(MOVE_FIRE_PUNCH)
                  | TUTOR(MOVE_THUNDER_PUNCH)
                  | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_CHIKORITA] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BAYLEEF] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MEGANIUM] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CYNDAQUIL] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_QUILAVA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TYPHLOSION] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_TOTODILE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_CROCONAW] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_FERALIGATR] = TUTOR(MOVE_MEGA_PUNCH)
                         | TUTOR(MOVE_SWORDS_DANCE)
                         | TUTOR(MOVE_MEGA_KICK)
                         | TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_SEISMIC_TOSS)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE)
                         | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SENTRET] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_FURRET] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_HOOTHOOT] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NOCTOWL] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LEDYBA] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_LEDIAN] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SPINARAK] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARIADOS] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CROBAT] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CHINCHOU] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LANTURN] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PICHU] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLEFFA] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_SOFT_BOILED)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_IGGLYBUFF] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOGEPI] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_SOFT_BOILED)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TOGETIC] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_SOFT_BOILED)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NATU] = TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_THUNDER_WAVE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_XATU] = TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_DREAM_EATER)
                   | TUTOR(MOVE_THUNDER_WAVE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAREEP] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLAAFFY] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_AMPHAROS] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_BELLOSSOM] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MARILL] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_AZUMARILL] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SUDOWOODO] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_POLITOED] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HOPPIP] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SKIPLOOM] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JUMPLUFF] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AIPOM] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_THUNDER_PUNCH)
                    | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SUNKERN] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUNFLORA] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_YANMA] = TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WOOPER] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_QUAGSIRE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ESPEON] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_UMBREON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MURKROW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLOWKING] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MISDREAVUS] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_DREAM_EATER)
                         | TUTOR(MOVE_THUNDER_WAVE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_UNOWN] = 0,

    [SPECIES_WOBBUFFET] = 0,

    [SPECIES_GIRAFARIG] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PINECO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FORRETRESS] = TUTOR(MOVE_BODY_SLAM)
                         | TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_COUNTER)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_EXPLOSION)
                         | TUTOR(MOVE_ROCK_SLIDE)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DUNSPARCE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GLIGAR] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STEELIX] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNUBBULL] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_GRANBULL] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_QWILFISH] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SCIZOR] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHUCKLE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HERACROSS] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SNEASEL] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_TEDDIURSA] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_METRONOME)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_URSARING] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SLUGMA] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MAGCARGO] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWINUB] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PILOSWINE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CORSOLA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_REMORAID] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OCTILLERY] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DELIBIRD] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MANTINE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SKARMORY] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HOUNDOUR] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HOUNDOOM] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KINGDRA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PHANPY] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DONPHAN] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PORYGON2] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_STANTLER] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SMEARGLE] = 0,

    [SPECIES_TYROGUE] = TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HITMONTOP] = TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SMOOCHUM] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ELEKID] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MAGBY] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MILTANK] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_BLISSEY] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_SOFT_BOILED)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_RAIKOU] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ENTEI] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SUICUNE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LARVITAR] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PUPITAR] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TYRANITAR] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_LUGIA] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HO_OH] = TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CELEBI] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_OLD_UNOWN_B] = 0,

    [SPECIES_OLD_UNOWN_C] = 0,

    [SPECIES_OLD_UNOWN_D] = 0,

    [SPECIES_OLD_UNOWN_E] = 0,

    [SPECIES_OLD_UNOWN_F] = 0,

    [SPECIES_OLD_UNOWN_G] = 0,

    [SPECIES_OLD_UNOWN_H] = 0,

    [SPECIES_OLD_UNOWN_I] = 0,

    [SPECIES_OLD_UNOWN_J] = 0,

    [SPECIES_OLD_UNOWN_K] = 0,

    [SPECIES_OLD_UNOWN_L] = 0,

    [SPECIES_OLD_UNOWN_M] = 0,

    [SPECIES_OLD_UNOWN_N] = 0,

    [SPECIES_OLD_UNOWN_O] = 0,

    [SPECIES_OLD_UNOWN_P] = 0,

    [SPECIES_OLD_UNOWN_Q] = 0,

    [SPECIES_OLD_UNOWN_R] = 0,

    [SPECIES_OLD_UNOWN_S] = 0,

    [SPECIES_OLD_UNOWN_T] = 0,

    [SPECIES_OLD_UNOWN_U] = 0,

    [SPECIES_OLD_UNOWN_V] = 0,

    [SPECIES_OLD_UNOWN_W] = 0,

    [SPECIES_OLD_UNOWN_X] = 0,

    [SPECIES_OLD_UNOWN_Y] = 0,

    [SPECIES_OLD_UNOWN_Z] = 0,

    [SPECIES_TREECKO] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_GROVYLE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SCEPTILE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_TORCHIC] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_COMBUSKEN] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_BLAZIKEN] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MUDKIP] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MARSHTOMP] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SWAMPERT] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_POOCHYENA] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MIGHTYENA] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZIGZAGOON] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LINOONE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WURMPLE] = 0,

    [SPECIES_SILCOON] = 0,

    [SPECIES_BEAUTIFLY] = TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CASCOON] = 0,

    [SPECIES_DUSTOX] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LOTAD] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LOMBRE] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_LUDICOLO] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SEEDOT] = TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NUZLEAF] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHIFTRY] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NINCADA] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NINJASK] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHEDINJA] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TAILLOW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SWELLOW] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHROOMISH] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BRELOOM] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SPINDA] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_WINGULL] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_PELIPPER] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SURSKIT] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MASQUERAIN] = TUTOR(MOVE_DOUBLE_EDGE)
                         | TUTOR(MOVE_MIMIC)
                         | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WAILMER] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WAILORD] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SKITTY] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DELCATTY] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_KECLEON] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_BALTOY] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CLAYDOL] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NOSEPASS] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_TORKOAL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SABLEYE] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_BARBOACH] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WHISCASH] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUVDISC] = TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CORPHISH] = TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CRAWDAUNT] = TUTOR(MOVE_SWORDS_DANCE)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FEEBAS] = TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MILOTIC] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CARVANHA] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHARPEDO] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_TRAPINCH] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VIBRAVA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_FLYGON] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MAKUHITA] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_HARIYAMA] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ELECTRIKE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_MANECTRIC] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_NUMEL] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CAMERUPT] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPHEAL] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEALEO] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WALREIN] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CACNEA] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_CACTURNE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_SNORUNT] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GLALIE] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LUNATONE] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SOLROCK] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_EXPLOSION)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AZURILL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SPOINK] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GRUMPIG] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_PLUSLE] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_METRONOME)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MINUN] = TUTOR(MOVE_MEGA_PUNCH)
                    | TUTOR(MOVE_MEGA_KICK)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_SEISMIC_TOSS)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_METRONOME)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_MAWILE] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_SWORDS_DANCE)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MEDITITE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MEDICHAM] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SWABLU] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ALTARIA] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WYNAUT] = 0,

    [SPECIES_DUSKULL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_DUSCLOPS] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ROSELIA] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SLAKOTH] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_VIGOROTH] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SLAKING] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_GULPIN] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_SWALOT] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_TROPIUS] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_WHISMUR] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_LOUDRED] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_EXPLOUD] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_CLAMPERL] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_HUNTAIL] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GOREBYSS] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ABSOL] = TUTOR(MOVE_SWORDS_DANCE)
                    | TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_COUNTER)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHUPPET] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BANETTE] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SEVIPER] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ZANGOOSE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_SWORDS_DANCE)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_RELICANTH] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARON] = TUTOR(MOVE_BODY_SLAM)
                   | TUTOR(MOVE_DOUBLE_EDGE)
                   | TUTOR(MOVE_MIMIC)
                   | TUTOR(MOVE_ROCK_SLIDE)
                   | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LAIRON] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_AGGRON] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_CASTFORM] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_VOLBEAT] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_ILLUMISE] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_METRONOME)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_LILEEP] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_CRADILY] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ANORITH] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ARMALDO] = TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_RALTS] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_DREAM_EATER)
                    | TUTOR(MOVE_THUNDER_WAVE)
                    | TUTOR(MOVE_SUBSTITUTE)
                    | TUTOR(MOVE_FIRE_PUNCH)
                    | TUTOR(MOVE_THUNDER_PUNCH)
                    | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_KIRLIA] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_GARDEVOIR] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_DREAM_EATER)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_BAGON] = TUTOR(MOVE_BODY_SLAM)
                    | TUTOR(MOVE_DOUBLE_EDGE)
                    | TUTOR(MOVE_MIMIC)
                    | TUTOR(MOVE_ROCK_SLIDE)
                    | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SHELGON] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_SALAMENCE] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_BELDUM] = 0,

    [SPECIES_METANG] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_METAGROSS] = TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_THUNDER_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_REGIROCK] = TUTOR(MOVE_MEGA_PUNCH)
                       | TUTOR(MOVE_MEGA_KICK)
                       | TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_COUNTER)
                       | TUTOR(MOVE_SEISMIC_TOSS)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_EXPLOSION)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE)
                       | TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_REGICE] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_EXPLOSION)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_REGISTEEL] = TUTOR(MOVE_MEGA_PUNCH)
                        | TUTOR(MOVE_MEGA_KICK)
                        | TUTOR(MOVE_BODY_SLAM)
                        | TUTOR(MOVE_DOUBLE_EDGE)
                        | TUTOR(MOVE_COUNTER)
                        | TUTOR(MOVE_SEISMIC_TOSS)
                        | TUTOR(MOVE_MIMIC)
                        | TUTOR(MOVE_THUNDER_WAVE)
                        | TUTOR(MOVE_EXPLOSION)
                        | TUTOR(MOVE_ROCK_SLIDE)
                        | TUTOR(MOVE_SUBSTITUTE)
                        | TUTOR(MOVE_THUNDER_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_KYOGRE] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_GROUDON] = TUTOR(MOVE_MEGA_PUNCH)
                      | TUTOR(MOVE_SWORDS_DANCE)
                      | TUTOR(MOVE_MEGA_KICK)
                      | TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_COUNTER)
                      | TUTOR(MOVE_SEISMIC_TOSS)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_ROCK_SLIDE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_RAYQUAZA] = TUTOR(MOVE_BODY_SLAM)
                       | TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_THUNDER_WAVE)
                       | TUTOR(MOVE_ROCK_SLIDE)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LATIAS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_LATIOS] = TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_JIRACHI] = TUTOR(MOVE_BODY_SLAM)
                      | TUTOR(MOVE_DOUBLE_EDGE)
                      | TUTOR(MOVE_MIMIC)
                      | TUTOR(MOVE_METRONOME)
                      | TUTOR(MOVE_DREAM_EATER)
                      | TUTOR(MOVE_THUNDER_WAVE)
                      | TUTOR(MOVE_SUBSTITUTE)
                      | TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_DEOXYS] = TUTOR(MOVE_MEGA_PUNCH)
                     | TUTOR(MOVE_MEGA_KICK)
                     | TUTOR(MOVE_BODY_SLAM)
                     | TUTOR(MOVE_DOUBLE_EDGE)
                     | TUTOR(MOVE_COUNTER)
                     | TUTOR(MOVE_SEISMIC_TOSS)
                     | TUTOR(MOVE_MIMIC)
                     | TUTOR(MOVE_DREAM_EATER)
                     | TUTOR(MOVE_THUNDER_WAVE)
                     | TUTOR(MOVE_ROCK_SLIDE)
                     | TUTOR(MOVE_SUBSTITUTE)
                     | TUTOR(MOVE_FIRE_PUNCH)
                     | TUTOR(MOVE_THUNDER_PUNCH)
                     | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_CHIMECHO] = TUTOR(MOVE_DOUBLE_EDGE)
                       | TUTOR(MOVE_MIMIC)
                       | TUTOR(MOVE_DREAM_EATER)
                       | TUTOR(MOVE_SUBSTITUTE),

    [SPECIES_ANNIHILAPE] = TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH)
                         | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MAGNEZONE] = 0,

    [SPECIES_LICKILICKY] = TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH)
                         | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_RHYPERIOR] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH)
                        | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_TANGROWTH] = 0,

    [SPECIES_ELECTIVIRE] = TUTOR(MOVE_FIRE_PUNCH)
                         | TUTOR(MOVE_THUNDER_PUNCH)
                         | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MAGMORTAR] = TUTOR(MOVE_FIRE_PUNCH)
                        | TUTOR(MOVE_THUNDER_PUNCH),

    [SPECIES_LEAFEON] = 0,

    [SPECIES_GLACEON] = 0,

    [SPECIES_SYLVEON] = 0,

    [SPECIES_PORYGON_Z] = 0,

    [SPECIES_AMBIPOM] = TUTOR(MOVE_FIRE_PUNCH)
                      | TUTOR(MOVE_THUNDER_PUNCH)
                      | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_YANMEGA] = 0,

    [SPECIES_HONCHKROW] = 0,

    [SPECIES_MISMAGIUS] = 0,

    [SPECIES_FARIGIRAF] = 0,

    [SPECIES_GLISCOR] = 0,

    [SPECIES_WEAVILE] = TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MAMOSWINE] = 0,

    [SPECIES_DUDUNSPARCE] = 0,

    [SPECIES_WYRDEER] = 0,

    [SPECIES_CHINGLING] = 0,

    [SPECIES_BONSLY] = 0,

    [SPECIES_MIME_JR] = 0,

    [SPECIES_HAPPINY] = 0,

    [SPECIES_MUNCHLAX] = TUTOR(MOVE_FIRE_PUNCH)
                       | TUTOR(MOVE_THUNDER_PUNCH)
                       | TUTOR(MOVE_ICE_PUNCH),

    [SPECIES_MANTYKE] = 0,
};
