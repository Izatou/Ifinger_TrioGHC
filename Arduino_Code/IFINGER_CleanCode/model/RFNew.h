#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class DecisionTree {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[1] <= -0.9087012410163879) {
                            if (x[1] <= -1.090778112411499) {
                                if (x[1] <= -1.1216591596603394) {
                                    return 2;
                                }

                                else {
                                    return 0;
                                }
                            }

                            else {
                                return 2;
                            }
                        }

                        else {
                            if (x[0] <= 1.0967363119125366) {
                                if (x[0] <= -1.2634985446929932) {
                                    if (x[2] <= 1.5771251320838928) {
                                        if (x[0] <= -2.981305480003357) {
                                            return 0;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[0] <= 0.3844696581363678) {
                                        if (x[0] <= -0.9190766215324402) {
                                            return 0;
                                        }

                                        else {
                                            if (x[0] <= -0.3125014901161194) {
                                                if (x[1] <= -0.48143281042575836) {
                                                    if (x[0] <= -0.5974209010601044) {
                                                        if (x[2] <= -0.484411284327507) {
                                                            return 2;
                                                        }

                                                        else {
                                                            return 1;
                                                        }
                                                    }

                                                    else {
                                                        return 0;
                                                    }
                                                }

                                                else {
                                                    return 2;
                                                }
                                            }

                                            else {
                                                if (x[1] <= -0.08403993118554354) {
                                                    return 1;
                                                }

                                                else {
                                                    return 0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        return 2;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1.7894112467765808) {
                                    return 2;
                                }

                                else {
                                    if (x[2] <= 2.2154042720794678) {
                                        if (x[2] <= 2.1380221843719482) {
                                            return 1;
                                        }

                                        else {
                                            if (x[2] <= 2.2048654556274414) {
                                                return 0;
                                            }

                                            else {
                                                return 2;
                                            }
                                        }
                                    }

                                    else {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }

                protected:
                };
            }
        }
    }