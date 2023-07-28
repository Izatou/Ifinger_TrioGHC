#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RF {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[2] = { 0 };
                        // tree #1
                        if (x[2] <= 10.5) {
                            if (x[5] <= 512.0) {
                                if (x[0] <= 1.5) {
                                    if (x[9] <= 249.375) {
                                        if (x[7] <= 0.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 656.5) {
                                    if (x[0] <= 10.0) {
                                        if (x[4] <= 533.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[8] <= 371.9250030517578) {
                                                if (x[11] <= 388.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #2
                        if (x[2] <= 10.5) {
                            if (x[10] <= 350.125) {
                                if (x[7] <= 2.0) {
                                    if (x[9] <= 224.25) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[11] <= 474.5) {
                                    if (x[9] <= 406.75) {
                                        if (x[2] <= 8.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[3] <= 544.5) {
                                                if (x[10] <= 373.625) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 542.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #3
                        if (x[3] <= 454.5) {
                            if (x[0] <= 1.5) {
                                if (x[3] <= 333.5) {
                                    if (x[10] <= 211.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[2] <= 10.5) {
                                if (x[10] <= 351.125) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[8] <= 438.4750061035156) {
                                        if (x[1] <= 3367.0) {
                                            if (x[11] <= 418.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #4
                        if (x[0] <= 1.5) {
                            if (x[7] <= 11.5) {
                                if (x[8] <= 409.4750061035156) {
                                    if (x[5] <= 248.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[9] <= 317.875) {
                                            if (x[9] <= 269.875) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[10] <= 425.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[3] <= 605.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #5
                        if (x[2] <= 10.5) {
                            if (x[10] <= 351.125) {
                                if (x[5] <= 277.5) {
                                    if (x[9] <= 211.875) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[8] <= 428.9750061035156) {
                                    if (x[11] <= 413.0) {
                                        if (x[2] <= 8.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[9] <= 376.875) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #6
                        if (x[4] <= 533.0) {
                            if (x[7] <= 2.0) {
                                if (x[7] <= 0.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[10] <= 280.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[9] <= 443.75) {
                                if (x[10] <= 337.125) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[7] <= 12.0) {
                                        if (x[1] <= 3367.0) {
                                            if (x[5] <= 523.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 9.5) {
                                                if (x[0] <= 6.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[1] <= 3426.5) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #7
                        if (x[1] <= 3228.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 9.5) {
                                if (x[10] <= 511.5) {
                                    if (x[7] <= 11.5) {
                                        if (x[11] <= 329.75) {
                                            if (x[10] <= 262.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 3289.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[10] <= 419.0) {
                                                    if (x[7] <= 7.5) {
                                                        votes[0] += 1;
                                                    }

                                                    else {
                                                        if (x[0] <= 4.5) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[0] += 1;
                                                        }
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #8
                        if (x[1] <= 3228.5) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 9.5) {
                                if (x[2] <= 10.5) {
                                    if (x[5] <= 713.0) {
                                        if (x[7] <= 11.5) {
                                            if (x[3] <= 443.5) {
                                                if (x[8] <= 286.9750061035156) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[5] <= 545.0) {
                                                    if (x[5] <= 524.0) {
                                                        votes[1] += 1;
                                                    }

                                                    else {
                                                        votes[0] += 1;
                                                    }
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #9
                        if (x[5] <= 512.0) {
                            if (x[2] <= 3.5) {
                                if (x[1] <= 3067.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[10] <= 284.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[8] <= 435.45001220703125) {
                                if (x[8] <= 315.4750061035156) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[11] <= 420.0) {
                                        if (x[1] <= 3475.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #10
                        if (x[1] <= 3144.0) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[9] <= 440.75) {
                                if (x[4] <= 513.5) {
                                    if (x[1] <= 3255.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[7] <= 11.5) {
                                        if (x[0] <= 12.0) {
                                            if (x[3] <= 524.5) {
                                                if (x[5] <= 524.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 2; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }