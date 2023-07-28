#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class DBP {
                public:
                    /**
                    * Predict class for features vector
                    */
                    float predict(float *x) {
                        float y_pred = 0;
                        // tree #1
                        if (x[2] <= 585.0) {
                            if (x[0] <= 1975.0) {
                                if (x[0] <= 1906.5) {
                                    y_pred += 87.0;
                                }

                                else {
                                    y_pred += 84.0;
                                }
                            }

                            else {
                                if (x[1] <= 739.5) {
                                    if (x[1] <= 649.5) {
                                        y_pred += 112.0;
                                    }

                                    else {
                                        y_pred += 115.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 2053.5) {
                                        y_pred += 100.0;
                                    }

                                    else {
                                        if (x[1] <= 830.0) {
                                            y_pred += 90.0;
                                        }

                                        else {
                                            y_pred += 84.0;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 1875.0) {
                                if (x[2] <= 741.0) {
                                    if (x[0] <= 2320.0) {
                                        if (x[1] <= 809.0) {
                                            y_pred += 62.0;
                                        }

                                        else {
                                            if (x[0] <= 2009.5) {
                                                if (x[0] <= 1916.0) {
                                                    y_pred += 73.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1013.5) {
                                                    if (x[2] <= 659.5) {
                                                        if (x[1] <= 943.0) {
                                                            y_pred += 66.0;
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 79.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2247.5) {
                                                        y_pred += 81.0;
                                                    }

                                                    else {
                                                        y_pred += 80.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 925.5) {
                                            if (x[1] <= 890.0) {
                                                if (x[1] <= 852.5) {
                                                    y_pred += 89.0;
                                                }

                                                else {
                                                    y_pred += 98.0;
                                                }
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 613.0) {
                                                y_pred += 86.0;
                                            }

                                            else {
                                                if (x[1] <= 957.5) {
                                                    y_pred += 109.0;
                                                }

                                                else {
                                                    if (x[1] <= 1234.0) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 109.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1451.5) {
                                        if (x[2] <= 1255.0) {
                                            if (x[0] <= 3238.0) {
                                                if (x[0] <= 2161.0) {
                                                    if (x[2] <= 893.5) {
                                                        if (x[1] <= 919.0) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 927.5) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 838.5) {
                                                        if (x[2] <= 757.5) {
                                                            if (x[1] <= 1001.5) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 60.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2599.5) {
                                                                if (x[0] <= 2373.5) {
                                                                    y_pred += 88.0;
                                                                }

                                                                else {
                                                                    y_pred += 89.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1251.0) {
                                                                    y_pred += 77.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 796.0) {
                                                                        y_pred += 79.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 82.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2316.0) {
                                                            y_pred += 78.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 888.0) {
                                                                if (x[2] <= 874.0) {
                                                                    y_pred += 71.0;
                                                                }

                                                                else {
                                                                    y_pred += 69.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1291.0) {
                                                                    if (x[0] <= 2802.0) {
                                                                        y_pred += 74.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 76.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 69.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 61.0;
                                            }
                                        }

                                        else {
                                            y_pred += 93.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1608.5) {
                                            if (x[0] <= 2326.0) {
                                                y_pred += 75.0;
                                            }

                                            else {
                                                if (x[0] <= 3003.5) {
                                                    if (x[0] <= 2501.5) {
                                                        if (x[1] <= 1550.0) {
                                                            y_pred += 62.0;
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1509.0) {
                                                            y_pred += 70.0;
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 64.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1380.5) {
                                                if (x[0] <= 3417.5) {
                                                    if (x[1] <= 1637.5) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1858.5) {
                                                            if (x[2] <= 1305.5) {
                                                                if (x[1] <= 1674.0) {
                                                                    y_pred += 72.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1712.0) {
                                                                        y_pred += 75.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 77.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 67.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 82.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 60.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 3255.0) {
                                                    if (x[2] <= 1647.5) {
                                                        if (x[2] <= 1513.5) {
                                                            y_pred += 78.0;
                                                        }

                                                        else {
                                                            y_pred += 91.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 75.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1996.5) {
                                    y_pred += 82.0;
                                }

                                else {
                                    if (x[2] <= 2861.0) {
                                        if (x[2] <= 2194.0) {
                                            y_pred += 93.0;
                                        }

                                        else {
                                            if (x[0] <= 2164.5) {
                                                y_pred += 107.0;
                                            }

                                            else {
                                                y_pred += 103.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 3014.0) {
                                            if (x[0] <= 1765.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            y_pred += 98.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[0] <= 2162.5) {
                            if (x[2] <= 554.0) {
                                if (x[1] <= 708.0) {
                                    if (x[1] <= 649.5) {
                                        y_pred += 112.0;
                                    }

                                    else {
                                        y_pred += 115.0;
                                    }
                                }

                                else {
                                    y_pred += 84.0;
                                }
                            }

                            else {
                                if (x[2] <= 1254.5) {
                                    if (x[0] <= 1865.0) {
                                        y_pred += 73.0;
                                    }

                                    else {
                                        if (x[1] <= 1107.0) {
                                            if (x[0] <= 1930.0) {
                                                y_pred += 75.0;
                                            }

                                            else {
                                                if (x[1] <= 949.5) {
                                                    if (x[0] <= 2084.0) {
                                                        if (x[2] <= 621.5) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 711.5) {
                                                                y_pred += 91.0;
                                                            }

                                                            else {
                                                                y_pred += 87.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2133.0) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 68.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 725.5) {
                                                if (x[1] <= 1164.0) {
                                                    y_pred += 100.0;
                                                }

                                                else {
                                                    y_pred += 87.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1294.5) {
                                                    y_pred += 83.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 2861.0) {
                                        if (x[0] <= 2012.0) {
                                            if (x[2] <= 2161.0) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 107.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 2159.5) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 82.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2459.0) {
                                            if (x[0] <= 1765.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            y_pred += 98.0;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 741.0) {
                                if (x[2] <= 708.5) {
                                    if (x[0] <= 2358.0) {
                                        if (x[2] <= 649.5) {
                                            if (x[1] <= 821.5) {
                                                y_pred += 62.0;
                                            }

                                            else {
                                                y_pred += 66.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2233.5) {
                                                y_pred += 81.0;
                                            }

                                            else {
                                                if (x[0] <= 2250.0) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    y_pred += 80.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 624.5) {
                                            if (x[1] <= 886.5) {
                                                if (x[0] <= 2491.5) {
                                                    y_pred += 89.0;
                                                }

                                                else {
                                                    y_pred += 90.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2678.0) {
                                                    y_pred += 76.0;
                                                }

                                                else {
                                                    y_pred += 86.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2493.5) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 109.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2470.5) {
                                        y_pred += 109.0;
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 2014.0) {
                                    if (x[2] <= 1413.0) {
                                        if (x[1] <= 1451.5) {
                                            if (x[1] <= 1294.0) {
                                                if (x[2] <= 790.5) {
                                                    if (x[0] <= 2191.0) {
                                                        y_pred += 60.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2216.0) {
                                                            y_pred += 88.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1023.5) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 77.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 3238.0) {
                                                        if (x[2] <= 888.0) {
                                                            if (x[2] <= 861.5) {
                                                                if (x[0] <= 2449.5) {
                                                                    y_pred += 78.0;
                                                                }

                                                                else {
                                                                    y_pred += 71.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 874.0) {
                                                                    y_pred += 71.0;
                                                                }

                                                                else {
                                                                    y_pred += 69.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 905.5) {
                                                                y_pred += 76.0;
                                                            }

                                                            else {
                                                                y_pred += 74.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 61.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1350.0) {
                                                    y_pred += 89.0;
                                                }

                                                else {
                                                    if (x[1] <= 1410.0) {
                                                        y_pred += 69.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 796.0) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            y_pred += 82.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3235.5) {
                                                if (x[0] <= 2857.0) {
                                                    if (x[2] <= 1110.5) {
                                                        if (x[2] <= 904.5) {
                                                            if (x[2] <= 849.5) {
                                                                y_pred += 68.0;
                                                            }

                                                            else {
                                                                y_pred += 70.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1006.0) {
                                                                y_pred += 77.0;
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1550.0) {
                                                            y_pred += 62.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1366.5) {
                                                                y_pred += 67.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 3109.0) {
                                                        if (x[0] <= 3010.0) {
                                                            if (x[0] <= 2932.5) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 72.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 3506.0) {
                                                    y_pred += 64.0;
                                                }

                                                else {
                                                    y_pred += 60.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3255.0) {
                                            if (x[2] <= 1647.5) {
                                                if (x[2] <= 1513.5) {
                                                    y_pred += 78.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }

                                            else {
                                                y_pred += 75.0;
                                            }
                                        }

                                        else {
                                            y_pred += 71.0;
                                        }
                                    }
                                }

                                else {
                                    y_pred += 103.0;
                                }
                            }
                        }

                        // tree #3
                        if (x[0] <= 2162.5) {
                            if (x[2] <= 554.0) {
                                if (x[1] <= 708.0) {
                                    if (x[1] <= 649.5) {
                                        y_pred += 112.0;
                                    }

                                    else {
                                        y_pred += 115.0;
                                    }
                                }

                                else {
                                    y_pred += 84.0;
                                }
                            }

                            else {
                                if (x[1] <= 1107.0) {
                                    if (x[0] <= 1930.0) {
                                        if (x[2] <= 766.0) {
                                            y_pred += 73.0;
                                        }

                                        else {
                                            y_pred += 75.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2009.5) {
                                            if (x[1] <= 892.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 694.0) {
                                                if (x[2] <= 606.0) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 68.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 815.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1164.0) {
                                        y_pred += 100.0;
                                    }

                                    else {
                                        if (x[1] <= 1354.5) {
                                            if (x[2] <= 717.5) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                if (x[1] <= 1294.5) {
                                                    y_pred += 83.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 2163.5) {
                                                if (x[0] <= 2012.0) {
                                                    if (x[1] <= 1750.5) {
                                                        y_pred += 93.0;
                                                    }

                                                    else {
                                                        y_pred += 107.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 2159.5) {
                                                        y_pred += 93.0;
                                                    }

                                                    else {
                                                        y_pred += 82.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2000.0) {
                                                    if (x[1] <= 2243.0) {
                                                        y_pred += 76.0;
                                                    }

                                                    else {
                                                        y_pred += 84.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 98.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 741.0) {
                                if (x[2] <= 708.5) {
                                    if (x[2] <= 624.5) {
                                        if (x[0] <= 2358.0) {
                                            if (x[0] <= 2232.5) {
                                                y_pred += 66.0;
                                            }

                                            else {
                                                y_pred += 62.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2596.0) {
                                                if (x[0] <= 2491.5) {
                                                    y_pred += 89.0;
                                                }

                                                else {
                                                    y_pred += 90.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 611.5) {
                                                    y_pred += 86.0;
                                                }

                                                else {
                                                    y_pred += 76.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1269.5) {
                                            if (x[0] <= 2362.0) {
                                                if (x[0] <= 2233.5) {
                                                    y_pred += 81.0;
                                                }

                                                else {
                                                    if (x[2] <= 686.5) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        y_pred += 80.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }

                                        else {
                                            y_pred += 109.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 891.5) {
                                        y_pred += 98.0;
                                    }

                                    else {
                                        y_pred += 109.0;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 3238.0) {
                                    if (x[2] <= 2014.0) {
                                        if (x[2] <= 1513.5) {
                                            if (x[2] <= 798.5) {
                                                if (x[0] <= 2191.0) {
                                                    y_pred += 60.0;
                                                }

                                                else {
                                                    if (x[2] <= 784.5) {
                                                        if (x[1] <= 1085.0) {
                                                            if (x[1] <= 1023.5) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 77.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2441.5) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 89.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2857.0) {
                                                    if (x[1] <= 1503.5) {
                                                        if (x[2] <= 838.5) {
                                                            y_pred += 82.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 861.5) {
                                                                if (x[0] <= 2449.5) {
                                                                    y_pred += 78.0;
                                                                }

                                                                else {
                                                                    y_pred += 71.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2429.5) {
                                                                    if (x[1] <= 1343.0) {
                                                                        y_pred += 74.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1271.5) {
                                                                        y_pred += 69.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2499.5) {
                                                                            y_pred += 71.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 70.0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1533.5) {
                                                            y_pred += 62.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1121.5) {
                                                                if (x[1] <= 1634.5) {
                                                                    y_pred += 68.0;
                                                                }

                                                                else {
                                                                    y_pred += 77.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1696.0) {
                                                                    y_pred += 68.0;
                                                                }

                                                                else {
                                                                    y_pred += 67.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1140.5) {
                                                        if (x[1] <= 1286.5) {
                                                            y_pred += 76.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1546.5) {
                                                                y_pred += 69.0;
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1211.5) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 3109.5) {
                                                                if (x[2] <= 1367.0) {
                                                                    y_pred += 82.0;
                                                                }

                                                                else {
                                                                    y_pred += 78.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 72.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1647.5) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                y_pred += 75.0;
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 103.0;
                                    }
                                }

                                else {
                                    if (x[1] <= 2023.0) {
                                        if (x[0] <= 3506.0) {
                                            if (x[1] <= 1348.0) {
                                                y_pred += 61.0;
                                            }

                                            else {
                                                y_pred += 64.0;
                                            }
                                        }

                                        else {
                                            y_pred += 60.0;
                                        }
                                    }

                                    else {
                                        y_pred += 71.0;
                                    }
                                }
                            }
                        }

                        // tree #4
                        if (x[1] <= 700.5) {
                            if (x[2] <= 524.5) {
                                y_pred += 115.0;
                            }

                            else {
                                y_pred += 112.0;
                            }
                        }

                        else {
                            if (x[2] <= 1875.0) {
                                if (x[2] <= 741.0) {
                                    if (x[1] <= 1090.5) {
                                        if (x[1] <= 732.5) {
                                            y_pred += 62.0;
                                        }

                                        else {
                                            if (x[0] <= 2303.0) {
                                                if (x[0] <= 2009.5) {
                                                    if (x[2] <= 649.5) {
                                                        if (x[2] <= 598.0) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            y_pred += 73.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 659.5) {
                                                        if (x[1] <= 887.5) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 612.0) {
                                                                y_pred += 66.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 976.0) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2247.5) {
                                                                y_pred += 81.0;
                                                            }

                                                            else {
                                                                y_pred += 80.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 687.5) {
                                                    if (x[2] <= 607.0) {
                                                        if (x[2] <= 572.5) {
                                                            y_pred += 90.0;
                                                        }

                                                        else {
                                                            y_pred += 89.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2543.5) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 76.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 723.0) {
                                                        y_pred += 109.0;
                                                    }

                                                    else {
                                                        y_pred += 98.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 613.0) {
                                            if (x[0] <= 2357.0) {
                                                if (x[2] <= 576.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 100.0;
                                                }
                                            }

                                            else {
                                                y_pred += 86.0;
                                            }
                                        }

                                        else {
                                            y_pred += 109.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 1493.5) {
                                        if (x[2] <= 798.5) {
                                            if (x[1] <= 1486.5) {
                                                if (x[2] <= 749.5) {
                                                    if (x[1] <= 1001.5) {
                                                        y_pred += 78.0;
                                                    }

                                                    else {
                                                        y_pred += 60.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1374.5) {
                                                        if (x[0] <= 2805.5) {
                                                            if (x[1] <= 1004.0) {
                                                                y_pred += 87.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 782.0) {
                                                                    y_pred += 88.0;
                                                                }

                                                                else {
                                                                    y_pred += 89.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 77.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 79.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 64.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 816.5) {
                                                if (x[2] <= 805.5) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    y_pred += 61.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 983.5) {
                                                    if (x[0] <= 2175.0) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        y_pred += 78.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 838.5) {
                                                        y_pred += 82.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1850.5) {
                                                            if (x[2] <= 1175.0) {
                                                                if (x[1] <= 1574.5) {
                                                                    if (x[2] <= 1110.5) {
                                                                        if (x[1] <= 1347.0) {
                                                                            if (x[2] <= 932.5) {
                                                                                if (x[2] <= 861.5) {
                                                                                    y_pred += 71.0;
                                                                                }

                                                                                else {
                                                                                    if (x[2] <= 874.0) {
                                                                                        if (x[0] <= 2289.0) {
                                                                                            y_pred += 83.0;
                                                                                        }

                                                                                        else {
                                                                                            y_pred += 71.0;
                                                                                        }
                                                                                    }

                                                                                    else {
                                                                                        if (x[2] <= 888.0) {
                                                                                            y_pred += 69.0;
                                                                                        }

                                                                                        else {
                                                                                            if (x[0] <= 2802.0) {
                                                                                                if (x[2] <= 911.0) {
                                                                                                    y_pred += 75.0;
                                                                                                }

                                                                                                else {
                                                                                                    y_pred += 74.0;
                                                                                                }
                                                                                            }

                                                                                            else {
                                                                                                y_pred += 76.0;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 79.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1479.0) {
                                                                                if (x[0] <= 2837.5) {
                                                                                    y_pred += 70.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 69.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 75.0;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 62.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 1140.5) {
                                                                        if (x[2] <= 1022.0) {
                                                                            y_pred += 77.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 75.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 83.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 3417.5) {
                                                                    if (x[2] <= 1305.5) {
                                                                        y_pred += 72.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1696.0) {
                                                                            y_pred += 68.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 67.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 60.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1367.0) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 1636.5) {
                                            if (x[2] <= 1580.0) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 2138.5) {
                                                y_pred += 75.0;
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2302.5) {
                                    if (x[2] <= 2861.0) {
                                        if (x[1] <= 2082.5) {
                                            if (x[2] <= 2159.5) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 82.0;
                                            }
                                        }

                                        else {
                                            y_pred += 107.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2000.0) {
                                            if (x[0] <= 1765.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            y_pred += 98.0;
                                        }
                                    }
                                }

                                else {
                                    y_pred += 103.0;
                                }
                            }
                        }

                        // tree #5
                        if (x[0] <= 2162.5) {
                            if (x[2] <= 554.0) {
                                if (x[0] <= 2017.5) {
                                    y_pred += 84.0;
                                }

                                else {
                                    if (x[0] <= 2119.0) {
                                        y_pred += 112.0;
                                    }

                                    else {
                                        y_pred += 115.0;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1107.0) {
                                    if (x[2] <= 655.5) {
                                        if (x[0] <= 2072.5) {
                                            if (x[0] <= 1994.0) {
                                                if (x[1] <= 973.5) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 73.0;
                                                }
                                            }

                                            else {
                                                y_pred += 68.0;
                                            }
                                        }

                                        else {
                                            y_pred += 84.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1011.5) {
                                            if (x[2] <= 711.5) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[2] <= 815.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 75.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 3014.0) {
                                        if (x[1] <= 2163.5) {
                                            if (x[2] <= 2513.0) {
                                                if (x[0] <= 2063.5) {
                                                    if (x[1] <= 1164.0) {
                                                        y_pred += 100.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 1064.0) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 93.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2151.5) {
                                                        if (x[2] <= 908.0) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1606.5) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 93.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 107.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 2243.0) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                y_pred += 84.0;
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[0] <= 2191.0) {
                                    if (x[2] <= 667.5) {
                                        y_pred += 66.0;
                                    }

                                    else {
                                        y_pred += 60.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 2613.0) {
                                        if (x[0] <= 2442.0) {
                                            if (x[2] <= 861.5) {
                                                if (x[0] <= 2320.0) {
                                                    if (x[1] <= 809.0) {
                                                        y_pred += 62.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 757.0) {
                                                            if (x[2] <= 726.5) {
                                                                if (x[2] <= 686.5) {
                                                                    y_pred += 79.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2247.5) {
                                                                        y_pred += 81.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 80.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2205.5) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 888.0) {
                                                        y_pred += 89.0;
                                                    }

                                                    else {
                                                        y_pred += 109.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2435.0) {
                                                    if (x[0] <= 2326.0) {
                                                        y_pred += 75.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2424.5) {
                                                            y_pred += 68.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 891.5) {
                                                                y_pred += 71.0;
                                                            }

                                                            else {
                                                                y_pred += 74.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 62.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1473.5) {
                                                if (x[0] <= 2582.5) {
                                                    if (x[0] <= 2565.5) {
                                                        if (x[0] <= 2501.0) {
                                                            if (x[2] <= 772.0) {
                                                                y_pred += 87.0;
                                                            }

                                                            else {
                                                                y_pred += 69.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1058.0) {
                                                                y_pred += 90.0;
                                                            }

                                                            else {
                                                                y_pred += 89.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 70.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 98.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2487.0) {
                                                    y_pred += 103.0;
                                                }

                                                else {
                                                    y_pred += 109.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1052.5) {
                                            if (x[0] <= 2660.0) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 684.5) {
                                                y_pred += 86.0;
                                            }

                                            else {
                                                if (x[1] <= 1800.0) {
                                                    if (x[0] <= 2739.0) {
                                                        if (x[0] <= 2680.5) {
                                                            if (x[0] <= 2667.5) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1634.5) {
                                                                y_pred += 68.0;
                                                            }

                                                            else {
                                                                y_pred += 77.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2860.0) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 3070.0) {
                                                                if (x[2] <= 952.0) {
                                                                    y_pred += 77.0;
                                                                }

                                                                else {
                                                                    y_pred += 75.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1850.5) {
                                                        y_pred += 67.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1936.0) {
                                                            if (x[0] <= 2994.0) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 75.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1172.5) {
                                    y_pred += 61.0;
                                }

                                else {
                                    if (x[2] <= 834.0) {
                                        y_pred += 64.0;
                                    }

                                    else {
                                        if (x[0] <= 3563.0) {
                                            if (x[0] <= 3128.0) {
                                                y_pred += 69.0;
                                            }

                                            else {
                                                if (x[1] <= 1414.0) {
                                                    y_pred += 76.0;
                                                }

                                                else {
                                                    if (x[2] <= 1475.0) {
                                                        y_pred += 72.0;
                                                    }

                                                    else {
                                                        y_pred += 71.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 60.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #6
                        if (x[1] <= 700.5) {
                            if (x[2] <= 524.5) {
                                y_pred += 115.0;
                            }

                            else {
                                y_pred += 112.0;
                            }
                        }

                        else {
                            if (x[1] <= 2014.5) {
                                if (x[2] <= 741.0) {
                                    if (x[0] <= 2320.0) {
                                        if (x[2] <= 585.0) {
                                            if (x[2] <= 579.0) {
                                                if (x[0] <= 1906.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 84.0;
                                                }
                                            }

                                            else {
                                                y_pred += 100.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 809.0) {
                                                y_pred += 62.0;
                                            }

                                            else {
                                                if (x[0] <= 2009.5) {
                                                    if (x[2] <= 649.5) {
                                                        y_pred += 73.0;
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 659.5) {
                                                        if (x[0] <= 2095.0) {
                                                            y_pred += 68.0;
                                                        }

                                                        else {
                                                            y_pred += 66.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 976.0) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 698.5) {
                                                                y_pred += 80.0;
                                                            }

                                                            else {
                                                                y_pred += 81.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 925.5) {
                                            if (x[1] <= 890.0) {
                                                if (x[0] <= 2582.0) {
                                                    if (x[1] <= 826.0) {
                                                        y_pred += 90.0;
                                                    }

                                                    else {
                                                        y_pred += 89.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 98.0;
                                                }
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2628.0) {
                                                if (x[0] <= 2401.0) {
                                                    y_pred += 109.0;
                                                }

                                                else {
                                                    if (x[0] <= 2493.5) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 109.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 86.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 954.5) {
                                        if (x[1] <= 911.5) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            if (x[1] <= 923.5) {
                                                y_pred += 78.0;
                                            }

                                            else {
                                                y_pred += 83.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3238.0) {
                                            if (x[1] <= 1052.5) {
                                                if (x[2] <= 748.5) {
                                                    y_pred += 78.0;
                                                }

                                                else {
                                                    if (x[2] <= 802.5) {
                                                        y_pred += 60.0;
                                                    }

                                                    else {
                                                        y_pred += 71.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2217.0) {
                                                    if (x[0] <= 1701.0) {
                                                        y_pred += 93.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 886.5) {
                                                            if (x[1] <= 1191.5) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1199.5) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 1606.5) {
                                                                    y_pred += 79.0;
                                                                }

                                                                else {
                                                                    y_pred += 82.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2501.0) {
                                                        if (x[1] <= 1503.5) {
                                                            if (x[2] <= 898.5) {
                                                                if (x[0] <= 2446.5) {
                                                                    y_pred += 71.0;
                                                                }

                                                                else {
                                                                    y_pred += 69.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2327.5) {
                                                                    y_pred += 75.0;
                                                                }

                                                                else {
                                                                    y_pred += 74.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1258.5) {
                                                                y_pred += 62.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2554.0) {
                                                            y_pred += 89.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1592.0) {
                                                                if (x[0] <= 2680.5) {
                                                                    if (x[0] <= 2611.5) {
                                                                        y_pred += 70.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1434.5) {
                                                                            y_pred += 82.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 79.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2876.0) {
                                                                        y_pred += 68.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 3089.0) {
                                                                            y_pred += 77.0;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 922.5) {
                                                                                y_pred += 76.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 69.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2784.5) {
                                                                    if (x[1] <= 1877.5) {
                                                                        if (x[1] <= 1755.0) {
                                                                            y_pred += 77.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 91.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1637.5) {
                                                                        y_pred += 83.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1320.5) {
                                                                            if (x[2] <= 1292.0) {
                                                                                if (x[2] <= 1206.0) {
                                                                                    y_pred += 75.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 72.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 82.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1850.5) {
                                                                                y_pred += 67.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 78.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3506.0) {
                                                if (x[1] <= 1348.0) {
                                                    y_pred += 61.0;
                                                }

                                                else {
                                                    y_pred += 64.0;
                                                }
                                            }

                                            else {
                                                y_pred += 60.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2163.5) {
                                    if (x[0] <= 2020.0) {
                                        y_pred += 107.0;
                                    }

                                    else {
                                        y_pred += 93.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 2003.0) {
                                        y_pred += 71.0;
                                    }

                                    else {
                                        if (x[2] <= 2646.5) {
                                            y_pred += 103.0;
                                        }

                                        else {
                                            if (x[1] <= 2459.0) {
                                                if (x[1] <= 2243.0) {
                                                    y_pred += 76.0;
                                                }

                                                else {
                                                    y_pred += 84.0;
                                                }
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #7
                        if (x[2] <= 585.0) {
                            if (x[1] <= 708.0) {
                                if (x[1] <= 649.5) {
                                    y_pred += 112.0;
                                }

                                else {
                                    y_pred += 115.0;
                                }
                            }

                            else {
                                if (x[2] <= 579.0) {
                                    if (x[2] <= 569.0) {
                                        if (x[1] <= 771.5) {
                                            y_pred += 84.0;
                                        }

                                        else {
                                            if (x[2] <= 561.0) {
                                                y_pred += 90.0;
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 84.0;
                                    }
                                }

                                else {
                                    y_pred += 100.0;
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2014.5) {
                                if (x[0] <= 3238.0) {
                                    if (x[1] <= 949.5) {
                                        if (x[2] <= 648.0) {
                                            if (x[2] <= 604.5) {
                                                if (x[1] <= 883.5) {
                                                    y_pred += 89.0;
                                                }

                                                else {
                                                    y_pred += 66.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2462.5) {
                                                    y_pred += 62.0;
                                                }

                                                else {
                                                    y_pred += 76.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 921.5) {
                                                if (x[1] <= 874.5) {
                                                    y_pred += 98.0;
                                                }

                                                else {
                                                    if (x[0] <= 2126.0) {
                                                        if (x[0] <= 2021.0) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2221.0) {
                                                            y_pred += 78.0;
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 796.5) {
                                                    y_pred += 109.0;
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1057.0) {
                                            if (x[2] <= 748.5) {
                                                if (x[0] <= 2343.5) {
                                                    if (x[0] <= 2125.0) {
                                                        if (x[2] <= 632.0) {
                                                            y_pred += 73.0;
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 78.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 87.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1030.5) {
                                                    y_pred += 60.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1701.0) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                if (x[1] <= 1485.5) {
                                                    if (x[0] <= 2554.0) {
                                                        if (x[0] <= 2493.5) {
                                                            if (x[0] <= 2345.0) {
                                                                if (x[1] <= 1096.5) {
                                                                    if (x[0] <= 2063.0) {
                                                                        y_pred += 75.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2247.5) {
                                                                            y_pred += 81.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 80.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 816.5) {
                                                                        y_pred += 88.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2143.5) {
                                                                            y_pred += 79.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 83.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 898.5) {
                                                                    if (x[1] <= 1271.5) {
                                                                        y_pred += 69.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 71.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 74.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2534.5) {
                                                                y_pred += 109.0;
                                                            }

                                                            else {
                                                                y_pred += 89.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1451.5) {
                                                            if (x[2] <= 922.5) {
                                                                if (x[2] <= 858.0) {
                                                                    if (x[2] <= 796.0) {
                                                                        if (x[0] <= 2873.5) {
                                                                            y_pred += 79.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 77.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 82.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 76.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 69.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 70.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1513.5) {
                                                        if (x[0] <= 2695.0) {
                                                            if (x[0] <= 2326.0) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1533.5) {
                                                                    y_pred += 62.0;
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 754.5) {
                                                                y_pred += 86.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 1320.5) {
                                                                    if (x[0] <= 3109.0) {
                                                                        if (x[0] <= 3010.0) {
                                                                            if (x[1] <= 1813.5) {
                                                                                if (x[0] <= 2828.0) {
                                                                                    y_pred += 77.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 75.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 82.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 83.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 72.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1850.5) {
                                                                        y_pred += 67.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 78.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1647.5) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1979.5) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1634.5) {
                                        if (x[1] <= 1348.0) {
                                            y_pred += 61.0;
                                        }

                                        else {
                                            y_pred += 64.0;
                                        }
                                    }

                                    else {
                                        y_pred += 60.0;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2163.5) {
                                    if (x[0] <= 2020.0) {
                                        y_pred += 107.0;
                                    }

                                    else {
                                        y_pred += 93.0;
                                    }
                                }

                                else {
                                    if (x[1] <= 2487.0) {
                                        if (x[1] <= 2286.0) {
                                            if (x[1] <= 2241.0) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                if (x[1] <= 2256.0) {
                                                    y_pred += 103.0;
                                                }

                                                else {
                                                    y_pred += 84.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 71.0;
                                        }
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }
                        }

                        // tree #8
                        if (x[1] <= 700.5) {
                            if (x[1] <= 649.5) {
                                y_pred += 112.0;
                            }

                            else {
                                y_pred += 115.0;
                            }
                        }

                        else {
                            if (x[1] <= 2014.5) {
                                if (x[2] <= 741.0) {
                                    if (x[1] <= 1090.5) {
                                        if (x[2] <= 708.5) {
                                            if (x[2] <= 580.0) {
                                                if (x[0] <= 2343.5) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 90.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2358.0) {
                                                    if (x[0] <= 2281.0) {
                                                        if (x[0] <= 2009.5) {
                                                            if (x[2] <= 649.5) {
                                                                y_pred += 73.0;
                                                            }

                                                            else {
                                                                y_pred += 91.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 659.5) {
                                                                if (x[1] <= 943.0) {
                                                                    y_pred += 66.0;
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 686.5) {
                                                                    y_pred += 79.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 698.5) {
                                                                        y_pred += 80.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 81.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 62.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2543.5) {
                                                        if (x[2] <= 627.0) {
                                                            y_pred += 89.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 76.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2470.5) {
                                                y_pred += 109.0;
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 613.0) {
                                            if (x[0] <= 2357.0) {
                                                if (x[0] <= 1939.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 100.0;
                                                }
                                            }

                                            else {
                                                y_pred += 86.0;
                                            }
                                        }

                                        else {
                                            y_pred += 109.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 3238.0) {
                                        if (x[2] <= 1493.5) {
                                            if (x[1] <= 954.5) {
                                                if (x[1] <= 911.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    if (x[0] <= 2175.0) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        y_pred += 78.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2161.0) {
                                                    if (x[1] <= 1187.0) {
                                                        y_pred += 75.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1294.5) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 798.5) {
                                                        if (x[0] <= 2191.0) {
                                                            y_pred += 60.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 784.5) {
                                                                if (x[1] <= 1085.0) {
                                                                    if (x[0] <= 2648.0) {
                                                                        y_pred += 78.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 77.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1268.5) {
                                                                        y_pred += 88.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 79.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 89.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2857.0) {
                                                            if (x[0] <= 2611.5) {
                                                                if (x[0] <= 2435.0) {
                                                                    if (x[1] <= 1537.5) {
                                                                        if (x[1] <= 1383.0) {
                                                                            if (x[1] <= 1235.0) {
                                                                                y_pred += 74.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 71.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 75.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 68.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1491.5) {
                                                                        if (x[0] <= 2513.0) {
                                                                            y_pred += 69.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 70.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 62.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1763.0) {
                                                                    if (x[1] <= 1234.5) {
                                                                        y_pred += 71.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2670.0) {
                                                                            y_pred += 82.0;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 854.0) {
                                                                                y_pred += 68.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 77.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 67.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1140.5) {
                                                                if (x[2] <= 922.5) {
                                                                    y_pred += 76.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 3029.0) {
                                                                        y_pred += 75.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 69.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1637.5) {
                                                                    y_pred += 83.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 1292.0) {
                                                                        y_pred += 72.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1367.0) {
                                                                            y_pred += 82.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 78.0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1647.5) {
                                                if (x[0] <= 2139.0) {
                                                    y_pred += 93.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2388.5) {
                                                    y_pred += 82.0;
                                                }

                                                else {
                                                    y_pred += 75.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 792.5) {
                                            y_pred += 64.0;
                                        }

                                        else {
                                            if (x[2] <= 1008.0) {
                                                y_pred += 61.0;
                                            }

                                            else {
                                                y_pred += 60.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2942.5) {
                                    if (x[1] <= 2163.5) {
                                        if (x[2] <= 2408.5) {
                                            y_pred += 93.0;
                                        }

                                        else {
                                            y_pred += 107.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2000.0) {
                                            if (x[2] <= 2969.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 2691.0) {
                                                y_pred += 103.0;
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    y_pred += 71.0;
                                }
                            }
                        }

                        // tree #9
                        if (x[1] <= 700.5) {
                            if (x[2] <= 524.5) {
                                y_pred += 115.0;
                            }

                            else {
                                y_pred += 112.0;
                            }
                        }

                        else {
                            if (x[2] <= 1875.0) {
                                if (x[2] <= 741.0) {
                                    if (x[1] <= 1090.5) {
                                        if (x[2] <= 708.5) {
                                            if (x[0] <= 2358.0) {
                                                if (x[0] <= 2281.0) {
                                                    if (x[0] <= 2009.5) {
                                                        if (x[0] <= 1877.5) {
                                                            y_pred += 73.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 621.5) {
                                                                y_pred += 84.0;
                                                            }

                                                            else {
                                                                y_pred += 91.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 905.5) {
                                                            if (x[0] <= 2179.0) {
                                                                y_pred += 84.0;
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2199.0) {
                                                                if (x[2] <= 612.0) {
                                                                    y_pred += 66.0;
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2247.5) {
                                                                    y_pred += 81.0;
                                                                }

                                                                else {
                                                                    y_pred += 80.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 62.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2596.0) {
                                                    if (x[1] <= 918.5) {
                                                        if (x[0] <= 2491.5) {
                                                            y_pred += 89.0;
                                                        }

                                                        else {
                                                            y_pred += 90.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 76.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2470.5) {
                                                y_pred += 109.0;
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 613.0) {
                                            if (x[0] <= 2357.0) {
                                                if (x[0] <= 1939.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 100.0;
                                                }
                                            }

                                            else {
                                                y_pred += 86.0;
                                            }
                                        }

                                        else {
                                            y_pred += 109.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1451.5) {
                                        if (x[2] <= 1255.0) {
                                            if (x[0] <= 3238.0) {
                                                if (x[1] <= 954.5) {
                                                    if (x[2] <= 803.0) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 868.5) {
                                                            y_pred += 78.0;
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1052.5) {
                                                        if (x[0] <= 2202.0) {
                                                            y_pred += 60.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 802.0) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 71.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2315.5) {
                                                            if (x[1] <= 1096.5) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2175.0) {
                                                                    if (x[1] <= 1294.5) {
                                                                        y_pred += 83.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 79.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 88.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1294.0) {
                                                                if (x[2] <= 818.0) {
                                                                    y_pred += 77.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2819.0) {
                                                                        if (x[1] <= 1231.5) {
                                                                            y_pred += 74.0;
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 2446.5) {
                                                                                y_pred += 71.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 69.0;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 76.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2893.5) {
                                                                    if (x[1] <= 1373.0) {
                                                                        y_pred += 89.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1434.5) {
                                                                            y_pred += 82.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 79.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 69.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 61.0;
                                            }
                                        }

                                        else {
                                            y_pred += 93.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1608.5) {
                                            if (x[2] <= 1110.5) {
                                                if (x[0] <= 2397.5) {
                                                    y_pred += 75.0;
                                                }

                                                else {
                                                    if (x[0] <= 3003.5) {
                                                        if (x[1] <= 1509.0) {
                                                            y_pred += 70.0;
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 64.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2430.0) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    y_pred += 62.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3563.0) {
                                                if (x[1] <= 1800.0) {
                                                    if (x[1] <= 1755.0) {
                                                        if (x[1] <= 1637.5) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1206.0) {
                                                                if (x[0] <= 2828.0) {
                                                                    y_pred += 77.0;
                                                                }

                                                                else {
                                                                    y_pred += 75.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 72.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2857.0) {
                                                        if (x[0] <= 2716.5) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            y_pred += 67.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1550.0) {
                                                            if (x[1] <= 1901.0) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 71.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 60.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 2861.0) {
                                    if (x[0] <= 2012.0) {
                                        y_pred += 107.0;
                                    }

                                    else {
                                        if (x[0] <= 2150.0) {
                                            y_pred += 82.0;
                                        }

                                        else {
                                            if (x[1] <= 2160.0) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 103.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2000.0) {
                                        if (x[0] <= 1765.5) {
                                            y_pred += 84.0;
                                        }

                                        else {
                                            y_pred += 76.0;
                                        }
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[0] <= 2162.5) {
                            if (x[0] <= 2067.0) {
                                if (x[0] <= 2009.5) {
                                    if (x[1] <= 1107.0) {
                                        if (x[0] <= 1907.0) {
                                            if (x[1] <= 1073.5) {
                                                y_pred += 73.0;
                                            }

                                            else {
                                                y_pred += 75.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1980.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1948.5) {
                                            if (x[1] <= 2163.5) {
                                                if (x[1] <= 1750.5) {
                                                    if (x[0] <= 1700.5) {
                                                        y_pred += 93.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 107.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 1765.5) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 76.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 100.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2034.5) {
                                        y_pred += 68.0;
                                    }

                                    else {
                                        y_pred += 87.0;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 557.0) {
                                    if (x[1] <= 649.5) {
                                        y_pred += 112.0;
                                    }

                                    else {
                                        y_pred += 115.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 2656.5) {
                                        if (x[0] <= 2151.5) {
                                            if (x[1] <= 1294.5) {
                                                if (x[1] <= 894.0) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1617.0) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    y_pred += 82.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 93.0;
                                        }
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 741.0) {
                                if (x[2] <= 708.5) {
                                    if (x[2] <= 624.5) {
                                        if (x[1] <= 764.0) {
                                            y_pred += 62.0;
                                        }

                                        else {
                                            if (x[1] <= 883.5) {
                                                if (x[2] <= 572.5) {
                                                    y_pred += 90.0;
                                                }

                                                else {
                                                    y_pred += 89.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2397.0) {
                                                    y_pred += 66.0;
                                                }

                                                else {
                                                    if (x[1] <= 1237.0) {
                                                        y_pred += 76.0;
                                                    }

                                                    else {
                                                        y_pred += 86.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2493.5) {
                                            if (x[1] <= 940.5) {
                                                y_pred += 79.0;
                                            }

                                            else {
                                                if (x[1] <= 1023.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    if (x[2] <= 698.5) {
                                                        y_pred += 80.0;
                                                    }

                                                    else {
                                                        y_pred += 81.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 109.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2470.5) {
                                        y_pred += 109.0;
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 2014.0) {
                                    if (x[1] <= 1762.0) {
                                        if (x[1] <= 1725.0) {
                                            if (x[1] <= 1451.5) {
                                                if (x[2] <= 805.0) {
                                                    if (x[0] <= 2191.0) {
                                                        y_pred += 60.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 784.5) {
                                                            if (x[0] <= 2216.0) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2873.5) {
                                                                    if (x[0] <= 2452.5) {
                                                                        y_pred += 78.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 79.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 77.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 89.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 816.5) {
                                                        y_pred += 61.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2316.0) {
                                                            y_pred += 78.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1410.0) {
                                                                if (x[0] <= 3143.5) {
                                                                    if (x[0] <= 2429.5) {
                                                                        y_pred += 74.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2446.5) {
                                                                            y_pred += 71.0;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1152.0) {
                                                                                y_pred += 71.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 69.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 76.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 849.5) {
                                                    if (x[2] <= 786.0) {
                                                        y_pred += 64.0;
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1338.0) {
                                                        if (x[0] <= 2636.5) {
                                                            if (x[0] <= 2333.0) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2501.5) {
                                                                    y_pred += 62.0;
                                                                }

                                                                else {
                                                                    y_pred += 70.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 3109.0) {
                                                                if (x[0] <= 3010.0) {
                                                                    if (x[0] <= 2828.0) {
                                                                        y_pred += 77.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 72.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 60.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 1636.5) {
                                            if (x[1] <= 1800.0) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[2] <= 1320.5) {
                                                    y_pred += 82.0;
                                                }

                                                else {
                                                    if (x[0] <= 2935.0) {
                                                        y_pred += 67.0;
                                                    }

                                                    else {
                                                        y_pred += 78.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3036.5) {
                                                y_pred += 75.0;
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    y_pred += 103.0;
                                }
                            }
                        }

                        // tree #11
                        if (x[1] <= 700.5) {
                            if (x[0] <= 2119.0) {
                                y_pred += 112.0;
                            }

                            else {
                                y_pred += 115.0;
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[1] <= 2014.5) {
                                    if (x[2] <= 741.0) {
                                        if (x[0] <= 2320.0) {
                                            if (x[1] <= 1090.5) {
                                                if (x[2] <= 580.0) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    if (x[0] <= 2281.0) {
                                                        if (x[1] <= 905.5) {
                                                            if (x[0] <= 2116.0) {
                                                                y_pred += 91.0;
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 665.0) {
                                                                if (x[0] <= 1929.5) {
                                                                    y_pred += 73.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 943.0) {
                                                                        y_pred += 66.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 68.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2247.5) {
                                                                    y_pred += 81.0;
                                                                }

                                                                else {
                                                                    y_pred += 80.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 62.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 576.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 100.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2613.0) {
                                                if (x[2] <= 608.5) {
                                                    if (x[0] <= 2491.5) {
                                                        y_pred += 89.0;
                                                    }

                                                    else {
                                                        y_pred += 90.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2401.0) {
                                                        y_pred += 109.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 644.5) {
                                                            y_pred += 109.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 698.5) {
                                                                y_pred += 87.0;
                                                            }

                                                            else {
                                                                y_pred += 98.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2678.0) {
                                                    y_pred += 76.0;
                                                }

                                                else {
                                                    y_pred += 86.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2161.0) {
                                            if (x[1] <= 1354.5) {
                                                if (x[0] <= 1970.5) {
                                                    y_pred += 75.0;
                                                }

                                                else {
                                                    if (x[1] <= 919.0) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1294.5) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1664.5) {
                                                    y_pred += 93.0;
                                                }

                                                else {
                                                    y_pred += 82.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1608.5) {
                                                if (x[2] <= 861.5) {
                                                    if (x[2] <= 757.5) {
                                                        if (x[2] <= 748.5) {
                                                            y_pred += 78.0;
                                                        }

                                                        else {
                                                            y_pred += 60.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1493.5) {
                                                            if (x[1] <= 1085.0) {
                                                                if (x[1] <= 976.0) {
                                                                    y_pred += 78.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 812.5) {
                                                                        y_pred += 77.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 71.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1373.0) {
                                                                    if (x[2] <= 782.0) {
                                                                        y_pred += 88.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 89.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 796.0) {
                                                                        y_pred += 79.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 82.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1503.5) {
                                                        if (x[2] <= 908.0) {
                                                            if (x[2] <= 874.0) {
                                                                y_pred += 71.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2513.0) {
                                                                    y_pred += 69.0;
                                                                }

                                                                else {
                                                                    y_pred += 70.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2327.5) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                y_pred += 74.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1550.0) {
                                                            y_pred += 62.0;
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2784.5) {
                                                    if (x[0] <= 2739.0) {
                                                        if (x[0] <= 2671.0) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            y_pred += 77.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1320.5) {
                                                        if (x[2] <= 1140.5) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1226.5) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1850.5) {
                                                            y_pred += 67.0;
                                                        }

                                                        else {
                                                            y_pred += 78.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2000.0) {
                                        if (x[1] <= 2163.5) {
                                            y_pred += 107.0;
                                        }

                                        else {
                                            if (x[1] <= 2243.0) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                y_pred += 84.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2160.0) {
                                            y_pred += 93.0;
                                        }

                                        else {
                                            if (x[1] <= 2457.0) {
                                                y_pred += 103.0;
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1172.5) {
                                    y_pred += 61.0;
                                }

                                else {
                                    if (x[1] <= 1286.5) {
                                        y_pred += 76.0;
                                    }

                                    else {
                                        if (x[2] <= 1240.5) {
                                            if (x[1] <= 1462.0) {
                                                y_pred += 69.0;
                                            }

                                            else {
                                                if (x[1] <= 1634.5) {
                                                    y_pred += 64.0;
                                                }

                                                else {
                                                    y_pred += 60.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1978.0) {
                                                y_pred += 72.0;
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #12
                        if (x[1] <= 700.5) {
                            if (x[2] <= 524.5) {
                                y_pred += 115.0;
                            }

                            else {
                                y_pred += 112.0;
                            }
                        }

                        else {
                            if (x[1] <= 2014.5) {
                                if (x[2] <= 741.0) {
                                    if (x[0] <= 2320.0) {
                                        if (x[1] <= 1090.5) {
                                            if (x[0] <= 2281.0) {
                                                if (x[0] <= 2009.5) {
                                                    if (x[0] <= 1877.5) {
                                                        y_pred += 73.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 892.5) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            y_pred += 91.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 905.5) {
                                                        if (x[2] <= 627.5) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1013.5) {
                                                            if (x[1] <= 943.0) {
                                                                y_pred += 66.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 698.5) {
                                                                y_pred += 80.0;
                                                            }

                                                            else {
                                                                y_pred += 81.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 62.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1164.0) {
                                                y_pred += 100.0;
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 925.5) {
                                            if (x[2] <= 678.5) {
                                                if (x[2] <= 607.0) {
                                                    if (x[2] <= 572.5) {
                                                        y_pred += 90.0;
                                                    }

                                                    else {
                                                        y_pred += 89.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 76.0;
                                                }
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1515.0) {
                                                if (x[1] <= 957.5) {
                                                    y_pred += 109.0;
                                                }

                                                else {
                                                    if (x[1] <= 1234.0) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 109.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 86.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 1493.5) {
                                        if (x[2] <= 798.5) {
                                            if (x[0] <= 3196.5) {
                                                if (x[0] <= 2191.0) {
                                                    if (x[0] <= 2111.5) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 60.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2610.0) {
                                                        if (x[2] <= 757.0) {
                                                            y_pred += 78.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 782.0) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                y_pred += 89.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1252.5) {
                                                            y_pred += 77.0;
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 64.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 816.5) {
                                                if (x[2] <= 805.5) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    y_pred += 61.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 983.5) {
                                                    if (x[1] <= 923.5) {
                                                        y_pred += 78.0;
                                                    }

                                                    else {
                                                        y_pred += 83.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 3433.0) {
                                                        if (x[2] <= 838.5) {
                                                            y_pred += 82.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1320.5) {
                                                                if (x[0] <= 2187.0) {
                                                                    if (x[1] <= 1187.0) {
                                                                        y_pred += 75.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1294.5) {
                                                                            y_pred += 83.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 79.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 1140.5) {
                                                                        if (x[1] <= 1611.0) {
                                                                            if (x[0] <= 2429.5) {
                                                                                if (x[2] <= 1009.5) {
                                                                                    y_pred += 74.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 75.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 1491.5) {
                                                                                    if (x[0] <= 3143.5) {
                                                                                        if (x[1] <= 1152.0) {
                                                                                            y_pred += 71.0;
                                                                                        }

                                                                                        else {
                                                                                            if (x[2] <= 874.0) {
                                                                                                y_pred += 71.0;
                                                                                            }

                                                                                            else {
                                                                                                if (x[1] <= 1427.0) {
                                                                                                    y_pred += 69.0;
                                                                                                }

                                                                                                else {
                                                                                                    y_pred += 70.0;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 76.0;
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    y_pred += 62.0;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1712.0) {
                                                                                y_pred += 75.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 77.0;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1211.5) {
                                                                            y_pred += 83.0;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 1292.0) {
                                                                                y_pred += 72.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 82.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1413.0) {
                                                                    if (x[0] <= 2610.5) {
                                                                        y_pred += 68.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 67.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 78.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 60.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 1647.5) {
                                            if (x[2] <= 1580.0) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1979.5) {
                                                y_pred += 75.0;
                                            }

                                            else {
                                                y_pred += 82.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2942.5) {
                                    if (x[1] <= 2163.5) {
                                        if (x[2] <= 2408.5) {
                                            y_pred += 93.0;
                                        }

                                        else {
                                            y_pred += 107.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 2646.5) {
                                            y_pred += 103.0;
                                        }

                                        else {
                                            if (x[1] <= 2459.0) {
                                                if (x[1] <= 2243.0) {
                                                    y_pred += 76.0;
                                                }

                                                else {
                                                    y_pred += 84.0;
                                                }
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    y_pred += 71.0;
                                }
                            }
                        }

                        // tree #13
                        if (x[2] <= 585.0) {
                            if (x[0] <= 1975.0) {
                                if (x[0] <= 1906.5) {
                                    y_pred += 87.0;
                                }

                                else {
                                    y_pred += 84.0;
                                }
                            }

                            else {
                                if (x[0] <= 2343.5) {
                                    if (x[1] <= 766.5) {
                                        if (x[2] <= 524.5) {
                                            y_pred += 115.0;
                                        }

                                        else {
                                            y_pred += 112.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2053.5) {
                                            y_pred += 100.0;
                                        }

                                        else {
                                            y_pred += 84.0;
                                        }
                                    }
                                }

                                else {
                                    y_pred += 90.0;
                                }
                            }
                        }

                        else {
                            if (x[2] <= 1875.0) {
                                if (x[2] <= 741.0) {
                                    if (x[0] <= 2320.0) {
                                        if (x[0] <= 2281.0) {
                                            if (x[2] <= 655.5) {
                                                if (x[2] <= 606.0) {
                                                    y_pred += 66.0;
                                                }

                                                else {
                                                    if (x[1] <= 1011.5) {
                                                        y_pred += 68.0;
                                                    }

                                                    else {
                                                        y_pred += 73.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 677.0) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    if (x[0] <= 2233.5) {
                                                        y_pred += 81.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2250.0) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            y_pred += 80.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 62.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2613.0) {
                                            if (x[0] <= 2380.0) {
                                                y_pred += 109.0;
                                            }

                                            else {
                                                if (x[0] <= 2493.5) {
                                                    if (x[2] <= 627.0) {
                                                        y_pred += 89.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2563.0) {
                                                        y_pred += 109.0;
                                                    }

                                                    else {
                                                        y_pred += 98.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1237.0) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                y_pred += 86.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1451.5) {
                                        if (x[0] <= 2161.0) {
                                            if (x[1] <= 1354.5) {
                                                if (x[1] <= 1011.5) {
                                                    if (x[1] <= 919.0) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 83.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 886.5) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 927.5) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 93.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2191.0) {
                                                y_pred += 60.0;
                                            }

                                            else {
                                                if (x[0] <= 3238.0) {
                                                    if (x[2] <= 838.5) {
                                                        if (x[1] <= 1085.0) {
                                                            if (x[0] <= 2648.0) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 77.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 768.5) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1373.0) {
                                                                    y_pred += 89.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1434.5) {
                                                                        y_pred += 82.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 79.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 933.0) {
                                                            if (x[0] <= 2316.0) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 888.0) {
                                                                    if (x[1] <= 1152.0) {
                                                                        y_pred += 71.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1271.5) {
                                                                            y_pred += 69.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 71.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2802.0) {
                                                                        y_pred += 74.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 76.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 69.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 61.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1608.5) {
                                            if (x[1] <= 1503.5) {
                                                if (x[1] <= 1479.0) {
                                                    y_pred += 70.0;
                                                }

                                                else {
                                                    y_pred += 75.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1544.0) {
                                                    if (x[2] <= 945.5) {
                                                        y_pred += 64.0;
                                                    }

                                                    else {
                                                        y_pred += 62.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 68.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1637.5) {
                                                y_pred += 83.0;
                                            }

                                            else {
                                                if (x[2] <= 1380.5) {
                                                    if (x[0] <= 3417.5) {
                                                        if (x[1] <= 1858.5) {
                                                            if (x[0] <= 2752.5) {
                                                                y_pred += 77.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 1305.5) {
                                                                    if (x[0] <= 3048.0) {
                                                                        y_pred += 75.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 72.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 67.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 82.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 60.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 3255.0) {
                                                        if (x[1] <= 1842.5) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1561.0) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 71.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1996.5) {
                                    y_pred += 82.0;
                                }

                                else {
                                    if (x[1] <= 2163.5) {
                                        if (x[2] <= 2408.5) {
                                            y_pred += 93.0;
                                        }

                                        else {
                                            y_pred += 107.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2241.0) {
                                            y_pred += 76.0;
                                        }

                                        else {
                                            if (x[0] <= 1853.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                if (x[1] <= 2457.0) {
                                                    y_pred += 103.0;
                                                }

                                                else {
                                                    y_pred += 98.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #14
                        if (x[2] <= 585.0) {
                            if (x[1] <= 708.0) {
                                if (x[2] <= 524.5) {
                                    y_pred += 115.0;
                                }

                                else {
                                    y_pred += 112.0;
                                }
                            }

                            else {
                                if (x[1] <= 1007.0) {
                                    if (x[0] <= 2343.5) {
                                        y_pred += 84.0;
                                    }

                                    else {
                                        y_pred += 90.0;
                                    }
                                }

                                else {
                                    if (x[1] <= 1164.0) {
                                        y_pred += 100.0;
                                    }

                                    else {
                                        y_pred += 87.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 1875.0) {
                                if (x[0] <= 3090.5) {
                                    if (x[0] <= 1671.5) {
                                        y_pred += 93.0;
                                    }

                                    else {
                                        if (x[2] <= 798.5) {
                                            if (x[1] <= 1458.0) {
                                                if (x[0] <= 2320.0) {
                                                    if (x[1] <= 809.0) {
                                                        y_pred += 62.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 655.5) {
                                                            if (x[1] <= 1011.5) {
                                                                if (x[1] <= 943.0) {
                                                                    y_pred += 66.0;
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 73.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 942.5) {
                                                                if (x[2] <= 677.0) {
                                                                    y_pred += 91.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 900.0) {
                                                                        y_pred += 79.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 87.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2191.0) {
                                                                    y_pred += 60.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2216.0) {
                                                                        y_pred += 88.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 726.5) {
                                                                            if (x[2] <= 698.5) {
                                                                                y_pred += 80.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 81.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 78.0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2613.0) {
                                                        if (x[0] <= 2380.0) {
                                                            y_pred += 109.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 922.0) {
                                                                if (x[2] <= 662.5) {
                                                                    y_pred += 89.0;
                                                                }

                                                                else {
                                                                    y_pred += 98.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1150.5) {
                                                                    y_pred += 87.0;
                                                                }

                                                                else {
                                                                    y_pred += 89.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2652.5) {
                                                            y_pred += 76.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1252.5) {
                                                                y_pred += 77.0;
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2628.0) {
                                                    y_pred += 109.0;
                                                }

                                                else {
                                                    y_pred += 86.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1608.5) {
                                                if (x[2] <= 1110.5) {
                                                    if (x[1] <= 1450.0) {
                                                        if (x[2] <= 838.5) {
                                                            y_pred += 82.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2316.0) {
                                                                if (x[0] <= 2018.5) {
                                                                    y_pred += 75.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 861.5) {
                                                                        y_pred += 78.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2143.0) {
                                                                            y_pred += 79.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 83.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 898.5) {
                                                                    if (x[1] <= 1152.0) {
                                                                        y_pred += 71.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 874.0) {
                                                                            y_pred += 71.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 69.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 74.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2397.5) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1509.0) {
                                                                y_pred += 70.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1258.5) {
                                                        y_pred += 62.0;
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2784.5) {
                                                    if (x[1] <= 1877.5) {
                                                        if (x[0] <= 2739.0) {
                                                            y_pred += 77.0;
                                                        }

                                                        else {
                                                            y_pred += 91.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 75.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1669.5) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 1320.5) {
                                                            if (x[0] <= 2932.5) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1380.5) {
                                                                y_pred += 67.0;
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 3238.0) {
                                        if (x[1] <= 1286.5) {
                                            y_pred += 76.0;
                                        }

                                        else {
                                            if (x[2] <= 1113.5) {
                                                y_pred += 69.0;
                                            }

                                            else {
                                                y_pred += 72.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 1438.5) {
                                            if (x[2] <= 792.5) {
                                                y_pred += 64.0;
                                            }

                                            else {
                                                if (x[0] <= 3493.0) {
                                                    y_pred += 61.0;
                                                }

                                                else {
                                                    y_pred += 60.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 71.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2302.5) {
                                    if (x[0] <= 1897.0) {
                                        if (x[2] <= 2861.0) {
                                            y_pred += 107.0;
                                        }

                                        else {
                                            y_pred += 84.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2444.0) {
                                            if (x[2] <= 2159.5) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                if (x[1] <= 2077.5) {
                                                    y_pred += 82.0;
                                                }

                                                else {
                                                    y_pred += 76.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 98.0;
                                        }
                                    }
                                }

                                else {
                                    y_pred += 103.0;
                                }
                            }
                        }

                        // tree #15
                        if (x[0] <= 2162.5) {
                            if (x[2] <= 554.0) {
                                if (x[0] <= 2017.5) {
                                    y_pred += 84.0;
                                }

                                else {
                                    if (x[2] <= 524.5) {
                                        y_pred += 115.0;
                                    }

                                    else {
                                        y_pred += 112.0;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1894.5) {
                                    if (x[2] <= 1093.0) {
                                        if (x[1] <= 1130.5) {
                                            y_pred += 73.0;
                                        }

                                        else {
                                            y_pred += 87.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 2861.0) {
                                            if (x[2] <= 2161.0) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 107.0;
                                            }
                                        }

                                        else {
                                            y_pred += 84.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 2444.0) {
                                        if (x[1] <= 2147.0) {
                                            if (x[1] <= 1107.0) {
                                                if (x[2] <= 893.5) {
                                                    if (x[1] <= 949.5) {
                                                        if (x[1] <= 892.5) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 900.0) {
                                                                y_pred += 91.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 919.0) {
                                                                    y_pred += 87.0;
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 75.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1202.0) {
                                                    y_pred += 100.0;
                                                }

                                                else {
                                                    if (x[1] <= 1996.5) {
                                                        if (x[1] <= 1294.5) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1617.0) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 93.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 76.0;
                                        }
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[2] <= 741.0) {
                                    if (x[1] <= 764.0) {
                                        y_pred += 62.0;
                                    }

                                    else {
                                        if (x[1] <= 925.5) {
                                            if (x[2] <= 707.5) {
                                                if (x[0] <= 2201.5) {
                                                    y_pred += 66.0;
                                                }

                                                else {
                                                    if (x[1] <= 871.0) {
                                                        if (x[0] <= 2491.5) {
                                                            y_pred += 89.0;
                                                        }

                                                        else {
                                                            y_pred += 90.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 652.0) {
                                                            y_pred += 76.0;
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2303.0) {
                                                if (x[2] <= 698.5) {
                                                    y_pred += 80.0;
                                                }

                                                else {
                                                    y_pred += 81.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1515.0) {
                                                    if (x[0] <= 2401.0) {
                                                        y_pred += 109.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2493.5) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 109.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 86.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 2014.0) {
                                        if (x[1] <= 1608.5) {
                                            if (x[2] <= 861.5) {
                                                if (x[0] <= 2191.0) {
                                                    y_pred += 60.0;
                                                }

                                                else {
                                                    if (x[0] <= 2680.5) {
                                                        if (x[0] <= 2205.5) {
                                                            y_pred += 88.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2384.5) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1373.0) {
                                                                    y_pred += 89.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1434.5) {
                                                                        y_pred += 82.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 79.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 784.0) {
                                                            y_pred += 77.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1293.5) {
                                                                y_pred += 71.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1503.5) {
                                                    if (x[2] <= 908.0) {
                                                        if (x[1] <= 1271.5) {
                                                            y_pred += 69.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1371.0) {
                                                                y_pred += 71.0;
                                                            }

                                                            else {
                                                                y_pred += 70.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1343.0) {
                                                            y_pred += 74.0;
                                                        }

                                                        else {
                                                            y_pred += 75.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1550.0) {
                                                        y_pred += 62.0;
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2784.5) {
                                                if (x[2] <= 1647.5) {
                                                    if (x[2] <= 1254.5) {
                                                        y_pred += 77.0;
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 75.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1320.5) {
                                                    if (x[0] <= 3010.0) {
                                                        if (x[2] <= 1221.0) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            y_pred += 82.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 83.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1380.5) {
                                                        y_pred += 67.0;
                                                    }

                                                    else {
                                                        y_pred += 78.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 103.0;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 853.5) {
                                    if (x[0] <= 3311.0) {
                                        y_pred += 61.0;
                                    }

                                    else {
                                        y_pred += 64.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 922.5) {
                                        y_pred += 76.0;
                                    }

                                    else {
                                        if (x[0] <= 3563.0) {
                                            if (x[2] <= 1113.5) {
                                                y_pred += 69.0;
                                            }

                                            else {
                                                if (x[0] <= 3292.5) {
                                                    y_pred += 72.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 60.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #16
                        if (x[2] <= 585.0) {
                            if (x[0] <= 1975.0) {
                                if (x[0] <= 1906.5) {
                                    y_pred += 87.0;
                                }

                                else {
                                    y_pred += 84.0;
                                }
                            }

                            else {
                                if (x[2] <= 547.0) {
                                    if (x[1] <= 649.5) {
                                        y_pred += 112.0;
                                    }

                                    else {
                                        y_pred += 115.0;
                                    }
                                }

                                else {
                                    if (x[1] <= 989.5) {
                                        if (x[0] <= 2343.5) {
                                            y_pred += 84.0;
                                        }

                                        else {
                                            y_pred += 90.0;
                                        }
                                    }

                                    else {
                                        y_pred += 100.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[1] <= 2014.5) {
                                    if (x[0] <= 1671.5) {
                                        y_pred += 93.0;
                                    }

                                    else {
                                        if (x[0] <= 2493.5) {
                                            if (x[2] <= 650.5) {
                                                if (x[0] <= 2358.0) {
                                                    if (x[2] <= 622.0) {
                                                        if (x[2] <= 602.0) {
                                                            y_pred += 66.0;
                                                        }

                                                        else {
                                                            y_pred += 62.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1011.5) {
                                                            y_pred += 68.0;
                                                        }

                                                        else {
                                                            y_pred += 73.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 89.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 730.0) {
                                                    if (x[0] <= 2303.0) {
                                                        if (x[2] <= 677.0) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 976.0) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2247.5) {
                                                                    y_pred += 81.0;
                                                                }

                                                                else {
                                                                    y_pred += 80.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2401.0) {
                                                            y_pred += 109.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 954.5) {
                                                        if (x[2] <= 803.0) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 923.5) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1755.5) {
                                                            if (x[1] <= 1503.5) {
                                                                if (x[1] <= 1058.5) {
                                                                    if (x[0] <= 2202.0) {
                                                                        y_pred += 60.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 78.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2217.0) {
                                                                        if (x[2] <= 886.5) {
                                                                            if (x[0] <= 2175.0) {
                                                                                y_pred += 83.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 88.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 927.5) {
                                                                                y_pred += 75.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 79.0;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2429.5) {
                                                                            if (x[2] <= 1009.5) {
                                                                                y_pred += 74.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 75.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1271.5) {
                                                                                y_pred += 69.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 71.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2430.0) {
                                                                    y_pred += 68.0;
                                                                }

                                                                else {
                                                                    y_pred += 62.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 82.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 890.0) {
                                                y_pred += 98.0;
                                            }

                                            else {
                                                if (x[2] <= 697.5) {
                                                    if (x[0] <= 2577.0) {
                                                        y_pred += 109.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1237.0) {
                                                            y_pred += 76.0;
                                                        }

                                                        else {
                                                            y_pred += 86.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2554.0) {
                                                        y_pred += 89.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 1513.5) {
                                                            if (x[2] <= 1320.5) {
                                                                if (x[1] <= 1592.0) {
                                                                    if (x[1] <= 1451.5) {
                                                                        if (x[1] <= 1052.5) {
                                                                            y_pred += 71.0;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 796.0) {
                                                                                if (x[0] <= 2873.5) {
                                                                                    y_pred += 79.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 77.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 82.0;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1509.0) {
                                                                            y_pred += 70.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 68.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 1140.5) {
                                                                        if (x[0] <= 2828.0) {
                                                                            y_pred += 77.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 75.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1226.5) {
                                                                            y_pred += 83.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 82.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1380.5) {
                                                                    y_pred += 67.0;
                                                                }

                                                                else {
                                                                    y_pred += 78.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1877.5) {
                                                                y_pred += 91.0;
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2000.0) {
                                        if (x[2] <= 2861.0) {
                                            y_pred += 107.0;
                                        }

                                        else {
                                            if (x[0] <= 1765.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 2194.0) {
                                            y_pred += 93.0;
                                        }

                                        else {
                                            if (x[1] <= 2457.0) {
                                                y_pred += 103.0;
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 3238.0) {
                                    if (x[1] <= 1286.5) {
                                        y_pred += 76.0;
                                    }

                                    else {
                                        if (x[0] <= 3128.0) {
                                            y_pred += 69.0;
                                        }

                                        else {
                                            y_pred += 72.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 2023.0) {
                                        if (x[0] <= 3506.0) {
                                            if (x[0] <= 3311.0) {
                                                y_pred += 61.0;
                                            }

                                            else {
                                                y_pred += 64.0;
                                            }
                                        }

                                        else {
                                            y_pred += 60.0;
                                        }
                                    }

                                    else {
                                        y_pred += 71.0;
                                    }
                                }
                            }
                        }

                        // tree #17
                        if (x[1] <= 700.5) {
                            if (x[2] <= 524.5) {
                                y_pred += 115.0;
                            }

                            else {
                                y_pred += 112.0;
                            }
                        }

                        else {
                            if (x[2] <= 1875.0) {
                                if (x[1] <= 1485.5) {
                                    if (x[1] <= 1473.5) {
                                        if (x[1] <= 949.5) {
                                            if (x[0] <= 2320.0) {
                                                if (x[2] <= 645.5) {
                                                    if (x[1] <= 732.5) {
                                                        y_pred += 62.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 580.0) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            y_pred += 66.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2095.0) {
                                                        if (x[2] <= 711.5) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 923.5) {
                                                            if (x[0] <= 2221.0) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 925.5) {
                                                    if (x[0] <= 2613.0) {
                                                        if (x[2] <= 662.5) {
                                                            if (x[0] <= 2491.5) {
                                                                y_pred += 89.0;
                                                            }

                                                            else {
                                                                y_pred += 90.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 98.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 76.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 109.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 605.0) {
                                                if (x[2] <= 576.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 100.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1255.0) {
                                                    if (x[0] <= 3238.0) {
                                                        if (x[1] <= 1057.0) {
                                                            if (x[0] <= 2202.0) {
                                                                if (x[1] <= 1040.0) {
                                                                    if (x[0] <= 2100.0) {
                                                                        y_pred += 68.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 60.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 73.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 705.5) {
                                                                    y_pred += 87.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1007.0) {
                                                                        y_pred += 78.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 71.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 844.0) {
                                                                if (x[1] <= 1085.0) {
                                                                    if (x[2] <= 737.0) {
                                                                        if (x[2] <= 698.5) {
                                                                            y_pred += 80.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 81.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 77.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 768.5) {
                                                                        y_pred += 88.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 784.5) {
                                                                            y_pred += 79.0;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1373.0) {
                                                                                y_pred += 89.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 82.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 949.5) {
                                                                    if (x[2] <= 932.5) {
                                                                        if (x[2] <= 874.0) {
                                                                            if (x[1] <= 1278.5) {
                                                                                y_pred += 71.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 83.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 888.0) {
                                                                                y_pred += 69.0;
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 1331.0) {
                                                                                    if (x[0] <= 2802.0) {
                                                                                        if (x[0] <= 2160.5) {
                                                                                            y_pred += 75.0;
                                                                                        }

                                                                                        else {
                                                                                            y_pred += 74.0;
                                                                                        }
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 76.0;
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    y_pred += 70.0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 79.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 69.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 61.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 93.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 109.0;
                                    }
                                }

                                else {
                                    if (x[1] <= 1543.5) {
                                        if (x[2] <= 1110.5) {
                                            if (x[1] <= 1514.0) {
                                                y_pred += 75.0;
                                            }

                                            else {
                                                y_pred += 64.0;
                                            }
                                        }

                                        else {
                                            y_pred += 62.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3563.0) {
                                            if (x[1] <= 1550.5) {
                                                y_pred += 86.0;
                                            }

                                            else {
                                                if (x[0] <= 2695.0) {
                                                    if (x[0] <= 2529.0) {
                                                        y_pred += 68.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 1247.0) {
                                                            y_pred += 68.0;
                                                        }

                                                        else {
                                                            y_pred += 75.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2784.5) {
                                                        if (x[1] <= 1755.0) {
                                                            y_pred += 77.0;
                                                        }

                                                        else {
                                                            y_pred += 91.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1320.5) {
                                                            if (x[0] <= 3109.0) {
                                                                if (x[0] <= 3010.0) {
                                                                    if (x[0] <= 2932.5) {
                                                                        y_pred += 82.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 72.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1850.5) {
                                                                y_pred += 67.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 2103.5) {
                                                                    y_pred += 78.0;
                                                                }

                                                                else {
                                                                    y_pred += 71.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 60.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 2861.0) {
                                    if (x[0] <= 2012.0) {
                                        y_pred += 107.0;
                                    }

                                    else {
                                        if (x[0] <= 2150.0) {
                                            y_pred += 82.0;
                                        }

                                        else {
                                            if (x[2] <= 2194.0) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 103.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2000.0) {
                                        if (x[0] <= 1765.5) {
                                            y_pred += 84.0;
                                        }

                                        else {
                                            y_pred += 76.0;
                                        }
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }
                        }

                        // tree #18
                        if (x[0] <= 2162.5) {
                            if (x[2] <= 554.0) {
                                if (x[1] <= 708.0) {
                                    if (x[2] <= 524.5) {
                                        y_pred += 115.0;
                                    }

                                    else {
                                        y_pred += 112.0;
                                    }
                                }

                                else {
                                    y_pred += 84.0;
                                }
                            }

                            else {
                                if (x[0] <= 1894.5) {
                                    if (x[2] <= 1093.0) {
                                        if (x[2] <= 597.0) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            y_pred += 73.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1750.5) {
                                            if (x[1] <= 1830.0) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 84.0;
                                            }
                                        }

                                        else {
                                            y_pred += 107.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1938.5) {
                                        if (x[0] <= 1903.5) {
                                            y_pred += 75.0;
                                        }

                                        else {
                                            y_pred += 76.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1996.5) {
                                            if (x[2] <= 611.0) {
                                                if (x[0] <= 1975.0) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    if (x[2] <= 579.0) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        y_pred += 100.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 655.5) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    if (x[0] <= 2094.0) {
                                                        if (x[1] <= 900.0) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2143.0) {
                                                            if (x[2] <= 1606.5) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 2552.0) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 741.0) {
                                if (x[1] <= 764.0) {
                                    y_pred += 62.0;
                                }

                                else {
                                    if (x[2] <= 708.5) {
                                        if (x[2] <= 588.5) {
                                            if (x[1] <= 860.5) {
                                                y_pred += 90.0;
                                            }

                                            else {
                                                y_pred += 66.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1269.5) {
                                                if (x[1] <= 871.0) {
                                                    y_pred += 89.0;
                                                }

                                                else {
                                                    if (x[2] <= 643.0) {
                                                        y_pred += 76.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 672.0) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 686.5) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 698.5) {
                                                                    y_pred += 80.0;
                                                                }

                                                                else {
                                                                    y_pred += 81.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1515.0) {
                                                    y_pred += 109.0;
                                                }

                                                else {
                                                    y_pred += 86.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 723.0) {
                                            y_pred += 109.0;
                                        }

                                        else {
                                            y_pred += 98.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 2014.0) {
                                    if (x[2] <= 1413.0) {
                                        if (x[1] <= 1451.5) {
                                            if (x[0] <= 2191.0) {
                                                y_pred += 60.0;
                                            }

                                            else {
                                                if (x[2] <= 805.0) {
                                                    if (x[1] <= 1085.0) {
                                                        if (x[1] <= 1023.5) {
                                                            y_pred += 78.0;
                                                        }

                                                        else {
                                                            y_pred += 77.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2610.0) {
                                                            if (x[2] <= 782.0) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                y_pred += 89.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 3238.0) {
                                                        if (x[2] <= 838.5) {
                                                            y_pred += 82.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2316.0) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 3143.5) {
                                                                    if (x[2] <= 933.0) {
                                                                        if (x[0] <= 2429.5) {
                                                                            y_pred += 74.0;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 874.0) {
                                                                                y_pred += 71.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 69.0;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 69.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 76.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 61.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1858.5) {
                                                if (x[0] <= 3235.5) {
                                                    if (x[0] <= 2873.5) {
                                                        if (x[0] <= 2326.0) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1651.0) {
                                                                if (x[1] <= 1491.5) {
                                                                    y_pred += 70.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1533.5) {
                                                                        y_pred += 62.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 68.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2752.5) {
                                                                    y_pred += 77.0;
                                                                }

                                                                else {
                                                                    y_pred += 67.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 3109.0) {
                                                            if (x[2] <= 1140.5) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 72.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1634.5) {
                                                        y_pred += 64.0;
                                                    }

                                                    else {
                                                        y_pred += 60.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 82.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1842.5) {
                                            y_pred += 91.0;
                                        }

                                        else {
                                            if (x[0] <= 3255.0) {
                                                if (x[2] <= 1561.0) {
                                                    y_pred += 78.0;
                                                }

                                                else {
                                                    y_pred += 75.0;
                                                }
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    y_pred += 103.0;
                                }
                            }
                        }

                        // tree #19
                        if (x[1] <= 700.5) {
                            if (x[0] <= 2119.0) {
                                y_pred += 112.0;
                            }

                            else {
                                y_pred += 115.0;
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[1] <= 2014.5) {
                                    if (x[1] <= 732.5) {
                                        y_pred += 62.0;
                                    }

                                    else {
                                        if (x[1] <= 911.5) {
                                            if (x[1] <= 856.5) {
                                                if (x[0] <= 2582.0) {
                                                    if (x[2] <= 543.5) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 826.0) {
                                                            y_pred += 90.0;
                                                        }

                                                        else {
                                                            y_pred += 89.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 98.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2179.0) {
                                                    if (x[1] <= 892.5) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2021.0) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2004.0) {
                                                if (x[0] <= 1940.0) {
                                                    if (x[2] <= 1233.0) {
                                                        if (x[1] <= 1149.0) {
                                                            if (x[0] <= 1865.5) {
                                                                y_pred += 73.0;
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 93.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 100.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 730.0) {
                                                    if (x[2] <= 708.5) {
                                                        if (x[2] <= 593.0) {
                                                            y_pred += 66.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1269.5) {
                                                                if (x[1] <= 978.0) {
                                                                    if (x[0] <= 2325.0) {
                                                                        y_pred += 68.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 76.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1023.5) {
                                                                        y_pred += 87.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 698.5) {
                                                                            y_pred += 80.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 81.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2628.0) {
                                                                    y_pred += 109.0;
                                                                }

                                                                else {
                                                                    y_pred += 86.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 109.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1608.5) {
                                                        if (x[0] <= 2161.0) {
                                                            if (x[0] <= 2143.0) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 861.5) {
                                                                if (x[2] <= 757.5) {
                                                                    if (x[1] <= 1001.5) {
                                                                        y_pred += 78.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 60.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1493.5) {
                                                                        if (x[0] <= 2667.5) {
                                                                            if (x[1] <= 1008.5) {
                                                                                y_pred += 78.0;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 809.5) {
                                                                                    if (x[1] <= 1207.0) {
                                                                                        y_pred += 88.0;
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 89.0;
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    y_pred += 82.0;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 2685.5) {
                                                                                y_pred += 79.0;
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 2881.0) {
                                                                                    y_pred += 71.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 77.0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 68.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1503.5) {
                                                                    if (x[0] <= 2429.5) {
                                                                        if (x[1] <= 1343.0) {
                                                                            y_pred += 74.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 75.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 874.0) {
                                                                            y_pred += 71.0;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1367.5) {
                                                                                y_pred += 69.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 70.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 1258.5) {
                                                                        y_pred += 62.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 68.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2784.5) {
                                                            if (x[2] <= 1647.5) {
                                                                if (x[2] <= 1254.5) {
                                                                    y_pred += 77.0;
                                                                }

                                                                else {
                                                                    y_pred += 91.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1979.5) {
                                                                    y_pred += 75.0;
                                                                }

                                                                else {
                                                                    y_pred += 82.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2857.0) {
                                                                y_pred += 67.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 1140.5) {
                                                                    y_pred += 75.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 1367.0) {
                                                                        if (x[2] <= 1226.5) {
                                                                            y_pred += 83.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 82.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 78.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2000.0) {
                                        if (x[0] <= 1897.0) {
                                            if (x[1] <= 2178.5) {
                                                y_pred += 107.0;
                                            }

                                            else {
                                                y_pred += 84.0;
                                            }
                                        }

                                        else {
                                            y_pred += 76.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2302.5) {
                                            if (x[0] <= 2123.0) {
                                                y_pred += 98.0;
                                            }

                                            else {
                                                y_pred += 93.0;
                                            }
                                        }

                                        else {
                                            y_pred += 103.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 853.5) {
                                    if (x[0] <= 3311.0) {
                                        y_pred += 61.0;
                                    }

                                    else {
                                        y_pred += 64.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 3563.0) {
                                        if (x[1] <= 1286.5) {
                                            y_pred += 76.0;
                                        }

                                        else {
                                            if (x[0] <= 3128.0) {
                                                y_pred += 69.0;
                                            }

                                            else {
                                                if (x[1] <= 1978.0) {
                                                    y_pred += 72.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 60.0;
                                    }
                                }
                            }
                        }

                        // tree #20
                        if (x[1] <= 700.5) {
                            if (x[0] <= 2119.0) {
                                y_pred += 112.0;
                            }

                            else {
                                y_pred += 115.0;
                            }
                        }

                        else {
                            if (x[2] <= 1875.0) {
                                if (x[0] <= 3090.5) {
                                    if (x[1] <= 732.5) {
                                        y_pred += 62.0;
                                    }

                                    else {
                                        if (x[2] <= 741.0) {
                                            if (x[0] <= 2303.0) {
                                                if (x[2] <= 585.0) {
                                                    if (x[2] <= 579.0) {
                                                        if (x[0] <= 1906.5) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 84.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 100.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2009.5) {
                                                        if (x[1] <= 974.0) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            y_pred += 73.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1013.5) {
                                                            if (x[1] <= 905.5) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 943.0) {
                                                                    y_pred += 66.0;
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2247.5) {
                                                                y_pred += 81.0;
                                                            }

                                                            else {
                                                                y_pred += 80.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 624.5) {
                                                    if (x[0] <= 2596.0) {
                                                        if (x[0] <= 2491.5) {
                                                            y_pred += 89.0;
                                                        }

                                                        else {
                                                            y_pred += 90.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1237.0) {
                                                            y_pred += 76.0;
                                                        }

                                                        else {
                                                            y_pred += 86.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2401.0) {
                                                        y_pred += 109.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 644.5) {
                                                            y_pred += 109.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 698.5) {
                                                                y_pred += 87.0;
                                                            }

                                                            else {
                                                                y_pred += 98.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2161.0) {
                                                if (x[1] <= 1354.5) {
                                                    if (x[1] <= 1011.5) {
                                                        if (x[2] <= 815.5) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2018.5) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1294.5) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 93.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2191.0) {
                                                    y_pred += 60.0;
                                                }

                                                else {
                                                    if (x[1] <= 1608.5) {
                                                        if (x[0] <= 2205.5) {
                                                            y_pred += 88.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2501.0) {
                                                                if (x[0] <= 2326.0) {
                                                                    if (x[2] <= 979.5) {
                                                                        y_pred += 78.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 1017.0) {
                                                                        if (x[1] <= 1231.5) {
                                                                            y_pred += 74.0;
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 2446.5) {
                                                                                y_pred += 71.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 69.0;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1258.5) {
                                                                            y_pred += 62.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 68.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2554.0) {
                                                                    y_pred += 89.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1451.5) {
                                                                        if (x[0] <= 2685.5) {
                                                                            if (x[1] <= 1434.5) {
                                                                                y_pred += 82.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 79.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1052.5) {
                                                                                y_pred += 71.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 77.0;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 849.5) {
                                                                            y_pred += 68.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 70.0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1513.5) {
                                                            if (x[0] <= 2857.0) {
                                                                if (x[0] <= 2752.5) {
                                                                    y_pred += 77.0;
                                                                }

                                                                else {
                                                                    y_pred += 67.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1140.5) {
                                                                    y_pred += 75.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 1367.0) {
                                                                        if (x[0] <= 2993.5) {
                                                                            y_pred += 82.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 83.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 78.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2703.0) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                y_pred += 91.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1172.5) {
                                        y_pred += 61.0;
                                    }

                                    else {
                                        if (x[1] <= 1286.5) {
                                            y_pred += 76.0;
                                        }

                                        else {
                                            if (x[1] <= 2023.0) {
                                                if (x[2] <= 1240.5) {
                                                    if (x[1] <= 1462.0) {
                                                        y_pred += 69.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 3506.0) {
                                                            y_pred += 64.0;
                                                        }

                                                        else {
                                                            y_pred += 60.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 72.0;
                                                }
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 2861.0) {
                                    if (x[1] <= 2082.5) {
                                        if (x[0] <= 2150.0) {
                                            y_pred += 82.0;
                                        }

                                        else {
                                            y_pred += 93.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2176.5) {
                                            y_pred += 107.0;
                                        }

                                        else {
                                            y_pred += 103.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2000.0) {
                                        if (x[1] <= 2243.0) {
                                            y_pred += 76.0;
                                        }

                                        else {
                                            y_pred += 84.0;
                                        }
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }
                        }

                        // tree #21
                        if (x[2] <= 585.0) {
                            if (x[2] <= 521.0) {
                                y_pred += 115.0;
                            }

                            else {
                                if (x[2] <= 547.0) {
                                    if (x[0] <= 2017.5) {
                                        y_pred += 84.0;
                                    }

                                    else {
                                        y_pred += 112.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 1975.0) {
                                        if (x[2] <= 569.0) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            y_pred += 84.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 579.0) {
                                            if (x[1] <= 830.0) {
                                                y_pred += 90.0;
                                            }

                                            else {
                                                y_pred += 84.0;
                                            }
                                        }

                                        else {
                                            y_pred += 100.0;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2014.5) {
                                if (x[2] <= 741.0) {
                                    if (x[1] <= 787.0) {
                                        y_pred += 62.0;
                                    }

                                    else {
                                        if (x[0] <= 2303.0) {
                                            if (x[1] <= 905.5) {
                                                if (x[0] <= 2116.0) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2199.0) {
                                                    if (x[2] <= 606.0) {
                                                        y_pred += 66.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1011.5) {
                                                            y_pred += 68.0;
                                                        }

                                                        else {
                                                            y_pred += 73.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2247.5) {
                                                        y_pred += 81.0;
                                                    }

                                                    else {
                                                        y_pred += 80.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2613.0) {
                                                if (x[0] <= 2380.0) {
                                                    y_pred += 109.0;
                                                }

                                                else {
                                                    if (x[0] <= 2493.5) {
                                                        if (x[0] <= 2439.0) {
                                                            y_pred += 89.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1168.0) {
                                                            y_pred += 98.0;
                                                        }

                                                        else {
                                                            y_pred += 109.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1237.0) {
                                                    y_pred += 76.0;
                                                }

                                                else {
                                                    y_pred += 86.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 1493.5) {
                                        if (x[0] <= 3238.0) {
                                            if (x[2] <= 798.5) {
                                                if (x[2] <= 749.5) {
                                                    if (x[2] <= 748.5) {
                                                        y_pred += 78.0;
                                                    }

                                                    else {
                                                        y_pred += 60.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2610.0) {
                                                        if (x[2] <= 758.0) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1207.0) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                y_pred += 89.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2873.5) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            y_pred += 77.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 983.5) {
                                                    if (x[1] <= 923.5) {
                                                        y_pred += 78.0;
                                                    }

                                                    else {
                                                        y_pred += 83.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 810.0) {
                                                        y_pred += 68.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2187.0) {
                                                            if (x[0] <= 2018.5) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 908.0) {
                                                                    y_pred += 83.0;
                                                                }

                                                                else {
                                                                    y_pred += 79.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1850.5) {
                                                                if (x[0] <= 2611.5) {
                                                                    if (x[1] <= 1503.5) {
                                                                        if (x[2] <= 908.0) {
                                                                            if (x[1] <= 1271.5) {
                                                                                y_pred += 69.0;
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 2499.5) {
                                                                                    y_pred += 71.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 70.0;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1343.0) {
                                                                                y_pred += 74.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 75.0;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1258.5) {
                                                                            y_pred += 62.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 68.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2675.0) {
                                                                        y_pred += 82.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1763.0) {
                                                                            if (x[0] <= 3090.0) {
                                                                                if (x[0] <= 3010.0) {
                                                                                    if (x[1] <= 1371.0) {
                                                                                        y_pred += 71.0;
                                                                                    }

                                                                                    else {
                                                                                        if (x[1] <= 1712.0) {
                                                                                            y_pred += 75.0;
                                                                                        }

                                                                                        else {
                                                                                            y_pred += 77.0;
                                                                                        }
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    y_pred += 83.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 1286.5) {
                                                                                    y_pred += 76.0;
                                                                                }

                                                                                else {
                                                                                    if (x[2] <= 1113.5) {
                                                                                        y_pred += 69.0;
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 72.0;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 67.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1901.0) {
                                                                    y_pred += 78.0;
                                                                }

                                                                else {
                                                                    y_pred += 82.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3506.0) {
                                                if (x[2] <= 792.5) {
                                                    y_pred += 64.0;
                                                }

                                                else {
                                                    y_pred += 61.0;
                                                }
                                            }

                                            else {
                                                y_pred += 60.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1859.5) {
                                            if (x[2] <= 1580.0) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1945.0) {
                                                y_pred += 82.0;
                                            }

                                            else {
                                                y_pred += 75.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2163.5) {
                                    if (x[1] <= 2082.5) {
                                        y_pred += 93.0;
                                    }

                                    else {
                                        y_pred += 107.0;
                                    }
                                }

                                else {
                                    if (x[1] <= 2487.0) {
                                        if (x[2] <= 2003.0) {
                                            y_pred += 71.0;
                                        }

                                        else {
                                            if (x[1] <= 2241.0) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                if (x[2] <= 2646.5) {
                                                    y_pred += 103.0;
                                                }

                                                else {
                                                    y_pred += 84.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }
                        }

                        // tree #22
                        if (x[0] <= 2162.5) {
                            if (x[1] <= 708.0) {
                                if (x[1] <= 649.5) {
                                    y_pred += 112.0;
                                }

                                else {
                                    y_pred += 115.0;
                                }
                            }

                            else {
                                if (x[0] <= 1894.5) {
                                    if (x[2] <= 1093.0) {
                                        if (x[1] <= 1130.5) {
                                            y_pred += 73.0;
                                        }

                                        else {
                                            y_pred += 87.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 2861.0) {
                                            if (x[1] <= 1750.5) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 107.0;
                                            }
                                        }

                                        else {
                                            y_pred += 84.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 2444.0) {
                                        if (x[1] <= 2147.0) {
                                            if (x[1] <= 1107.0) {
                                                if (x[1] <= 949.5) {
                                                    if (x[2] <= 623.5) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 711.5) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2095.0) {
                                                                y_pred += 87.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 772.0) {
                                                        y_pred += 68.0;
                                                    }

                                                    else {
                                                        y_pred += 75.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2063.5) {
                                                    y_pred += 100.0;
                                                }

                                                else {
                                                    if (x[0] <= 2151.5) {
                                                        if (x[1] <= 1294.5) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1606.5) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 93.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 76.0;
                                        }
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[2] <= 741.0) {
                                    if (x[0] <= 2320.0) {
                                        if (x[2] <= 649.5) {
                                            if (x[0] <= 2232.5) {
                                                y_pred += 66.0;
                                            }

                                            else {
                                                y_pred += 62.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 976.0) {
                                                y_pred += 79.0;
                                            }

                                            else {
                                                if (x[0] <= 2247.5) {
                                                    y_pred += 81.0;
                                                }

                                                else {
                                                    y_pred += 80.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 925.5) {
                                            if (x[2] <= 678.5) {
                                                if (x[1] <= 886.5) {
                                                    if (x[1] <= 826.0) {
                                                        y_pred += 90.0;
                                                    }

                                                    else {
                                                        y_pred += 89.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 76.0;
                                                }
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 613.0) {
                                                y_pred += 86.0;
                                            }

                                            else {
                                                if (x[1] <= 957.5) {
                                                    y_pred += 109.0;
                                                }

                                                else {
                                                    if (x[0] <= 2493.5) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 109.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2191.0) {
                                        y_pred += 60.0;
                                    }

                                    else {
                                        if (x[1] <= 2108.5) {
                                            if (x[0] <= 2205.5) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                if (x[2] <= 798.5) {
                                                    if (x[2] <= 784.5) {
                                                        if (x[2] <= 770.0) {
                                                            if (x[2] <= 758.5) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 77.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 89.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1413.0) {
                                                        if (x[1] <= 1608.5) {
                                                            if (x[2] <= 1110.5) {
                                                                if (x[0] <= 2670.0) {
                                                                    if (x[2] <= 861.5) {
                                                                        if (x[1] <= 1174.5) {
                                                                            y_pred += 78.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 82.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2429.5) {
                                                                            if (x[1] <= 1343.0) {
                                                                                y_pred += 74.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 75.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 2446.5) {
                                                                                y_pred += 71.0;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 890.5) {
                                                                                    y_pred += 69.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 70.0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1293.5) {
                                                                        y_pred += 71.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 68.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1550.0) {
                                                                    y_pred += 62.0;
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2857.0) {
                                                                if (x[1] <= 1763.0) {
                                                                    y_pred += 77.0;
                                                                }

                                                                else {
                                                                    y_pred += 67.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1140.5) {
                                                                    y_pred += 75.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 1226.5) {
                                                                        y_pred += 83.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 82.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2703.0) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1513.5) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 91.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 103.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1172.5) {
                                    y_pred += 61.0;
                                }

                                else {
                                    if (x[1] <= 1286.5) {
                                        y_pred += 76.0;
                                    }

                                    else {
                                        if (x[2] <= 1240.5) {
                                            if (x[2] <= 1077.0) {
                                                if (x[0] <= 3216.5) {
                                                    y_pred += 69.0;
                                                }

                                                else {
                                                    y_pred += 64.0;
                                                }
                                            }

                                            else {
                                                y_pred += 60.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1978.0) {
                                                y_pred += 72.0;
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #23
                        if (x[0] <= 2162.5) {
                            if (x[0] <= 2067.0) {
                                if (x[1] <= 1107.0) {
                                    if (x[0] <= 1907.0) {
                                        if (x[1] <= 1073.5) {
                                            y_pred += 73.0;
                                        }

                                        else {
                                            y_pred += 75.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 655.5) {
                                            if (x[0] <= 1994.0) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 68.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 711.5) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 2861.0) {
                                        if (x[0] <= 1888.0) {
                                            if (x[0] <= 1694.5) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 107.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 576.0) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 100.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1765.5) {
                                            y_pred += 84.0;
                                        }

                                        else {
                                            y_pred += 76.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2132.0) {
                                    if (x[0] <= 2119.0) {
                                        if (x[0] <= 2102.0) {
                                            y_pred += 98.0;
                                        }

                                        else {
                                            y_pred += 112.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 766.5) {
                                            y_pred += 115.0;
                                        }

                                        else {
                                            y_pred += 84.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 1502.0) {
                                        if (x[0] <= 2143.0) {
                                            y_pred += 79.0;
                                        }

                                        else {
                                            y_pred += 83.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2150.0) {
                                            y_pred += 82.0;
                                        }

                                        else {
                                            y_pred += 93.0;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[1] <= 2108.5) {
                                    if (x[2] <= 741.0) {
                                        if (x[0] <= 2320.0) {
                                            if (x[1] <= 809.0) {
                                                y_pred += 62.0;
                                            }

                                            else {
                                                if (x[1] <= 988.5) {
                                                    if (x[2] <= 633.5) {
                                                        y_pred += 66.0;
                                                    }

                                                    else {
                                                        y_pred += 79.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2247.5) {
                                                        y_pred += 81.0;
                                                    }

                                                    else {
                                                        y_pred += 80.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2613.0) {
                                                if (x[2] <= 608.5) {
                                                    if (x[1] <= 826.0) {
                                                        y_pred += 90.0;
                                                    }

                                                    else {
                                                        y_pred += 89.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 644.5) {
                                                        y_pred += 109.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 687.5) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2470.5) {
                                                                y_pred += 109.0;
                                                            }

                                                            else {
                                                                y_pred += 98.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 611.5) {
                                                    y_pred += 86.0;
                                                }

                                                else {
                                                    y_pred += 76.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 1513.5) {
                                            if (x[2] <= 798.5) {
                                                if (x[2] <= 757.5) {
                                                    if (x[1] <= 1001.5) {
                                                        y_pred += 78.0;
                                                    }

                                                    else {
                                                        y_pred += 60.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1085.0) {
                                                        y_pred += 77.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 784.5) {
                                                            if (x[2] <= 768.5) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 89.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1608.5) {
                                                    if (x[0] <= 2326.0) {
                                                        if (x[2] <= 979.5) {
                                                            y_pred += 78.0;
                                                        }

                                                        else {
                                                            y_pred += 75.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2611.5) {
                                                            if (x[1] <= 1491.5) {
                                                                if (x[0] <= 2429.5) {
                                                                    y_pred += 74.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2446.5) {
                                                                        y_pred += 71.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 890.5) {
                                                                            y_pred += 69.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 70.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1258.5) {
                                                                    y_pred += 62.0;
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1492.0) {
                                                                if (x[1] <= 1234.5) {
                                                                    y_pred += 71.0;
                                                                }

                                                                else {
                                                                    y_pred += 82.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2857.0) {
                                                        if (x[2] <= 1121.5) {
                                                            y_pred += 77.0;
                                                        }

                                                        else {
                                                            y_pred += 67.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1140.5) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 3071.5) {
                                                                if (x[0] <= 2993.5) {
                                                                    y_pred += 82.0;
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2703.0) {
                                                y_pred += 75.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    y_pred += 103.0;
                                }
                            }

                            else {
                                if (x[1] <= 1172.5) {
                                    y_pred += 61.0;
                                }

                                else {
                                    if (x[2] <= 834.0) {
                                        y_pred += 64.0;
                                    }

                                    else {
                                        if (x[1] <= 1687.0) {
                                            if (x[0] <= 3162.5) {
                                                if (x[1] <= 1514.5) {
                                                    y_pred += 69.0;
                                                }

                                                else {
                                                    y_pred += 72.0;
                                                }
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1438.5) {
                                                y_pred += 60.0;
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #24
                        if (x[0] <= 2162.5) {
                            if (x[2] <= 554.0) {
                                if (x[0] <= 2017.5) {
                                    y_pred += 84.0;
                                }

                                else {
                                    if (x[0] <= 2119.0) {
                                        y_pred += 112.0;
                                    }

                                    else {
                                        y_pred += 115.0;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1107.0) {
                                    if (x[1] <= 949.5) {
                                        if (x[1] <= 892.5) {
                                            y_pred += 84.0;
                                        }

                                        else {
                                            if (x[1] <= 900.0) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[2] <= 815.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1011.5) {
                                            y_pred += 68.0;
                                        }

                                        else {
                                            if (x[1] <= 1073.5) {
                                                y_pred += 73.0;
                                            }

                                            else {
                                                y_pred += 75.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 3014.0) {
                                        if (x[1] <= 2163.5) {
                                            if (x[1] <= 2082.5) {
                                                if (x[0] <= 2063.5) {
                                                    if (x[2] <= 576.0) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 1072.0) {
                                                            y_pred += 100.0;
                                                        }

                                                        else {
                                                            y_pred += 93.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1502.0) {
                                                        if (x[2] <= 908.0) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 2159.5) {
                                                            y_pred += 93.0;
                                                        }

                                                        else {
                                                            y_pred += 82.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 107.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 2243.0) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                y_pred += 84.0;
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[0] <= 2191.0) {
                                    if (x[2] <= 667.5) {
                                        y_pred += 66.0;
                                    }

                                    else {
                                        y_pred += 60.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 798.5) {
                                        if (x[0] <= 2320.0) {
                                            if (x[2] <= 649.5) {
                                                y_pred += 62.0;
                                            }

                                            else {
                                                if (x[2] <= 757.0) {
                                                    if (x[2] <= 726.5) {
                                                        if (x[2] <= 686.5) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 698.5) {
                                                                y_pred += 80.0;
                                                            }

                                                            else {
                                                                y_pred += 81.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 78.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 88.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 751.5) {
                                                if (x[1] <= 925.5) {
                                                    if (x[2] <= 678.5) {
                                                        if (x[0] <= 2596.0) {
                                                            if (x[2] <= 572.5) {
                                                                y_pred += 90.0;
                                                            }

                                                            else {
                                                                y_pred += 89.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 76.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 98.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 613.0) {
                                                        y_pred += 86.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2401.0) {
                                                            y_pred += 109.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1234.0) {
                                                                y_pred += 87.0;
                                                            }

                                                            else {
                                                                y_pred += 109.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1191.0) {
                                                    y_pred += 77.0;
                                                }

                                                else {
                                                    if (x[2] <= 784.5) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        y_pred += 89.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2442.0) {
                                            if (x[0] <= 2435.0) {
                                                if (x[0] <= 2326.0) {
                                                    if (x[1] <= 1203.5) {
                                                        y_pred += 78.0;
                                                    }

                                                    else {
                                                        y_pred += 75.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2424.5) {
                                                        y_pred += 68.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1235.0) {
                                                            y_pred += 74.0;
                                                        }

                                                        else {
                                                            y_pred += 71.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 62.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 2108.5) {
                                                if (x[2] <= 904.5) {
                                                    if (x[0] <= 2611.5) {
                                                        if (x[2] <= 890.5) {
                                                            y_pred += 69.0;
                                                        }

                                                        else {
                                                            y_pred += 70.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1492.0) {
                                                            if (x[0] <= 2675.0) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 71.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1513.5) {
                                                        if (x[2] <= 1320.5) {
                                                            if (x[1] <= 1669.5) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1813.5) {
                                                                    if (x[2] <= 1022.0) {
                                                                        y_pred += 77.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 82.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2935.0) {
                                                                y_pred += 67.0;
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2703.0) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            y_pred += 91.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 103.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 853.5) {
                                    if (x[0] <= 3311.0) {
                                        y_pred += 61.0;
                                    }

                                    else {
                                        y_pred += 64.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 922.5) {
                                        y_pred += 76.0;
                                    }

                                    else {
                                        if (x[0] <= 3563.0) {
                                            if (x[2] <= 1113.5) {
                                                y_pred += 69.0;
                                            }

                                            else {
                                                if (x[1] <= 1978.0) {
                                                    y_pred += 72.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 60.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #25
                        if (x[1] <= 700.5) {
                            if (x[2] <= 524.5) {
                                y_pred += 115.0;
                            }

                            else {
                                y_pred += 112.0;
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[0] <= 2162.5) {
                                    if (x[1] <= 1107.0) {
                                        if (x[0] <= 1907.0) {
                                            if (x[1] <= 1073.5) {
                                                y_pred += 73.0;
                                            }

                                            else {
                                                y_pred += 75.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 949.5) {
                                                if (x[0] <= 2084.0) {
                                                    if (x[1] <= 892.5) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2021.0) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 894.0) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        y_pred += 83.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 68.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1164.0) {
                                            y_pred += 100.0;
                                        }

                                        else {
                                            if (x[1] <= 1354.5) {
                                                if (x[0] <= 2018.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    if (x[2] <= 908.0) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        y_pred += 79.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 2163.5) {
                                                    if (x[1] <= 2082.5) {
                                                        if (x[1] <= 1664.5) {
                                                            y_pred += 93.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2150.0) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 93.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 107.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 2459.0) {
                                                        if (x[2] <= 2969.5) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            y_pred += 76.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 98.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 741.0) {
                                        if (x[2] <= 708.5) {
                                            if (x[1] <= 1269.5) {
                                                if (x[0] <= 2358.0) {
                                                    if (x[2] <= 649.5) {
                                                        if (x[2] <= 602.0) {
                                                            y_pred += 66.0;
                                                        }

                                                        else {
                                                            y_pred += 62.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 976.0) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2247.5) {
                                                                y_pred += 81.0;
                                                            }

                                                            else {
                                                                y_pred += 80.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 886.5) {
                                                        if (x[1] <= 826.0) {
                                                            y_pred += 90.0;
                                                        }

                                                        else {
                                                            y_pred += 89.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 956.0) {
                                                            y_pred += 76.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1515.0) {
                                                    y_pred += 109.0;
                                                }

                                                else {
                                                    y_pred += 86.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 723.0) {
                                                y_pred += 109.0;
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2108.5) {
                                            if (x[2] <= 1513.5) {
                                                if (x[2] <= 798.5) {
                                                    if (x[0] <= 2191.0) {
                                                        y_pred += 60.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2610.0) {
                                                            if (x[2] <= 757.0) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1207.0) {
                                                                    y_pred += 88.0;
                                                                }

                                                                else {
                                                                    y_pred += 89.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2873.5) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                y_pred += 77.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1608.5) {
                                                        if (x[0] <= 2326.0) {
                                                            if (x[1] <= 1203.5) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2611.5) {
                                                                if (x[2] <= 1017.0) {
                                                                    if (x[2] <= 908.0) {
                                                                        if (x[0] <= 2446.5) {
                                                                            y_pred += 71.0;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1367.5) {
                                                                                y_pred += 69.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 70.0;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 74.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2430.0) {
                                                                        y_pred += 68.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 62.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 810.0) {
                                                                    y_pred += 68.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2675.0) {
                                                                        y_pred += 82.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 71.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1320.5) {
                                                            if (x[1] <= 1669.5) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1813.5) {
                                                                    if (x[0] <= 2828.0) {
                                                                        y_pred += 77.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 82.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2935.0) {
                                                                y_pred += 67.0;
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2703.0) {
                                                    y_pred += 75.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 103.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 853.5) {
                                    if (x[1] <= 1348.0) {
                                        y_pred += 61.0;
                                    }

                                    else {
                                        y_pred += 64.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 3563.0) {
                                        if (x[1] <= 1286.5) {
                                            y_pred += 76.0;
                                        }

                                        else {
                                            if (x[2] <= 1113.5) {
                                                y_pred += 69.0;
                                            }

                                            else {
                                                if (x[0] <= 3292.5) {
                                                    y_pred += 72.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 60.0;
                                    }
                                }
                            }
                        }

                        // tree #26
                        if (x[0] <= 2162.5) {
                            if (x[0] <= 2067.0) {
                                if (x[0] <= 2009.5) {
                                    if (x[1] <= 1107.0) {
                                        if (x[0] <= 1907.0) {
                                            if (x[1] <= 1073.5) {
                                                y_pred += 73.0;
                                            }

                                            else {
                                                y_pred += 75.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 621.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 2861.0) {
                                            if (x[2] <= 2161.0) {
                                                if (x[2] <= 576.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    if (x[0] <= 1746.0) {
                                                        y_pred += 93.0;
                                                    }

                                                    else {
                                                        y_pred += 100.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 107.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 2969.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2034.5) {
                                        y_pred += 68.0;
                                    }

                                    else {
                                        y_pred += 87.0;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 766.5) {
                                    if (x[2] <= 524.5) {
                                        y_pred += 115.0;
                                    }

                                    else {
                                        y_pred += 112.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 2656.5) {
                                        if (x[1] <= 1996.5) {
                                            if (x[1] <= 1294.5) {
                                                if (x[1] <= 894.0) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1617.0) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    y_pred += 82.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 93.0;
                                        }
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[2] <= 741.0) {
                                    if (x[0] <= 2320.0) {
                                        if (x[0] <= 2281.0) {
                                            if (x[2] <= 633.5) {
                                                y_pred += 66.0;
                                            }

                                            else {
                                                if (x[2] <= 686.5) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    if (x[2] <= 698.5) {
                                                        y_pred += 80.0;
                                                    }

                                                    else {
                                                        y_pred += 81.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 62.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 925.5) {
                                            if (x[0] <= 2613.0) {
                                                if (x[1] <= 852.5) {
                                                    if (x[1] <= 826.0) {
                                                        y_pred += 90.0;
                                                    }

                                                    else {
                                                        y_pred += 89.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 98.0;
                                                }
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2628.0) {
                                                if (x[2] <= 644.5) {
                                                    y_pred += 109.0;
                                                }

                                                else {
                                                    if (x[0] <= 2401.0) {
                                                        y_pred += 109.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 86.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 2014.0) {
                                        if (x[1] <= 1608.5) {
                                            if (x[1] <= 1503.5) {
                                                if (x[1] <= 1052.5) {
                                                    if (x[2] <= 748.5) {
                                                        y_pred += 78.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 970.5) {
                                                            y_pred += 78.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1030.5) {
                                                                y_pred += 60.0;
                                                            }

                                                            else {
                                                                y_pred += 71.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 844.0) {
                                                        if (x[2] <= 767.5) {
                                                            y_pred += 88.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1191.0) {
                                                                y_pred += 77.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2599.5) {
                                                                    y_pred += 89.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2667.5) {
                                                                        y_pred += 82.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 79.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 908.0) {
                                                            if (x[1] <= 1271.5) {
                                                                y_pred += 69.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1371.0) {
                                                                    y_pred += 71.0;
                                                                }

                                                                else {
                                                                    y_pred += 70.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1343.0) {
                                                                y_pred += 74.0;
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 958.5) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    if (x[1] <= 1550.0) {
                                                        y_pred += 62.0;
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1800.0) {
                                                if (x[2] <= 1140.5) {
                                                    if (x[1] <= 1712.0) {
                                                        y_pred += 75.0;
                                                    }

                                                    else {
                                                        y_pred += 77.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1373.0) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2857.0) {
                                                    if (x[1] <= 1885.5) {
                                                        y_pred += 67.0;
                                                    }

                                                    else {
                                                        y_pred += 75.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2994.0) {
                                                        y_pred += 82.0;
                                                    }

                                                    else {
                                                        y_pred += 78.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 103.0;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 853.5) {
                                    if (x[0] <= 3311.0) {
                                        y_pred += 61.0;
                                    }

                                    else {
                                        y_pred += 64.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 3563.0) {
                                        if (x[1] <= 1286.5) {
                                            y_pred += 76.0;
                                        }

                                        else {
                                            if (x[1] <= 1514.5) {
                                                y_pred += 69.0;
                                            }

                                            else {
                                                if (x[2] <= 1475.0) {
                                                    y_pred += 72.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 60.0;
                                    }
                                }
                            }
                        }

                        // tree #27
                        if (x[0] <= 2162.5) {
                            if (x[1] <= 708.0) {
                                if (x[1] <= 649.5) {
                                    y_pred += 112.0;
                                }

                                else {
                                    y_pred += 115.0;
                                }
                            }

                            else {
                                if (x[1] <= 1107.0) {
                                    if (x[0] <= 1907.0) {
                                        if (x[0] <= 1865.5) {
                                            y_pred += 73.0;
                                        }

                                        else {
                                            y_pred += 75.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2009.5) {
                                            if (x[0] <= 1980.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 694.0) {
                                                if (x[2] <= 606.0) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 68.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 919.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2115.0) {
                                        if (x[0] <= 1948.5) {
                                            if (x[2] <= 2861.0) {
                                                if (x[2] <= 2161.0) {
                                                    if (x[1] <= 1304.0) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 93.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 107.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 2969.5) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 76.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1891.0) {
                                                y_pred += 100.0;
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 1502.0) {
                                            if (x[2] <= 908.0) {
                                                y_pred += 83.0;
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1996.5) {
                                                y_pred += 82.0;
                                            }

                                            else {
                                                y_pred += 93.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 1006.5) {
                                if (x[0] <= 2320.0) {
                                    if (x[1] <= 809.0) {
                                        y_pred += 62.0;
                                    }

                                    else {
                                        if (x[2] <= 633.5) {
                                            y_pred += 66.0;
                                        }

                                        else {
                                            if (x[2] <= 714.5) {
                                                y_pred += 79.0;
                                            }

                                            else {
                                                y_pred += 78.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2380.0) {
                                        y_pred += 109.0;
                                    }

                                    else {
                                        if (x[0] <= 2613.0) {
                                            if (x[1] <= 922.0) {
                                                if (x[2] <= 662.5) {
                                                    if (x[2] <= 572.5) {
                                                        y_pred += 90.0;
                                                    }

                                                    else {
                                                        y_pred += 89.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 98.0;
                                                }
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }

                                        else {
                                            y_pred += 76.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 3238.0) {
                                    if (x[0] <= 2191.0) {
                                        y_pred += 60.0;
                                    }

                                    else {
                                        if (x[1] <= 2108.5) {
                                            if (x[2] <= 659.0) {
                                                if (x[1] <= 1515.0) {
                                                    y_pred += 109.0;
                                                }

                                                else {
                                                    y_pred += 86.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2217.0) {
                                                    y_pred += 88.0;
                                                }

                                                else {
                                                    if (x[1] <= 1608.5) {
                                                        if (x[1] <= 1503.5) {
                                                            if (x[2] <= 838.5) {
                                                                if (x[1] <= 1191.0) {
                                                                    if (x[1] <= 1064.0) {
                                                                        if (x[2] <= 698.5) {
                                                                            y_pred += 80.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 81.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 77.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2599.5) {
                                                                        y_pred += 89.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2667.5) {
                                                                            y_pred += 82.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 79.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1231.5) {
                                                                    if (x[1] <= 1111.0) {
                                                                        y_pred += 71.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2802.0) {
                                                                            y_pred += 74.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 76.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 1026.5) {
                                                                        if (x[1] <= 1271.5) {
                                                                            y_pred += 69.0;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 883.5) {
                                                                                y_pred += 71.0;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 925.0) {
                                                                                    y_pred += 70.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 69.0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 958.5) {
                                                                y_pred += 68.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2430.0) {
                                                                    y_pred += 68.0;
                                                                }

                                                                else {
                                                                    y_pred += 62.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2784.5) {
                                                            if (x[1] <= 1877.5) {
                                                                if (x[0] <= 2739.0) {
                                                                    y_pred += 77.0;
                                                                }

                                                                else {
                                                                    y_pred += 91.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1637.5) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1850.5) {
                                                                    if (x[1] <= 1757.0) {
                                                                        if (x[0] <= 3048.0) {
                                                                            y_pred += 75.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 72.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 67.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2994.0) {
                                                                        y_pred += 82.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 78.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 103.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 3563.0) {
                                        if (x[1] <= 1925.5) {
                                            if (x[1] <= 1348.0) {
                                                y_pred += 61.0;
                                            }

                                            else {
                                                y_pred += 64.0;
                                            }
                                        }

                                        else {
                                            y_pred += 71.0;
                                        }
                                    }

                                    else {
                                        y_pred += 60.0;
                                    }
                                }
                            }
                        }

                        // tree #28
                        if (x[2] <= 585.0) {
                            if (x[2] <= 521.0) {
                                y_pred += 115.0;
                            }

                            else {
                                if (x[0] <= 1975.0) {
                                    if (x[2] <= 550.5) {
                                        y_pred += 84.0;
                                    }

                                    else {
                                        if (x[2] <= 569.0) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            y_pred += 84.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 713.0) {
                                        y_pred += 112.0;
                                    }

                                    else {
                                        if (x[0] <= 2053.5) {
                                            y_pred += 100.0;
                                        }

                                        else {
                                            if (x[2] <= 564.0) {
                                                y_pred += 90.0;
                                            }

                                            else {
                                                y_pred += 84.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 1875.0) {
                                if (x[1] <= 949.5) {
                                    if (x[1] <= 787.0) {
                                        y_pred += 62.0;
                                    }

                                    else {
                                        if (x[1] <= 925.5) {
                                            if (x[0] <= 2327.0) {
                                                if (x[1] <= 917.0) {
                                                    if (x[0] <= 2126.0) {
                                                        if (x[1] <= 900.0) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2221.0) {
                                                            y_pred += 78.0;
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 66.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 678.5) {
                                                    if (x[0] <= 2522.5) {
                                                        y_pred += 89.0;
                                                    }

                                                    else {
                                                        y_pred += 76.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 98.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2243.0) {
                                                y_pred += 83.0;
                                            }

                                            else {
                                                y_pred += 109.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 632.0) {
                                        if (x[2] <= 613.0) {
                                            y_pred += 86.0;
                                        }

                                        else {
                                            if (x[0] <= 2181.5) {
                                                y_pred += 73.0;
                                            }

                                            else {
                                                y_pred += 109.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3238.0) {
                                            if (x[1] <= 1451.5) {
                                                if (x[2] <= 1255.0) {
                                                    if (x[2] <= 838.5) {
                                                        if (x[0] <= 2191.0) {
                                                            if (x[1] <= 996.5) {
                                                                y_pred += 68.0;
                                                            }

                                                            else {
                                                                y_pred += 60.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1085.0) {
                                                                if (x[1] <= 1064.0) {
                                                                    if (x[2] <= 677.5) {
                                                                        y_pred += 87.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1018.5) {
                                                                            y_pred += 78.0;
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 2247.5) {
                                                                                y_pred += 81.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 80.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 77.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 768.5) {
                                                                    y_pred += 88.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2599.5) {
                                                                        y_pred += 89.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1434.5) {
                                                                            y_pred += 82.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 79.0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1278.5) {
                                                            if (x[1] <= 1231.5) {
                                                                if (x[2] <= 875.5) {
                                                                    y_pred += 71.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1190.5) {
                                                                        if (x[0] <= 2536.5) {
                                                                            y_pred += 75.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 76.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 74.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1271.5) {
                                                                    y_pred += 69.0;
                                                                }

                                                                else {
                                                                    y_pred += 71.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1347.0) {
                                                                if (x[0] <= 2143.5) {
                                                                    y_pred += 79.0;
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 69.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 93.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1608.5) {
                                                    if (x[0] <= 2326.0) {
                                                        y_pred += 75.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1491.5) {
                                                            y_pred += 70.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1533.5) {
                                                                y_pred += 62.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1800.0) {
                                                        if (x[1] <= 1755.0) {
                                                            if (x[0] <= 3109.0) {
                                                                if (x[1] <= 1669.5) {
                                                                    y_pred += 83.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2828.0) {
                                                                        y_pred += 77.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 72.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 91.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2857.0) {
                                                            if (x[1] <= 1885.5) {
                                                                y_pred += 67.0;
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1367.0) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3563.0) {
                                                if (x[1] <= 1925.5) {
                                                    if (x[2] <= 792.5) {
                                                        y_pred += 64.0;
                                                    }

                                                    else {
                                                        y_pred += 61.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }

                                            else {
                                                y_pred += 60.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2302.5) {
                                    if (x[0] <= 1897.0) {
                                        if (x[1] <= 2178.5) {
                                            y_pred += 107.0;
                                        }

                                        else {
                                            y_pred += 84.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2444.0) {
                                            if (x[2] <= 2159.5) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                if (x[1] <= 2077.5) {
                                                    y_pred += 82.0;
                                                }

                                                else {
                                                    y_pred += 76.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 98.0;
                                        }
                                    }
                                }

                                else {
                                    y_pred += 103.0;
                                }
                            }
                        }

                        // tree #29
                        if (x[2] <= 585.0) {
                            if (x[2] <= 521.0) {
                                y_pred += 115.0;
                            }

                            else {
                                if (x[2] <= 547.0) {
                                    if (x[1] <= 681.5) {
                                        y_pred += 112.0;
                                    }

                                    else {
                                        y_pred += 84.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 1975.0) {
                                        if (x[0] <= 1929.5) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            y_pred += 84.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2053.5) {
                                            y_pred += 100.0;
                                        }

                                        else {
                                            if (x[2] <= 564.0) {
                                                y_pred += 90.0;
                                            }

                                            else {
                                                y_pred += 84.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 1875.0) {
                                if (x[2] <= 741.0) {
                                    if (x[0] <= 2320.0) {
                                        if (x[2] <= 655.5) {
                                            if (x[1] <= 1011.5) {
                                                if (x[1] <= 821.5) {
                                                    y_pred += 62.0;
                                                }

                                                else {
                                                    if (x[2] <= 612.0) {
                                                        y_pred += 66.0;
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 73.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2113.5) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[2] <= 686.5) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    if (x[0] <= 2247.5) {
                                                        y_pred += 81.0;
                                                    }

                                                    else {
                                                        y_pred += 80.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2613.0) {
                                            if (x[2] <= 608.5) {
                                                y_pred += 89.0;
                                            }

                                            else {
                                                if (x[2] <= 644.5) {
                                                    y_pred += 109.0;
                                                }

                                                else {
                                                    if (x[0] <= 2401.0) {
                                                        y_pred += 109.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2529.5) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 98.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1237.0) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                y_pred += 86.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1451.5) {
                                        if (x[2] <= 1255.0) {
                                            if (x[1] <= 954.5) {
                                                if (x[0] <= 2175.0) {
                                                    if (x[0] <= 2095.0) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 83.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 78.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 3238.0) {
                                                    if (x[0] <= 2685.5) {
                                                        if (x[0] <= 2501.0) {
                                                            if (x[0] <= 2429.5) {
                                                                if (x[2] <= 757.5) {
                                                                    if (x[2] <= 748.5) {
                                                                        y_pred += 78.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 60.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1096.5) {
                                                                        y_pred += 75.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 891.5) {
                                                                            if (x[0] <= 2175.0) {
                                                                                y_pred += 83.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 88.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1251.0) {
                                                                                y_pred += 74.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 79.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 874.0) {
                                                                    y_pred += 71.0;
                                                                }

                                                                else {
                                                                    y_pred += 69.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2599.5) {
                                                                y_pred += 89.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1434.5) {
                                                                    y_pred += 82.0;
                                                                }

                                                                else {
                                                                    y_pred += 79.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 3143.5) {
                                                            if (x[0] <= 3089.0) {
                                                                if (x[0] <= 2881.0) {
                                                                    y_pred += 71.0;
                                                                }

                                                                else {
                                                                    y_pred += 77.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 69.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 76.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 61.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 93.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1608.5) {
                                            if (x[1] <= 1503.5) {
                                                if (x[2] <= 1001.5) {
                                                    y_pred += 70.0;
                                                }

                                                else {
                                                    y_pred += 75.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2430.0) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    if (x[0] <= 2560.0) {
                                                        y_pred += 62.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 786.0) {
                                                            y_pred += 64.0;
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3563.0) {
                                                if (x[0] <= 3109.5) {
                                                    if (x[2] <= 1513.5) {
                                                        if (x[1] <= 1669.5) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1850.5) {
                                                                if (x[1] <= 1763.0) {
                                                                    if (x[2] <= 1022.0) {
                                                                        y_pred += 77.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 67.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2994.0) {
                                                                    y_pred += 82.0;
                                                                }

                                                                else {
                                                                    y_pred += 78.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1877.5) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            y_pred += 75.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1978.0) {
                                                        y_pred += 72.0;
                                                    }

                                                    else {
                                                        y_pred += 71.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 60.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1996.5) {
                                    y_pred += 82.0;
                                }

                                else {
                                    if (x[0] <= 2000.0) {
                                        if (x[1] <= 2163.5) {
                                            y_pred += 107.0;
                                        }

                                        else {
                                            if (x[0] <= 1765.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2160.0) {
                                            y_pred += 93.0;
                                        }

                                        else {
                                            if (x[0] <= 2267.5) {
                                                y_pred += 98.0;
                                            }

                                            else {
                                                y_pred += 103.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #30
                        if (x[0] <= 2162.5) {
                            if (x[1] <= 708.0) {
                                if (x[0] <= 2119.0) {
                                    y_pred += 112.0;
                                }

                                else {
                                    y_pred += 115.0;
                                }
                            }

                            else {
                                if (x[0] <= 1894.5) {
                                    if (x[1] <= 1130.5) {
                                        y_pred += 73.0;
                                    }

                                    else {
                                        if (x[2] <= 2861.0) {
                                            if (x[0] <= 1888.0) {
                                                if (x[1] <= 1750.5) {
                                                    y_pred += 93.0;
                                                }

                                                else {
                                                    y_pred += 107.0;
                                                }
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }

                                        else {
                                            y_pred += 84.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 2444.0) {
                                        if (x[0] <= 1915.5) {
                                            if (x[1] <= 1660.0) {
                                                y_pred += 75.0;
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 611.0) {
                                                if (x[0] <= 1975.0) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    if (x[0] <= 2053.5) {
                                                        y_pred += 100.0;
                                                    }

                                                    else {
                                                        y_pred += 84.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1996.5) {
                                                    if (x[1] <= 919.0) {
                                                        if (x[0] <= 2021.0) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1125.0) {
                                                            if (x[0] <= 2083.5) {
                                                                y_pred += 68.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 908.0) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 1606.5) {
                                                                    y_pred += 79.0;
                                                                }

                                                                else {
                                                                    y_pred += 82.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 93.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 1006.5) {
                                if (x[1] <= 764.0) {
                                    y_pred += 62.0;
                                }

                                else {
                                    if (x[1] <= 874.5) {
                                        if (x[2] <= 662.5) {
                                            if (x[2] <= 572.5) {
                                                y_pred += 90.0;
                                            }

                                            else {
                                                y_pred += 89.0;
                                            }
                                        }

                                        else {
                                            y_pred += 98.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 925.5) {
                                            if (x[0] <= 2186.5) {
                                                y_pred += 66.0;
                                            }

                                            else {
                                                if (x[2] <= 652.0) {
                                                    y_pred += 76.0;
                                                }

                                                else {
                                                    if (x[1] <= 904.5) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        y_pred += 78.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2284.5) {
                                                y_pred += 78.0;
                                            }

                                            else {
                                                if (x[2] <= 687.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 109.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1030.5) {
                                    y_pred += 60.0;
                                }

                                else {
                                    if (x[0] <= 3238.0) {
                                        if (x[0] <= 2554.0) {
                                            if (x[1] <= 1919.0) {
                                                if (x[1] <= 1503.5) {
                                                    if (x[2] <= 659.0) {
                                                        y_pred += 109.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2501.0) {
                                                            if (x[2] <= 816.5) {
                                                                if (x[1] <= 1080.0) {
                                                                    if (x[2] <= 698.5) {
                                                                        y_pred += 80.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 81.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 88.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1383.0) {
                                                                    if (x[0] <= 2429.5) {
                                                                        y_pred += 74.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2446.5) {
                                                                            y_pred += 71.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 69.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 75.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 89.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1550.0) {
                                                        y_pred += 62.0;
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 103.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 684.5) {
                                                y_pred += 86.0;
                                            }

                                            else {
                                                if (x[2] <= 1513.5) {
                                                    if (x[1] <= 1850.5) {
                                                        if (x[1] <= 1763.0) {
                                                            if (x[0] <= 3090.0) {
                                                                if (x[0] <= 3070.0) {
                                                                    if (x[2] <= 785.0) {
                                                                        if (x[1] <= 1252.5) {
                                                                            y_pred += 77.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 79.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2611.5) {
                                                                            y_pred += 70.0;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1234.5) {
                                                                                y_pred += 71.0;
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 1492.0) {
                                                                                    y_pred += 82.0;
                                                                                }

                                                                                else {
                                                                                    if (x[0] <= 2695.0) {
                                                                                        y_pred += 68.0;
                                                                                    }

                                                                                    else {
                                                                                        if (x[0] <= 2828.0) {
                                                                                            y_pred += 77.0;
                                                                                        }

                                                                                        else {
                                                                                            y_pred += 75.0;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 922.5) {
                                                                    y_pred += 76.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 3128.0) {
                                                                        y_pred += 69.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 72.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 67.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2994.0) {
                                                            y_pred += 82.0;
                                                        }

                                                        else {
                                                            y_pred += 78.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2703.0) {
                                                        y_pred += 75.0;
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3563.0) {
                                            if (x[0] <= 3381.0) {
                                                if (x[0] <= 3311.0) {
                                                    y_pred += 61.0;
                                                }

                                                else {
                                                    y_pred += 64.0;
                                                }
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }

                                        else {
                                            y_pred += 60.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #31
                        if (x[1] <= 700.5) {
                            if (x[2] <= 524.5) {
                                y_pred += 115.0;
                            }

                            else {
                                y_pred += 112.0;
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[1] <= 2014.5) {
                                    if (x[1] <= 732.5) {
                                        y_pred += 62.0;
                                    }

                                    else {
                                        if (x[1] <= 911.5) {
                                            if (x[1] <= 856.5) {
                                                if (x[0] <= 2582.0) {
                                                    if (x[1] <= 771.5) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 572.5) {
                                                            y_pred += 90.0;
                                                        }

                                                        else {
                                                            y_pred += 89.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 98.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 677.0) {
                                                    if (x[0] <= 1980.5) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2059.0) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            y_pred += 84.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2141.0) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 79.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 730.0) {
                                                if (x[0] <= 2303.0) {
                                                    if (x[2] <= 585.0) {
                                                        if (x[1] <= 1164.0) {
                                                            y_pred += 100.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1057.0) {
                                                            if (x[2] <= 606.0) {
                                                                y_pred += 66.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 632.0) {
                                                                    y_pred += 73.0;
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2247.5) {
                                                                y_pred += 81.0;
                                                            }

                                                            else {
                                                                y_pred += 80.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 624.5) {
                                                        if (x[2] <= 611.5) {
                                                            y_pred += 86.0;
                                                        }

                                                        else {
                                                            y_pred += 76.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2401.0) {
                                                            y_pred += 109.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1234.0) {
                                                                y_pred += 87.0;
                                                            }

                                                            else {
                                                                y_pred += 109.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1493.5) {
                                                    if (x[0] <= 2161.0) {
                                                        if (x[0] <= 2143.0) {
                                                            if (x[1] <= 1199.5) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1850.5) {
                                                            if (x[0] <= 2191.0) {
                                                                y_pred += 60.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2205.5) {
                                                                    y_pred += 88.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1451.5) {
                                                                        if (x[2] <= 838.5) {
                                                                            if (x[0] <= 2667.5) {
                                                                                if (x[1] <= 1145.5) {
                                                                                    y_pred += 78.0;
                                                                                }

                                                                                else {
                                                                                    if (x[2] <= 809.5) {
                                                                                        y_pred += 89.0;
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 82.0;
                                                                                    }
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 1252.5) {
                                                                                    y_pred += 77.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 79.0;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 976.0) {
                                                                                y_pred += 78.0;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 898.5) {
                                                                                    if (x[1] <= 1152.0) {
                                                                                        y_pred += 71.0;
                                                                                    }

                                                                                    else {
                                                                                        if (x[0] <= 2446.5) {
                                                                                            y_pred += 71.0;
                                                                                        }

                                                                                        else {
                                                                                            y_pred += 69.0;
                                                                                        }
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    y_pred += 74.0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 3010.0) {
                                                                            if (x[0] <= 2695.0) {
                                                                                if (x[0] <= 2326.0) {
                                                                                    y_pred += 75.0;
                                                                                }

                                                                                else {
                                                                                    if (x[2] <= 1009.0) {
                                                                                        if (x[1] <= 1509.0) {
                                                                                            y_pred += 70.0;
                                                                                        }

                                                                                        else {
                                                                                            y_pred += 68.0;
                                                                                        }
                                                                                    }

                                                                                    else {
                                                                                        if (x[1] <= 1550.0) {
                                                                                            y_pred += 62.0;
                                                                                        }

                                                                                        else {
                                                                                            y_pred += 68.0;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 1234.5) {
                                                                                    if (x[2] <= 1022.0) {
                                                                                        y_pred += 77.0;
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 75.0;
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    y_pred += 67.0;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 83.0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1367.0) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 1824.5) {
                                                        y_pred += 93.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1859.5) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1945.0) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2000.0) {
                                        if (x[2] <= 2861.0) {
                                            y_pred += 107.0;
                                        }

                                        else {
                                            if (x[1] <= 2243.0) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                y_pred += 84.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2160.0) {
                                            y_pred += 93.0;
                                        }

                                        else {
                                            if (x[2] <= 2691.0) {
                                                y_pred += 103.0;
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 853.5) {
                                    if (x[0] <= 3311.0) {
                                        y_pred += 61.0;
                                    }

                                    else {
                                        y_pred += 64.0;
                                    }
                                }

                                else {
                                    if (x[1] <= 1687.0) {
                                        if (x[0] <= 3162.5) {
                                            if (x[1] <= 1514.5) {
                                                y_pred += 69.0;
                                            }

                                            else {
                                                y_pred += 72.0;
                                            }
                                        }

                                        else {
                                            y_pred += 76.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 1438.5) {
                                            y_pred += 60.0;
                                        }

                                        else {
                                            y_pred += 71.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #32
                        if (x[2] <= 585.0) {
                            if (x[1] <= 708.0) {
                                if (x[1] <= 649.5) {
                                    y_pred += 112.0;
                                }

                                else {
                                    y_pred += 115.0;
                                }
                            }

                            else {
                                if (x[0] <= 1975.0) {
                                    if (x[0] <= 1906.5) {
                                        y_pred += 87.0;
                                    }

                                    else {
                                        y_pred += 84.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 579.0) {
                                        if (x[0] <= 2343.5) {
                                            y_pred += 84.0;
                                        }

                                        else {
                                            y_pred += 90.0;
                                        }
                                    }

                                    else {
                                        y_pred += 100.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2014.5) {
                                if (x[2] <= 741.0) {
                                    if (x[2] <= 708.5) {
                                        if (x[1] <= 1269.5) {
                                            if (x[1] <= 787.0) {
                                                y_pred += 62.0;
                                            }

                                            else {
                                                if (x[2] <= 650.5) {
                                                    if (x[0] <= 2292.5) {
                                                        if (x[0] <= 1929.5) {
                                                            y_pred += 73.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2095.0) {
                                                                y_pred += 68.0;
                                                            }

                                                            else {
                                                                y_pred += 66.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 886.5) {
                                                            y_pred += 89.0;
                                                        }

                                                        else {
                                                            y_pred += 76.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2113.5) {
                                                        y_pred += 91.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2362.0) {
                                                            if (x[2] <= 686.5) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2247.5) {
                                                                    y_pred += 81.0;
                                                                }

                                                                else {
                                                                    y_pred += 80.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 613.0) {
                                                y_pred += 86.0;
                                            }

                                            else {
                                                y_pred += 109.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 723.0) {
                                            y_pred += 109.0;
                                        }

                                        else {
                                            y_pred += 98.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 954.5) {
                                        if (x[0] <= 2175.0) {
                                            if (x[2] <= 815.5) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 83.0;
                                            }
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1762.0) {
                                            if (x[2] <= 1479.5) {
                                                if (x[1] <= 1725.0) {
                                                    if (x[2] <= 798.5) {
                                                        if (x[0] <= 2191.0) {
                                                            y_pred += 60.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 785.5) {
                                                                if (x[0] <= 3196.5) {
                                                                    if (x[1] <= 1085.0) {
                                                                        if (x[0] <= 2648.0) {
                                                                            y_pred += 78.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 77.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 768.5) {
                                                                            y_pred += 88.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 79.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 64.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 89.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1608.5) {
                                                            if (x[0] <= 2326.0) {
                                                                if (x[2] <= 886.5) {
                                                                    y_pred += 83.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2018.5) {
                                                                        y_pred += 75.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1399.0) {
                                                                            y_pred += 79.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 75.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 3238.0) {
                                                                    if (x[1] <= 1491.5) {
                                                                        if (x[2] <= 838.5) {
                                                                            y_pred += 82.0;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 933.0) {
                                                                                if (x[1] <= 1231.5) {
                                                                                    if (x[1] <= 1111.0) {
                                                                                        y_pred += 71.0;
                                                                                    }

                                                                                    else {
                                                                                        if (x[0] <= 2802.0) {
                                                                                            y_pred += 74.0;
                                                                                        }

                                                                                        else {
                                                                                            y_pred += 76.0;
                                                                                        }
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    if (x[0] <= 2446.5) {
                                                                                        y_pred += 71.0;
                                                                                    }

                                                                                    else {
                                                                                        if (x[2] <= 890.5) {
                                                                                            y_pred += 69.0;
                                                                                        }

                                                                                        else {
                                                                                            y_pred += 70.0;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 69.0;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2430.0) {
                                                                            y_pred += 68.0;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1533.5) {
                                                                                y_pred += 62.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 68.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 61.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1637.5) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 3048.0) {
                                                                    if (x[2] <= 1022.0) {
                                                                        y_pred += 77.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 72.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 60.0;
                                                }
                                            }

                                            else {
                                                y_pred += 93.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1800.0) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[0] <= 2857.0) {
                                                    if (x[1] <= 1867.5) {
                                                        y_pred += 67.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2388.5) {
                                                            y_pred += 82.0;
                                                        }

                                                        else {
                                                            y_pred += 75.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1901.0) {
                                                        y_pred += 78.0;
                                                    }

                                                    else {
                                                        y_pred += 82.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 1864.0) {
                                    y_pred += 71.0;
                                }

                                else {
                                    if (x[2] <= 2861.0) {
                                        if (x[0] <= 2020.0) {
                                            y_pred += 107.0;
                                        }

                                        else {
                                            if (x[2] <= 2194.0) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 103.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 3014.0) {
                                            if (x[0] <= 1765.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            y_pred += 98.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #33
                        if (x[1] <= 700.5) {
                            if (x[0] <= 2119.0) {
                                y_pred += 112.0;
                            }

                            else {
                                y_pred += 115.0;
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[1] <= 2014.5) {
                                    if (x[0] <= 2009.5) {
                                        if (x[1] <= 1107.0) {
                                            if (x[2] <= 789.5) {
                                                if (x[0] <= 1877.5) {
                                                    y_pred += 73.0;
                                                }

                                                else {
                                                    if (x[0] <= 1980.5) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 75.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1939.5) {
                                                if (x[0] <= 1700.5) {
                                                    y_pred += 93.0;
                                                }

                                                else {
                                                    y_pred += 87.0;
                                                }
                                            }

                                            else {
                                                y_pred += 100.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 741.0) {
                                            if (x[1] <= 764.0) {
                                                y_pred += 62.0;
                                            }

                                            else {
                                                if (x[1] <= 1269.5) {
                                                    if (x[2] <= 708.5) {
                                                        if (x[0] <= 2199.0) {
                                                            if (x[2] <= 580.0) {
                                                                y_pred += 84.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2095.0) {
                                                                    y_pred += 68.0;
                                                                }

                                                                else {
                                                                    y_pred += 66.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 871.0) {
                                                                if (x[1] <= 826.0) {
                                                                    y_pred += 90.0;
                                                                }

                                                                else {
                                                                    y_pred += 89.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2543.5) {
                                                                    if (x[2] <= 672.0) {
                                                                        y_pred += 87.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2233.5) {
                                                                            y_pred += 81.0;
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 2250.0) {
                                                                                y_pred += 79.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 80.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 76.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2470.5) {
                                                            y_pred += 109.0;
                                                        }

                                                        else {
                                                            y_pred += 98.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1515.0) {
                                                        y_pred += 109.0;
                                                    }

                                                    else {
                                                        y_pred += 86.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2161.0) {
                                                if (x[0] <= 2094.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    if (x[1] <= 1294.5) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 1606.5) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            y_pred += 82.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2191.0) {
                                                    y_pred += 60.0;
                                                }

                                                else {
                                                    if (x[2] <= 798.5) {
                                                        if (x[2] <= 784.5) {
                                                            if (x[1] <= 1085.0) {
                                                                if (x[2] <= 758.5) {
                                                                    y_pred += 78.0;
                                                                }

                                                                else {
                                                                    y_pred += 77.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 768.5) {
                                                                    y_pred += 88.0;
                                                                }

                                                                else {
                                                                    y_pred += 79.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 89.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1608.5) {
                                                            if (x[2] <= 1110.5) {
                                                                if (x[2] <= 810.0) {
                                                                    y_pred += 68.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 976.0) {
                                                                        y_pred += 78.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 838.5) {
                                                                            y_pred += 82.0;
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 2429.5) {
                                                                                if (x[2] <= 1009.5) {
                                                                                    y_pred += 74.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 75.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 1152.0) {
                                                                                    y_pred += 71.0;
                                                                                }

                                                                                else {
                                                                                    if (x[2] <= 874.0) {
                                                                                        y_pred += 71.0;
                                                                                    }

                                                                                    else {
                                                                                        if (x[0] <= 2513.0) {
                                                                                            y_pred += 69.0;
                                                                                        }

                                                                                        else {
                                                                                            y_pred += 70.0;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1258.5) {
                                                                    y_pred += 62.0;
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1513.5) {
                                                                if (x[1] <= 1669.5) {
                                                                    y_pred += 83.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2857.0) {
                                                                        if (x[0] <= 2752.5) {
                                                                            y_pred += 77.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 67.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1221.0) {
                                                                            y_pred += 75.0;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1901.0) {
                                                                                y_pred += 78.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 82.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1647.5) {
                                                                    y_pred += 91.0;
                                                                }

                                                                else {
                                                                    y_pred += 75.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 2861.0) {
                                        if (x[2] <= 2194.0) {
                                            y_pred += 93.0;
                                        }

                                        else {
                                            if (x[1] <= 2176.5) {
                                                y_pred += 107.0;
                                            }

                                            else {
                                                y_pred += 103.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2000.0) {
                                            if (x[0] <= 1765.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            y_pred += 98.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1172.5) {
                                    y_pred += 61.0;
                                }

                                else {
                                    if (x[2] <= 834.0) {
                                        y_pred += 64.0;
                                    }

                                    else {
                                        if (x[1] <= 1687.0) {
                                            if (x[0] <= 3162.5) {
                                                if (x[2] <= 1113.5) {
                                                    y_pred += 69.0;
                                                }

                                                else {
                                                    y_pred += 72.0;
                                                }
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1438.5) {
                                                y_pred += 60.0;
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #34
                        if (x[0] <= 2162.5) {
                            if (x[2] <= 554.0) {
                                if (x[1] <= 708.0) {
                                    if (x[1] <= 649.5) {
                                        y_pred += 112.0;
                                    }

                                    else {
                                        y_pred += 115.0;
                                    }
                                }

                                else {
                                    y_pred += 84.0;
                                }
                            }

                            else {
                                if (x[1] <= 1107.0) {
                                    if (x[0] <= 1930.0) {
                                        if (x[2] <= 766.0) {
                                            y_pred += 73.0;
                                        }

                                        else {
                                            y_pred += 75.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 655.5) {
                                            if (x[1] <= 930.0) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 68.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2021.0) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[0] <= 2095.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 3014.0) {
                                        if (x[1] <= 2163.5) {
                                            if (x[1] <= 2082.5) {
                                                if (x[2] <= 725.5) {
                                                    if (x[0] <= 1939.5) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 100.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1354.5) {
                                                        if (x[0] <= 2143.5) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1664.5) {
                                                            y_pred += 93.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2150.0) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 93.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 107.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 2243.0) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                y_pred += 84.0;
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 98.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[1] <= 2108.5) {
                                    if (x[1] <= 764.0) {
                                        y_pred += 62.0;
                                    }

                                    else {
                                        if (x[1] <= 874.5) {
                                            if (x[0] <= 2582.0) {
                                                if (x[2] <= 572.5) {
                                                    y_pred += 90.0;
                                                }

                                                else {
                                                    y_pred += 89.0;
                                                }
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2191.0) {
                                                if (x[1] <= 971.5) {
                                                    y_pred += 66.0;
                                                }

                                                else {
                                                    y_pred += 60.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2382.5) {
                                                    if (x[2] <= 811.0) {
                                                        if (x[0] <= 2303.0) {
                                                            if (x[1] <= 1080.0) {
                                                                if (x[1] <= 1018.5) {
                                                                    if (x[1] <= 935.5) {
                                                                        y_pred += 79.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 78.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2247.5) {
                                                                        y_pred += 81.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 80.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 88.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 109.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1203.5) {
                                                            y_pred += 78.0;
                                                        }

                                                        else {
                                                            y_pred += 75.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1294.0) {
                                                        if (x[1] <= 1012.0) {
                                                            if (x[1] <= 956.0) {
                                                                y_pred += 76.0;
                                                            }

                                                            else {
                                                                y_pred += 87.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 812.5) {
                                                                y_pred += 77.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 898.5) {
                                                                    if (x[0] <= 2446.5) {
                                                                        y_pred += 71.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 868.5) {
                                                                            y_pred += 71.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 69.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 74.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1498.0) {
                                                            if (x[0] <= 2534.5) {
                                                                y_pred += 109.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 860.5) {
                                                                    if (x[1] <= 1373.0) {
                                                                        y_pred += 89.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2667.5) {
                                                                            y_pred += 82.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 79.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 70.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2695.0) {
                                                                if (x[1] <= 1773.5) {
                                                                    if (x[0] <= 2430.0) {
                                                                        y_pred += 68.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1533.5) {
                                                                            y_pred += 62.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 68.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 75.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2784.5) {
                                                                    if (x[0] <= 2718.0) {
                                                                        y_pred += 77.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1100.0) {
                                                                            y_pred += 86.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 91.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2857.0) {
                                                                        y_pred += 67.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2932.5) {
                                                                            y_pred += 82.0;
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 3010.0) {
                                                                                y_pred += 75.0;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 1286.5) {
                                                                                    y_pred += 83.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 78.0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    y_pred += 103.0;
                                }
                            }

                            else {
                                if (x[1] <= 1172.5) {
                                    y_pred += 61.0;
                                }

                                else {
                                    if (x[1] <= 1286.5) {
                                        y_pred += 76.0;
                                    }

                                    else {
                                        if (x[0] <= 3563.0) {
                                            if (x[2] <= 861.5) {
                                                y_pred += 64.0;
                                            }

                                            else {
                                                if (x[1] <= 1514.5) {
                                                    y_pred += 69.0;
                                                }

                                                else {
                                                    if (x[1] <= 1978.0) {
                                                        y_pred += 72.0;
                                                    }

                                                    else {
                                                        y_pred += 71.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 60.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #35
                        if (x[1] <= 700.5) {
                            if (x[0] <= 2119.0) {
                                y_pred += 112.0;
                            }

                            else {
                                y_pred += 115.0;
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[2] <= 1493.5) {
                                    if (x[1] <= 1485.5) {
                                        if (x[1] <= 1473.5) {
                                            if (x[1] <= 732.5) {
                                                y_pred += 62.0;
                                            }

                                            else {
                                                if (x[0] <= 2009.5) {
                                                    if (x[0] <= 1975.0) {
                                                        if (x[1] <= 1149.0) {
                                                            if (x[2] <= 598.0) {
                                                                y_pred += 84.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 1865.5) {
                                                                    y_pred += 73.0;
                                                                }

                                                                else {
                                                                    y_pred += 75.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 1990.5) {
                                                            y_pred += 100.0;
                                                        }

                                                        else {
                                                            y_pred += 91.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 838.5) {
                                                        if (x[1] <= 856.5) {
                                                            if (x[1] <= 852.5) {
                                                                if (x[0] <= 2491.5) {
                                                                    y_pred += 89.0;
                                                                }

                                                                else {
                                                                    y_pred += 90.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 98.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 650.5) {
                                                                if (x[0] <= 2072.5) {
                                                                    y_pred += 68.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 887.5) {
                                                                        y_pred += 84.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 604.5) {
                                                                            y_pred += 66.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 76.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 730.0) {
                                                                    if (x[2] <= 708.5) {
                                                                        if (x[0] <= 2362.0) {
                                                                            if (x[0] <= 2233.5) {
                                                                                y_pred += 81.0;
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 2250.0) {
                                                                                    y_pred += 79.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 80.0;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 87.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 109.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 749.5) {
                                                                        if (x[1] <= 1001.5) {
                                                                            y_pred += 78.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 60.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 767.5) {
                                                                            if (x[2] <= 758.0) {
                                                                                y_pred += 87.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 88.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1191.0) {
                                                                                y_pred += 77.0;
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 2599.5) {
                                                                                    y_pred += 89.0;
                                                                                }

                                                                                else {
                                                                                    if (x[1] <= 1434.5) {
                                                                                        y_pred += 82.0;
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 79.0;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 932.5) {
                                                            if (x[2] <= 890.5) {
                                                                if (x[2] <= 861.5) {
                                                                    if (x[0] <= 2449.5) {
                                                                        y_pred += 78.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 71.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1099.5) {
                                                                        y_pred += 83.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 874.0) {
                                                                            if (x[1] <= 1278.5) {
                                                                                y_pred += 71.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 83.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 69.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1331.0) {
                                                                    y_pred += 74.0;
                                                                }

                                                                else {
                                                                    y_pred += 70.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 109.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 699.5) {
                                            y_pred += 86.0;
                                        }

                                        else {
                                            if (x[1] <= 1608.5) {
                                                if (x[1] <= 1503.5) {
                                                    y_pred += 75.0;
                                                }

                                                else {
                                                    if (x[0] <= 2430.0) {
                                                        y_pred += 68.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2560.0) {
                                                            y_pred += 62.0;
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1320.5) {
                                                    if (x[0] <= 3010.0) {
                                                        if (x[2] <= 1221.0) {
                                                            if (x[1] <= 1712.0) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                y_pred += 77.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 82.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 83.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1380.5) {
                                                        y_pred += 67.0;
                                                    }

                                                    else {
                                                        y_pred += 78.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2541.0) {
                                        if (x[1] <= 1996.5) {
                                            if (x[1] <= 1664.5) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 82.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 2861.0) {
                                                if (x[1] <= 2082.5) {
                                                    y_pred += 93.0;
                                                }

                                                else {
                                                    if (x[1] <= 2176.5) {
                                                        y_pred += 107.0;
                                                    }

                                                    else {
                                                        y_pred += 103.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 2459.0) {
                                                    if (x[2] <= 2969.5) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        y_pred += 76.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 98.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2703.0) {
                                            y_pred += 75.0;
                                        }

                                        else {
                                            y_pred += 91.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1172.5) {
                                    y_pred += 61.0;
                                }

                                else {
                                    if (x[1] <= 1286.5) {
                                        y_pred += 76.0;
                                    }

                                    else {
                                        if (x[2] <= 1240.5) {
                                            if (x[0] <= 3216.5) {
                                                y_pred += 69.0;
                                            }

                                            else {
                                                if (x[1] <= 1634.5) {
                                                    y_pred += 64.0;
                                                }

                                                else {
                                                    y_pred += 60.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1978.0) {
                                                y_pred += 72.0;
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #36
                        if (x[2] <= 585.0) {
                            if (x[0] <= 1975.0) {
                                if (x[1] <= 1049.0) {
                                    y_pred += 84.0;
                                }

                                else {
                                    y_pred += 87.0;
                                }
                            }

                            else {
                                if (x[2] <= 547.0) {
                                    if (x[2] <= 524.5) {
                                        y_pred += 115.0;
                                    }

                                    else {
                                        y_pred += 112.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 579.0) {
                                        if (x[0] <= 2343.5) {
                                            y_pred += 84.0;
                                        }

                                        else {
                                            y_pred += 90.0;
                                        }
                                    }

                                    else {
                                        y_pred += 100.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[1] <= 2014.5) {
                                    if (x[1] <= 787.0) {
                                        y_pred += 62.0;
                                    }

                                    else {
                                        if (x[1] <= 911.5) {
                                            if (x[1] <= 874.5) {
                                                if (x[2] <= 662.5) {
                                                    y_pred += 89.0;
                                                }

                                                else {
                                                    y_pred += 98.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2141.0) {
                                                    if (x[1] <= 900.0) {
                                                        y_pred += 91.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1485.5) {
                                                if (x[0] <= 2191.0) {
                                                    if (x[2] <= 808.0) {
                                                        if (x[0] <= 2172.0) {
                                                            if (x[2] <= 606.0) {
                                                                y_pred += 66.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 632.0) {
                                                                    y_pred += 73.0;
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 60.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1254.5) {
                                                            if (x[0] <= 2143.0) {
                                                                if (x[0] <= 2018.5) {
                                                                    y_pred += 75.0;
                                                                }

                                                                else {
                                                                    y_pred += 79.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 93.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1473.5) {
                                                        if (x[1] <= 1012.0) {
                                                            if (x[2] <= 730.0) {
                                                                if (x[2] <= 687.5) {
                                                                    if (x[2] <= 643.0) {
                                                                        y_pred += 76.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 87.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 109.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 838.5) {
                                                                if (x[2] <= 784.5) {
                                                                    if (x[2] <= 767.5) {
                                                                        if (x[2] <= 735.5) {
                                                                            if (x[2] <= 698.5) {
                                                                                y_pred += 80.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 81.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 88.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1252.5) {
                                                                            y_pred += 77.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 79.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1373.0) {
                                                                        y_pred += 89.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 82.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1231.5) {
                                                                    if (x[0] <= 2559.5) {
                                                                        y_pred += 74.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 71.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2446.5) {
                                                                        y_pred += 71.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2513.0) {
                                                                            y_pred += 69.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 70.0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 109.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1513.5) {
                                                    if (x[2] <= 699.5) {
                                                        y_pred += 86.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2857.0) {
                                                            if (x[2] <= 1110.5) {
                                                                if (x[2] <= 854.0) {
                                                                    y_pred += 68.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 1006.0) {
                                                                        y_pred += 77.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1550.0) {
                                                                    y_pred += 62.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 1366.5) {
                                                                        y_pred += 67.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 68.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1140.5) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1763.0) {
                                                                    y_pred += 83.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2994.0) {
                                                                        y_pred += 82.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 78.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1647.5) {
                                                        y_pred += 91.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 1979.5) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            y_pred += 82.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 2163.5) {
                                        if (x[1] <= 2082.5) {
                                            y_pred += 93.0;
                                        }

                                        else {
                                            y_pred += 107.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 2646.5) {
                                            y_pred += 103.0;
                                        }

                                        else {
                                            if (x[0] <= 2000.0) {
                                                if (x[1] <= 2243.0) {
                                                    y_pred += 76.0;
                                                }

                                                else {
                                                    y_pred += 84.0;
                                                }
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 853.5) {
                                    if (x[2] <= 792.5) {
                                        y_pred += 64.0;
                                    }

                                    else {
                                        y_pred += 61.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 922.5) {
                                        y_pred += 76.0;
                                    }

                                    else {
                                        if (x[2] <= 1240.5) {
                                            if (x[2] <= 1077.0) {
                                                y_pred += 69.0;
                                            }

                                            else {
                                                y_pred += 60.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3292.5) {
                                                y_pred += 72.0;
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #37
                        if (x[0] <= 2162.5) {
                            if (x[2] <= 554.0) {
                                if (x[1] <= 708.0) {
                                    if (x[2] <= 524.5) {
                                        y_pred += 115.0;
                                    }

                                    else {
                                        y_pred += 112.0;
                                    }
                                }

                                else {
                                    y_pred += 84.0;
                                }
                            }

                            else {
                                if (x[2] <= 1254.5) {
                                    if (x[2] <= 605.0) {
                                        if (x[1] <= 1007.0) {
                                            y_pred += 84.0;
                                        }

                                        else {
                                            if (x[2] <= 576.0) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 100.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 949.5) {
                                            if (x[0] <= 2021.0) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[2] <= 815.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1187.0) {
                                                if (x[2] <= 772.0) {
                                                    if (x[1] <= 1011.5) {
                                                        y_pred += 68.0;
                                                    }

                                                    else {
                                                        y_pred += 73.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 75.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 908.0) {
                                                    y_pred += 83.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 2861.0) {
                                        if (x[0] <= 2012.0) {
                                            if (x[2] <= 2161.0) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 107.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 2159.5) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                y_pred += 82.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2459.0) {
                                            if (x[0] <= 1765.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            y_pred += 98.0;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 3090.5) {
                                if (x[1] <= 2108.5) {
                                    if (x[2] <= 741.0) {
                                        if (x[1] <= 764.0) {
                                            y_pred += 62.0;
                                        }

                                        else {
                                            if (x[1] <= 925.5) {
                                                if (x[0] <= 2201.5) {
                                                    y_pred += 66.0;
                                                }

                                                else {
                                                    if (x[0] <= 2613.0) {
                                                        if (x[0] <= 2327.0) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 662.5) {
                                                                if (x[2] <= 572.5) {
                                                                    y_pred += 90.0;
                                                                }

                                                                else {
                                                                    y_pred += 89.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 98.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 76.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 708.5) {
                                                    if (x[0] <= 2493.5) {
                                                        if (x[0] <= 2362.0) {
                                                            if (x[2] <= 698.5) {
                                                                y_pred += 80.0;
                                                            }

                                                            else {
                                                                y_pred += 81.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2628.0) {
                                                            y_pred += 109.0;
                                                        }

                                                        else {
                                                            y_pred += 86.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 109.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1608.5) {
                                            if (x[2] <= 861.5) {
                                                if (x[2] <= 757.5) {
                                                    if (x[0] <= 2202.0) {
                                                        y_pred += 60.0;
                                                    }

                                                    else {
                                                        y_pred += 78.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2680.5) {
                                                        if (x[2] <= 809.5) {
                                                            if (x[0] <= 2610.0) {
                                                                if (x[1] <= 1207.0) {
                                                                    y_pred += 88.0;
                                                                }

                                                                else {
                                                                    y_pred += 89.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1174.5) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1310.0) {
                                                            if (x[2] <= 812.5) {
                                                                y_pred += 77.0;
                                                            }

                                                            else {
                                                                y_pred += 71.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1503.5) {
                                                    if (x[2] <= 908.0) {
                                                        if (x[0] <= 2446.5) {
                                                            y_pred += 71.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1367.5) {
                                                                y_pred += 69.0;
                                                            }

                                                            else {
                                                                y_pred += 70.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1009.5) {
                                                            y_pred += 74.0;
                                                        }

                                                        else {
                                                            y_pred += 75.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1258.5) {
                                                        y_pred += 62.0;
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1513.5) {
                                                if (x[0] <= 2857.0) {
                                                    if (x[2] <= 1121.5) {
                                                        y_pred += 77.0;
                                                    }

                                                    else {
                                                        y_pred += 67.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2932.5) {
                                                        y_pred += 82.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 3010.0) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1763.0) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1877.5) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 75.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    y_pred += 103.0;
                                }
                            }

                            else {
                                if (x[2] <= 853.5) {
                                    if (x[2] <= 792.5) {
                                        y_pred += 64.0;
                                    }

                                    else {
                                        y_pred += 61.0;
                                    }
                                }

                                else {
                                    if (x[1] <= 1687.0) {
                                        if (x[2] <= 922.5) {
                                            y_pred += 76.0;
                                        }

                                        else {
                                            if (x[2] <= 1113.5) {
                                                y_pred += 69.0;
                                            }

                                            else {
                                                y_pred += 72.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2023.0) {
                                            y_pred += 60.0;
                                        }

                                        else {
                                            y_pred += 71.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #38
                        if (x[1] <= 700.5) {
                            if (x[0] <= 2119.0) {
                                y_pred += 112.0;
                            }

                            else {
                                y_pred += 115.0;
                            }
                        }

                        else {
                            if (x[2] <= 1875.0) {
                                if (x[0] <= 3090.5) {
                                    if (x[2] <= 741.0) {
                                        if (x[2] <= 708.5) {
                                            if (x[0] <= 2358.0) {
                                                if (x[2] <= 585.0) {
                                                    if (x[0] <= 1975.0) {
                                                        if (x[1] <= 1049.0) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2053.5) {
                                                            y_pred += 100.0;
                                                        }

                                                        else {
                                                            y_pred += 84.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 655.5) {
                                                        if (x[1] <= 1011.5) {
                                                            if (x[1] <= 821.5) {
                                                                y_pred += 62.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2095.0) {
                                                                    y_pred += 68.0;
                                                                }

                                                                else {
                                                                    y_pred += 66.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 73.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 976.0) {
                                                            if (x[2] <= 677.0) {
                                                                y_pred += 91.0;
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 698.5) {
                                                                y_pred += 80.0;
                                                            }

                                                            else {
                                                                y_pred += 81.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1234.0) {
                                                    if (x[2] <= 607.0) {
                                                        if (x[1] <= 826.0) {
                                                            y_pred += 90.0;
                                                        }

                                                        else {
                                                            y_pred += 89.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 643.0) {
                                                            y_pred += 76.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1515.0) {
                                                        y_pred += 109.0;
                                                    }

                                                    else {
                                                        y_pred += 86.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2470.5) {
                                                y_pred += 109.0;
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1451.5) {
                                            if (x[0] <= 1701.0) {
                                                y_pred += 93.0;
                                            }

                                            else {
                                                if (x[0] <= 2161.0) {
                                                    if (x[1] <= 1011.5) {
                                                        if (x[2] <= 815.5) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1187.0) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1294.5) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1294.0) {
                                                        if (x[0] <= 2191.0) {
                                                            y_pred += 60.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2205.5) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1007.0) {
                                                                    y_pred += 78.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1231.5) {
                                                                        if (x[0] <= 2881.0) {
                                                                            if (x[1] <= 1115.5) {
                                                                                y_pred += 71.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 74.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 77.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2446.5) {
                                                                            y_pred += 71.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 69.0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1373.0) {
                                                            y_pred += 89.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 796.0) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2695.0) {
                                                if (x[1] <= 1773.5) {
                                                    if (x[0] <= 2326.0) {
                                                        y_pred += 75.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 1009.0) {
                                                            if (x[2] <= 849.5) {
                                                                y_pred += 68.0;
                                                            }

                                                            else {
                                                                y_pred += 70.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1550.0) {
                                                                y_pred += 62.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 75.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1800.0) {
                                                    if (x[1] <= 1755.0) {
                                                        if (x[1] <= 1669.5) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1712.0) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                y_pred += 77.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1320.5) {
                                                        y_pred += 82.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 1380.5) {
                                                            y_pred += 67.0;
                                                        }

                                                        else {
                                                            y_pred += 78.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1172.5) {
                                        y_pred += 61.0;
                                    }

                                    else {
                                        if (x[1] <= 1286.5) {
                                            y_pred += 76.0;
                                        }

                                        else {
                                            if (x[2] <= 1240.5) {
                                                if (x[1] <= 1462.0) {
                                                    y_pred += 69.0;
                                                }

                                                else {
                                                    if (x[2] <= 988.5) {
                                                        y_pred += 64.0;
                                                    }

                                                    else {
                                                        y_pred += 60.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1978.0) {
                                                    y_pred += 72.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2302.5) {
                                    if (x[2] <= 2861.0) {
                                        if (x[2] <= 2513.0) {
                                            if (x[0] <= 2150.0) {
                                                y_pred += 82.0;
                                            }

                                            else {
                                                y_pred += 93.0;
                                            }
                                        }

                                        else {
                                            y_pred += 107.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2000.0) {
                                            if (x[1] <= 2243.0) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                y_pred += 84.0;
                                            }
                                        }

                                        else {
                                            y_pred += 98.0;
                                        }
                                    }
                                }

                                else {
                                    y_pred += 103.0;
                                }
                            }
                        }

                        // tree #39
                        if (x[1] <= 700.5) {
                            if (x[1] <= 649.5) {
                                y_pred += 112.0;
                            }

                            else {
                                y_pred += 115.0;
                            }
                        }

                        else {
                            if (x[1] <= 2014.5) {
                                if (x[1] <= 949.5) {
                                    if (x[0] <= 2320.0) {
                                        if (x[1] <= 732.5) {
                                            y_pred += 62.0;
                                        }

                                        else {
                                            if (x[2] <= 629.5) {
                                                if (x[1] <= 905.0) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 66.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2095.0) {
                                                    if (x[0] <= 2021.0) {
                                                        y_pred += 91.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 923.5) {
                                                        if (x[2] <= 768.5) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            y_pred += 78.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 83.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 667.5) {
                                            if (x[2] <= 607.0) {
                                                if (x[0] <= 2491.5) {
                                                    y_pred += 89.0;
                                                }

                                                else {
                                                    y_pred += 90.0;
                                                }
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2470.5) {
                                                y_pred += 109.0;
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1485.5) {
                                        if (x[1] <= 1473.5) {
                                            if (x[1] <= 1057.0) {
                                                if (x[2] <= 748.5) {
                                                    if (x[0] <= 2343.5) {
                                                        if (x[0] <= 2125.0) {
                                                            if (x[2] <= 632.0) {
                                                                y_pred += 73.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 78.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2435.0) {
                                                        y_pred += 60.0;
                                                    }

                                                    else {
                                                        y_pred += 71.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1140.5) {
                                                    if (x[1] <= 1096.5) {
                                                        if (x[2] <= 737.0) {
                                                            if (x[2] <= 698.5) {
                                                                y_pred += 80.0;
                                                            }

                                                            else {
                                                                y_pred += 81.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 837.5) {
                                                                y_pred += 77.0;
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 675.0) {
                                                            y_pred += 100.0;
                                                        }

                                                        else {
                                                            y_pred += 88.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1172.5) {
                                                        y_pred += 61.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1278.5) {
                                                            if (x[0] <= 2160.0) {
                                                                y_pred += 87.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 888.0) {
                                                                    if (x[0] <= 2446.5) {
                                                                        y_pred += 71.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 69.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1190.5) {
                                                                        y_pred += 76.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 74.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2554.0) {
                                                                if (x[1] <= 1310.0) {
                                                                    if (x[2] <= 908.0) {
                                                                        y_pred += 83.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 79.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1357.5) {
                                                                        y_pred += 89.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 93.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1410.0) {
                                                                    y_pred += 69.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 860.5) {
                                                                        if (x[1] <= 1434.5) {
                                                                            y_pred += 82.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 79.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 70.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 109.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3235.5) {
                                            if (x[2] <= 1513.5) {
                                                if (x[1] <= 1533.0) {
                                                    if (x[0] <= 2333.0) {
                                                        y_pred += 75.0;
                                                    }

                                                    else {
                                                        y_pred += 62.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 699.5) {
                                                        y_pred += 86.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2857.0) {
                                                            if (x[2] <= 1121.5) {
                                                                if (x[1] <= 1634.5) {
                                                                    y_pred += 68.0;
                                                                }

                                                                else {
                                                                    y_pred += 77.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2610.5) {
                                                                    y_pred += 68.0;
                                                                }

                                                                else {
                                                                    y_pred += 67.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1637.5) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2932.5) {
                                                                    y_pred += 82.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 3109.5) {
                                                                        if (x[1] <= 1799.5) {
                                                                            y_pred += 75.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 78.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 72.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1859.5) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    if (x[2] <= 1979.5) {
                                                        y_pred += 75.0;
                                                    }

                                                    else {
                                                        y_pred += 82.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 988.5) {
                                                y_pred += 64.0;
                                            }

                                            else {
                                                y_pred += 60.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2163.5) {
                                    if (x[0] <= 2020.0) {
                                        y_pred += 107.0;
                                    }

                                    else {
                                        y_pred += 93.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 2942.5) {
                                        if (x[0] <= 2000.0) {
                                            if (x[0] <= 1765.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 2457.0) {
                                                y_pred += 103.0;
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 71.0;
                                    }
                                }
                            }
                        }

                        // tree #40
                        if (x[2] <= 585.0) {
                            if (x[2] <= 521.0) {
                                y_pred += 115.0;
                            }

                            else {
                                if (x[1] <= 681.5) {
                                    y_pred += 112.0;
                                }

                                else {
                                    if (x[2] <= 579.0) {
                                        if (x[1] <= 830.0) {
                                            if (x[0] <= 2242.0) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 90.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1929.5) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 84.0;
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 100.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2014.5) {
                                if (x[0] <= 3238.0) {
                                    if (x[0] <= 1671.5) {
                                        y_pred += 93.0;
                                    }

                                    else {
                                        if (x[1] <= 949.5) {
                                            if (x[0] <= 2320.0) {
                                                if (x[0] <= 2155.5) {
                                                    if (x[1] <= 900.0) {
                                                        y_pred += 91.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2095.0) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 809.0) {
                                                        y_pred += 62.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 633.5) {
                                                            y_pred += 66.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 904.5) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 667.5) {
                                                    if (x[1] <= 886.5) {
                                                        y_pred += 89.0;
                                                    }

                                                    else {
                                                        y_pred += 76.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 723.0) {
                                                        y_pred += 109.0;
                                                    }

                                                    else {
                                                        y_pred += 98.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 632.0) {
                                                if (x[0] <= 2181.5) {
                                                    y_pred += 73.0;
                                                }

                                                else {
                                                    if (x[2] <= 613.0) {
                                                        y_pred += 86.0;
                                                    }

                                                    else {
                                                        y_pred += 109.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1755.0) {
                                                    if (x[2] <= 798.5) {
                                                        if (x[2] <= 757.5) {
                                                            if (x[1] <= 973.0) {
                                                                y_pred += 68.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1006.5) {
                                                                    if (x[0] <= 2343.5) {
                                                                        y_pred += 78.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 87.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1042.0) {
                                                                        y_pred += 60.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 698.5) {
                                                                            y_pred += 80.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 81.0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1085.0) {
                                                                y_pred += 77.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2610.0) {
                                                                    if (x[1] <= 1207.0) {
                                                                        y_pred += 88.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 89.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 79.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2187.0) {
                                                            if (x[1] <= 1187.0) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1294.5) {
                                                                    y_pred += 83.0;
                                                                }

                                                                else {
                                                                    y_pred += 79.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 810.0) {
                                                                y_pred += 68.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2611.5) {
                                                                    if (x[1] <= 1503.5) {
                                                                        if (x[0] <= 2429.5) {
                                                                            if (x[1] <= 1343.0) {
                                                                                y_pred += 74.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 75.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1271.5) {
                                                                                y_pred += 69.0;
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 1371.0) {
                                                                                    y_pred += 71.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 70.0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1258.5) {
                                                                            y_pred += 62.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 68.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 838.5) {
                                                                        y_pred += 82.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 3090.0) {
                                                                            if (x[2] <= 1140.5) {
                                                                                if (x[0] <= 2700.0) {
                                                                                    y_pred += 71.0;
                                                                                }

                                                                                else {
                                                                                    if (x[2] <= 1022.0) {
                                                                                        y_pred += 77.0;
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 75.0;
                                                                                    }
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 83.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 3162.5) {
                                                                                if (x[0] <= 3128.0) {
                                                                                    y_pred += 69.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 72.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 76.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1800.0) {
                                                        y_pred += 91.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2857.0) {
                                                            if (x[1] <= 1867.5) {
                                                                y_pred += 67.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2388.5) {
                                                                    y_pred += 82.0;
                                                                }

                                                                else {
                                                                    y_pred += 75.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2994.0) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 792.5) {
                                        y_pred += 64.0;
                                    }

                                    else {
                                        if (x[2] <= 1008.0) {
                                            y_pred += 61.0;
                                        }

                                        else {
                                            y_pred += 60.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2942.5) {
                                    if (x[1] <= 2163.5) {
                                        if (x[1] <= 2082.5) {
                                            y_pred += 93.0;
                                        }

                                        else {
                                            y_pred += 107.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 2646.5) {
                                            y_pred += 103.0;
                                        }

                                        else {
                                            if (x[2] <= 3014.0) {
                                                if (x[0] <= 1765.5) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 76.0;
                                                }
                                            }

                                            else {
                                                y_pred += 98.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    y_pred += 71.0;
                                }
                            }
                        }

                        return y_pred / 40;
                    }

                protected:
                };
            }
        }
    }
