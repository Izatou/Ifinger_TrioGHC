#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class GD {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[2] = { 0 };
                        // tree #1
                        if (x[0] <= 735.0) {
                            if (x[0] <= 665.0) {
                                if (x[0] <= 514.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 526.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 690.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 744.0) {
                                if (x[1] <= 487.5) {
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

                        // tree #2
                        if (x[1] <= 459.0) {
                            if (x[0] <= 663.5) {
                                if (x[1] <= 372.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 375.5) {
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
                            if (x[1] <= 572.5) {
                                if (x[0] <= 735.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 744.0) {
                                        if (x[1] <= 487.5) {
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
                                votes[1] += 1;
                            }
                        }

                        // tree #3
                        if (x[0] <= 735.0) {
                            if (x[1] <= 372.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 375.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[1] <= 420.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 665.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 690.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 507.0) {
                                if (x[1] <= 493.5) {
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

                        // tree #4
                        if (x[0] <= 735.0) {
                            if (x[0] <= 665.0) {
                                if (x[0] <= 514.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[0] <= 526.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 443.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 744.0) {
                                if (x[1] <= 487.5) {
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

                        // tree #5
                        if (x[1] <= 459.0) {
                            if (x[0] <= 663.5) {
                                if (x[1] <= 372.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[1] <= 375.5) {
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
                            if (x[0] <= 735.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 507.0) {
                                    if (x[0] <= 744.0) {
                                        if (x[1] <= 487.5) {
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
                                    votes[1] += 1;
                                }
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