#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class bpm {
                public:
                    /**
                    * Predict class for features vector
                    */
                    float predict(float *x) {
                        float y_pred = 0;
                        // tree #1
                        if (x[2] <= 798.5) {
                            if (x[0] <= 2172.0) {
                                if (x[0] <= 1975.0) {
                                    if (x[1] <= 1130.5) {
                                        if (x[1] <= 973.5) {
                                            if (x[0] <= 1942.0) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }

                                        else {
                                            y_pred += 71.0;
                                        }
                                    }

                                    else {
                                        y_pred += 91.0;
                                    }
                                }

                                else {
                                    if (x[1] <= 900.0) {
                                        if (x[2] <= 524.5) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            if (x[2] <= 557.0) {
                                                y_pred += 105.0;
                                            }

                                            else {
                                                if (x[0] <= 2059.0) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 912.5) {
                                            y_pred += 121.0;
                                        }

                                        else {
                                            if (x[0] <= 2161.5) {
                                                if (x[0] <= 2070.5) {
                                                    y_pred += 100.0;
                                                }

                                                else {
                                                    y_pred += 114.0;
                                                }
                                            }

                                            else {
                                                y_pred += 94.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 852.5) {
                                    if (x[2] <= 604.5) {
                                        if (x[1] <= 826.0) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            y_pred += 58.0;
                                        }
                                    }

                                    else {
                                        y_pred += 88.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 2346.0) {
                                        if (x[1] <= 910.0) {
                                            y_pred += 71.0;
                                        }

                                        else {
                                            if (x[1] <= 1001.5) {
                                                if (x[1] <= 952.5) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 89.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 757.5) {
                                                    if (x[1] <= 1042.0) {
                                                        y_pred += 66.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2247.5) {
                                                            y_pred += 85.0;
                                                        }

                                                        else {
                                                            y_pred += 70.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 84.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 751.5) {
                                            if (x[1] <= 956.0) {
                                                if (x[1] <= 890.0) {
                                                    y_pred += 106.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 626.5) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    if (x[0] <= 2517.5) {
                                                        y_pred += 115.0;
                                                    }

                                                    else {
                                                        y_pred += 101.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 770.0) {
                                                y_pred += 79.0;
                                            }

                                            else {
                                                if (x[2] <= 786.0) {
                                                    if (x[2] <= 772.0) {
                                                        y_pred += 93.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2837.0) {
                                                            y_pred += 90.0;
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 95.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 1632.0) {
                                if (x[1] <= 1567.5) {
                                    if (x[0] <= 3036.5) {
                                        if (x[2] <= 861.5) {
                                            if (x[1] <= 1492.0) {
                                                if (x[2] <= 838.5) {
                                                    y_pred += 73.0;
                                                }

                                                else {
                                                    if (x[0] <= 2449.5) {
                                                        y_pred += 67.0;
                                                    }

                                                    else {
                                                        y_pred += 70.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 80.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 890.5) {
                                                if (x[0] <= 2144.5) {
                                                    y_pred += 110.0;
                                                }

                                                else {
                                                    y_pred += 88.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 927.5) {
                                                    if (x[2] <= 903.0) {
                                                        y_pred += 71.0;
                                                    }

                                                    else {
                                                        y_pred += 72.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1028.0) {
                                                        if (x[0] <= 2553.0) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            y_pred += 106.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2240.0) {
                                                            if (x[1] <= 1446.5) {
                                                                y_pred += 77.0;
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1206.0) {
                                                                if (x[0] <= 2344.0) {
                                                                    y_pred += 82.0;
                                                                }

                                                                else {
                                                                    y_pred += 95.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2736.5) {
                                                                    y_pred += 82.0;
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
                                    }

                                    else {
                                        if (x[1] <= 1172.5) {
                                            y_pred += 76.0;
                                        }

                                        else {
                                            if (x[0] <= 3143.5) {
                                                y_pred += 68.0;
                                            }

                                            else {
                                                y_pred += 69.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2660.0) {
                                        y_pred += 64.0;
                                    }

                                    else {
                                        y_pred += 75.0;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 2298.5) {
                                    if (x[1] <= 1669.5) {
                                        y_pred += 120.0;
                                    }

                                    else {
                                        if (x[1] <= 1712.0) {
                                            y_pred += 68.0;
                                        }

                                        else {
                                            if (x[0] <= 2739.0) {
                                                if (x[1] <= 1945.0) {
                                                    if (x[1] <= 1822.5) {
                                                        y_pred += 88.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1875.0) {
                                                        y_pred += 85.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1762.0) {
                                                    y_pred += 88.0;
                                                }

                                                else {
                                                    if (x[2] <= 1320.5) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1800.0) {
                                                            y_pred += 73.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 2098.5) {
                                                                if (x[2] <= 1351.5) {
                                                                    y_pred += 76.0;
                                                                }

                                                                else {
                                                                    y_pred += 80.0;
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
                                    if (x[2] <= 2861.0) {
                                        if (x[1] <= 2176.5) {
                                            y_pred += 103.0;
                                        }

                                        else {
                                            y_pred += 106.0;
                                        }
                                    }

                                    else {
                                        y_pred += 78.0;
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[0] <= 2172.0) {
                            if (x[2] <= 893.5) {
                                if (x[1] <= 900.0) {
                                    if (x[1] <= 649.5) {
                                        y_pred += 105.0;
                                    }

                                    else {
                                        if (x[2] <= 623.5) {
                                            if (x[0] <= 2043.5) {
                                                if (x[1] <= 816.0) {
                                                    y_pred += 80.0;
                                                }

                                                else {
                                                    y_pred += 87.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 766.5) {
                                                    y_pred += 77.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 91.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 640.0) {
                                        if (x[0] <= 1865.0) {
                                            y_pred += 71.0;
                                        }

                                        else {
                                            if (x[0] <= 1939.5) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[2] <= 585.0) {
                                                    y_pred += 100.0;
                                                }

                                                else {
                                                    y_pred += 94.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2095.0) {
                                            y_pred += 121.0;
                                        }

                                        else {
                                            if (x[1] <= 1182.0) {
                                                if (x[1] <= 1006.5) {
                                                    y_pred += 110.0;
                                                }

                                                else {
                                                    y_pred += 114.0;
                                                }
                                            }

                                            else {
                                                y_pred += 88.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1750.5) {
                                    if (x[2] <= 2260.0) {
                                        y_pred += 77.0;
                                    }

                                    else {
                                        y_pred += 78.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 1888.5) {
                                        y_pred += 103.0;
                                    }

                                    else {
                                        if (x[0] <= 2018.5) {
                                            y_pred += 72.0;
                                        }

                                        else {
                                            if (x[1] <= 1617.0) {
                                                y_pred += 83.0;
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 2060.0) {
                                if (x[0] <= 2430.0) {
                                    if (x[0] <= 2384.0) {
                                        if (x[2] <= 649.5) {
                                            y_pred += 88.0;
                                        }

                                        else {
                                            if (x[0] <= 2191.0) {
                                                y_pred += 66.0;
                                            }

                                            else {
                                                if (x[1] <= 921.5) {
                                                    if (x[2] <= 768.5) {
                                                        y_pred += 71.0;
                                                    }

                                                    else {
                                                        y_pred += 67.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 698.5) {
                                                        y_pred += 70.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2346.0) {
                                                            if (x[1] <= 1227.5) {
                                                                if (x[2] <= 730.0) {
                                                                    if (x[2] <= 708.5) {
                                                                        y_pred += 85.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 84.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 757.0) {
                                                                        y_pred += 89.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 84.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1104.5) {
                                                                    y_pred += 78.0;
                                                                }

                                                                else {
                                                                    y_pred += 82.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 90.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2420.5) {
                                            y_pred += 58.0;
                                        }

                                        else {
                                            y_pred += 64.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2622.5) {
                                        if (x[1] <= 1365.5) {
                                            if (x[1] <= 829.5) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                if (x[0] <= 2501.0) {
                                                    y_pred += 115.0;
                                                }

                                                else {
                                                    if (x[2] <= 657.5) {
                                                        y_pred += 91.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 766.0) {
                                                            if (x[1] <= 940.5) {
                                                                y_pred += 106.0;
                                                            }

                                                            else {
                                                                y_pred += 101.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 95.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1009.0) {
                                                y_pred += 71.0;
                                            }

                                            else {
                                                if (x[0] <= 2479.0) {
                                                    y_pred += 95.0;
                                                }

                                                else {
                                                    y_pred += 82.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2958.0) {
                                            if (x[2] <= 785.0) {
                                                if (x[0] <= 2652.5) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    y_pred += 93.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2646.0) {
                                                    y_pred += 85.0;
                                                }

                                                else {
                                                    if (x[1] <= 1712.0) {
                                                        if (x[1] <= 1668.5) {
                                                            if (x[0] <= 2924.5) {
                                                                if (x[2] <= 810.0) {
                                                                    y_pred += 80.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 983.0) {
                                                                        if (x[0] <= 2675.0) {
                                                                            y_pred += 73.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 70.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 81.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2739.0) {
                                                            y_pred += 88.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2857.0) {
                                                                if (x[0] <= 2784.5) {
                                                                    y_pred += 73.0;
                                                                }

                                                                else {
                                                                    y_pred += 76.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1403.5) {
                                                if (x[0] <= 3089.0) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    if (x[2] <= 853.5) {
                                                        y_pred += 76.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 922.5) {
                                                            y_pred += 69.0;
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1175.0) {
                                                    if (x[2] <= 863.0) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 1049.5) {
                                                            y_pred += 106.0;
                                                        }

                                                        else {
                                                            y_pred += 120.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 3472.0) {
                                                        if (x[0] <= 3252.0) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            y_pred += 80.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 88.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                y_pred += 106.0;
                            }
                        }

                        // tree #3
                        if (x[0] <= 2172.0) {
                            if (x[2] <= 893.5) {
                                if (x[1] <= 900.0) {
                                    if (x[1] <= 649.5) {
                                        y_pred += 105.0;
                                    }

                                    else {
                                        if (x[1] <= 874.5) {
                                            if (x[0] <= 2020.5) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                if (x[2] <= 541.5) {
                                                    y_pred += 77.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1980.5) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 912.5) {
                                        y_pred += 121.0;
                                    }

                                    else {
                                        if (x[2] <= 640.0) {
                                            if (x[2] <= 606.0) {
                                                if (x[2] <= 576.0) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    if (x[1] <= 1020.0) {
                                                        y_pred += 94.0;
                                                    }

                                                    else {
                                                        y_pred += 100.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1182.0) {
                                                if (x[2] <= 767.5) {
                                                    y_pred += 114.0;
                                                }

                                                else {
                                                    y_pred += 110.0;
                                                }
                                            }

                                            else {
                                                y_pred += 88.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1664.5) {
                                    if (x[1] <= 1199.5) {
                                        y_pred += 72.0;
                                    }

                                    else {
                                        if (x[0] <= 1824.5) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            y_pred += 83.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 2178.5) {
                                        if (x[2] <= 2513.0) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            y_pred += 103.0;
                                        }
                                    }

                                    else {
                                        y_pred += 78.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2430.0) {
                                if (x[1] <= 921.5) {
                                    if (x[2] <= 604.5) {
                                        y_pred += 58.0;
                                    }

                                    else {
                                        if (x[2] <= 649.5) {
                                            y_pred += 88.0;
                                        }

                                        else {
                                            if (x[2] <= 768.5) {
                                                y_pred += 71.0;
                                            }

                                            else {
                                                y_pred += 67.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2386.5) {
                                        if (x[0] <= 2191.0) {
                                            y_pred += 66.0;
                                        }

                                        else {
                                            if (x[0] <= 2346.0) {
                                                if (x[0] <= 2228.0) {
                                                    if (x[2] <= 757.0) {
                                                        y_pred += 89.0;
                                                    }

                                                    else {
                                                        y_pred += 84.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 993.0) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2257.5) {
                                                            if (x[0] <= 2230.0) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 905.5) {
                                                                    y_pred += 85.0;
                                                                }

                                                                else {
                                                                    y_pred += 82.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 70.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 90.0;
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 64.0;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1030.5) {
                                    if (x[0] <= 2613.0) {
                                        if (x[2] <= 608.5) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            if (x[2] <= 694.0) {
                                                y_pred += 115.0;
                                            }

                                            else {
                                                if (x[2] <= 729.5) {
                                                    y_pred += 101.0;
                                                }

                                                else {
                                                    y_pred += 106.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 79.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 2484.0) {
                                        if (x[2] <= 1725.5) {
                                            y_pred += 95.0;
                                        }

                                        else {
                                            y_pred += 106.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1229.0) {
                                            if (x[1] <= 1172.5) {
                                                if (x[0] <= 2881.0) {
                                                    y_pred += 70.0;
                                                }

                                                else {
                                                    if (x[0] <= 3183.5) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        y_pred += 76.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 69.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1669.5) {
                                                if (x[2] <= 951.5) {
                                                    if (x[2] <= 798.5) {
                                                        if (x[2] <= 785.5) {
                                                            if (x[1] <= 1486.5) {
                                                                if (x[1] <= 1354.0) {
                                                                    y_pred += 91.0;
                                                                }

                                                                else {
                                                                    y_pred += 93.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 95.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2896.0) {
                                                            if (x[0] <= 2670.0) {
                                                                if (x[1] <= 1450.0) {
                                                                    y_pred += 73.0;
                                                                }

                                                                else {
                                                                    y_pred += 71.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 80.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2958.0) {
                                                        if (x[2] <= 1202.0) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2736.5) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 81.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 3017.5) {
                                                            y_pred += 106.0;
                                                        }

                                                        else {
                                                            y_pred += 120.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1022.0) {
                                                    y_pred += 88.0;
                                                }

                                                else {
                                                    if (x[0] <= 3472.0) {
                                                        if (x[0] <= 2703.0) {
                                                            y_pred += 85.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1221.0) {
                                                                y_pred += 68.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1858.5) {
                                                                    if (x[2] <= 1467.0) {
                                                                        y_pred += 76.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 73.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 1578.0) {
                                                                        if (x[0] <= 3086.0) {
                                                                            y_pred += 83.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 80.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 88.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #4
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[2] <= 798.5) {
                                if (x[2] <= 640.0) {
                                    if (x[2] <= 590.5) {
                                        if (x[1] <= 905.0) {
                                            if (x[1] <= 771.5) {
                                                if (x[0] <= 2020.5) {
                                                    y_pred += 80.0;
                                                }

                                                else {
                                                    y_pred += 77.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2043.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    if (x[2] <= 564.0) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 79.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 576.0) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[2] <= 585.0) {
                                                    y_pred += 100.0;
                                                }

                                                else {
                                                    if (x[1] <= 1095.0) {
                                                        y_pred += 94.0;
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 604.5) {
                                            y_pred += 58.0;
                                        }

                                        else {
                                            if (x[1] <= 824.5) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                if (x[0] <= 2231.5) {
                                                    y_pred += 71.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 668.0) {
                                        if (x[2] <= 658.5) {
                                            y_pred += 114.0;
                                        }

                                        else {
                                            y_pred += 115.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 718.5) {
                                            if (x[0] <= 2233.5) {
                                                if (x[2] <= 689.0) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 85.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 702.0) {
                                                    if (x[0] <= 2250.0) {
                                                        y_pred += 71.0;
                                                    }

                                                    else {
                                                        y_pred += 70.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 84.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 741.0) {
                                                if (x[2] <= 729.5) {
                                                    y_pred += 101.0;
                                                }

                                                else {
                                                    y_pred += 106.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 749.5) {
                                                    if (x[1] <= 1001.5) {
                                                        y_pred += 89.0;
                                                    }

                                                    else {
                                                        y_pred += 66.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 758.0) {
                                                        y_pred += 121.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1128.0) {
                                                            if (x[1] <= 1085.0) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                y_pred += 84.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 3001.0) {
                                                                if (x[1] <= 1234.0) {
                                                                    y_pred += 90.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 784.5) {
                                                                        y_pred += 93.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 95.0;
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
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 2298.5) {
                                    if (x[2] <= 861.5) {
                                        if (x[1] <= 1097.5) {
                                            if (x[0] <= 2449.5) {
                                                y_pred += 67.0;
                                            }

                                            else {
                                                y_pred += 70.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 805.5) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                if (x[1] <= 1296.0) {
                                                    y_pred += 76.0;
                                                }

                                                else {
                                                    y_pred += 73.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 888.0) {
                                            if (x[1] <= 1106.5) {
                                                y_pred += 110.0;
                                            }

                                            else {
                                                y_pred += 88.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 907.5) {
                                                if (x[1] <= 1139.0) {
                                                    y_pred += 72.0;
                                                }

                                                else {
                                                    if (x[2] <= 897.5) {
                                                        y_pred += 69.0;
                                                    }

                                                    else {
                                                        y_pred += 71.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1320.5) {
                                                    if (x[2] <= 1140.5) {
                                                        if (x[0] <= 3036.5) {
                                                            if (x[2] <= 1126.5) {
                                                                if (x[0] <= 2930.5) {
                                                                    if (x[2] <= 1114.0) {
                                                                        if (x[1] <= 1674.5) {
                                                                            if (x[0] <= 2574.0) {
                                                                                if (x[2] <= 1026.0) {
                                                                                    y_pred += 83.0;
                                                                                }

                                                                                else {
                                                                                    if (x[2] <= 1104.5) {
                                                                                        y_pred += 78.0;
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 82.0;
                                                                                    }
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 75.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 88.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 95.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 106.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2993.5) {
                                                            if (x[2] <= 1300.5) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1682.5) {
                                                                y_pred += 120.0;
                                                            }

                                                            else {
                                                                y_pred += 88.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1921.0) {
                                                        if (x[2] <= 1401.5) {
                                                            if (x[2] <= 1384.0) {
                                                                if (x[1] <= 1861.0) {
                                                                    y_pred += 76.0;
                                                                }

                                                                else {
                                                                    y_pred += 80.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 64.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2703.0) {
                                                                if (x[2] <= 1627.5) {
                                                                    y_pred += 77.0;
                                                                }

                                                                else {
                                                                    y_pred += 85.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1669.0) {
                                                                    y_pred += 81.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 1693.5) {
                                                                        y_pred += 73.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }
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
                                }

                                else {
                                    if (x[0] <= 1750.5) {
                                        y_pred += 78.0;
                                    }

                                    else {
                                        if (x[0] <= 2164.5) {
                                            y_pred += 103.0;
                                        }

                                        else {
                                            y_pred += 106.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #5
                        if (x[0] <= 2172.0) {
                            if (x[2] <= 893.5) {
                                if (x[0] <= 1975.0) {
                                    if (x[0] <= 1865.0) {
                                        y_pred += 71.0;
                                    }

                                    else {
                                        if (x[1] <= 816.0) {
                                            y_pred += 80.0;
                                        }

                                        else {
                                            if (x[2] <= 569.0) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2119.0) {
                                        if (x[0] <= 2021.0) {
                                            if (x[1] <= 1007.5) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                y_pred += 100.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 765.0) {
                                                y_pred += 105.0;
                                            }

                                            else {
                                                y_pred += 121.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 580.0) {
                                            if (x[2] <= 541.5) {
                                                y_pred += 77.0;
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 874.0) {
                                                if (x[1] <= 1182.0) {
                                                    if (x[2] <= 620.0) {
                                                        y_pred += 94.0;
                                                    }

                                                    else {
                                                        y_pred += 114.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 88.0;
                                                }
                                            }

                                            else {
                                                y_pred += 110.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1750.5) {
                                    if (x[1] <= 1830.0) {
                                        y_pred += 77.0;
                                    }

                                    else {
                                        y_pred += 78.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 2513.0) {
                                        if (x[0] <= 2018.5) {
                                            y_pred += 72.0;
                                        }

                                        else {
                                            if (x[2] <= 1502.0) {
                                                y_pred += 83.0;
                                            }

                                            else {
                                                y_pred += 87.0;
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
                            if (x[2] <= 2060.0) {
                                if (x[1] <= 1762.0) {
                                    if (x[0] <= 2430.0) {
                                        if (x[0] <= 2384.0) {
                                            if (x[2] <= 649.5) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                if (x[0] <= 2191.0) {
                                                    y_pred += 66.0;
                                                }

                                                else {
                                                    if (x[0] <= 2303.0) {
                                                        if (x[2] <= 698.5) {
                                                            if (x[0] <= 2250.0) {
                                                                y_pred += 71.0;
                                                            }

                                                            else {
                                                                y_pred += 70.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 947.0) {
                                                                y_pred += 67.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 934.5) {
                                                                    if (x[2] <= 757.0) {
                                                                        if (x[2] <= 726.5) {
                                                                            y_pred += 85.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 89.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 84.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2240.0) {
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
                                                        if (x[0] <= 2346.0) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            y_pred += 90.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1216.5) {
                                                y_pred += 58.0;
                                            }

                                            else {
                                                y_pred += 64.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2622.5) {
                                            if (x[0] <= 2490.5) {
                                                if (x[0] <= 2448.5) {
                                                    y_pred += 95.0;
                                                }

                                                else {
                                                    y_pred += 115.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 849.0) {
                                                    if (x[1] <= 829.5) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2608.5) {
                                                            if (x[0] <= 2558.5) {
                                                                y_pred += 95.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2587.0) {
                                                                    y_pred += 101.0;
                                                                }

                                                                else {
                                                                    y_pred += 106.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 91.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1097.0) {
                                                        y_pred += 71.0;
                                                    }

                                                    else {
                                                        y_pred += 82.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1403.5) {
                                                if (x[0] <= 3089.0) {
                                                    if (x[1] <= 980.0) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2881.0) {
                                                            y_pred += 70.0;
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 853.5) {
                                                        y_pred += 76.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1286.5) {
                                                            y_pred += 69.0;
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2958.0) {
                                                    if (x[0] <= 2802.0) {
                                                        if (x[0] <= 2667.5) {
                                                            y_pred += 73.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1493.5) {
                                                                y_pred += 93.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2695.0) {
                                                                    y_pred += 80.0;
                                                                }

                                                                else {
                                                                    y_pred += 88.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2950.5) {
                                                            if (x[2] <= 1122.5) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 81.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1682.5) {
                                                        if (x[1] <= 1585.0) {
                                                            if (x[0] <= 3144.0) {
                                                                y_pred += 106.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 120.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 88.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1858.5) {
                                        if (x[2] <= 1467.0) {
                                            y_pred += 76.0;
                                        }

                                        else {
                                            y_pred += 73.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3082.0) {
                                            if (x[0] <= 2775.5) {
                                                y_pred += 85.0;
                                            }

                                            else {
                                                y_pred += 83.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 2098.5) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                y_pred += 75.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                y_pred += 106.0;
                            }
                        }

                        // tree #6
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[2] <= 798.5) {
                                if (x[1] <= 852.5) {
                                    if (x[2] <= 604.5) {
                                        if (x[0] <= 2491.5) {
                                            if (x[2] <= 562.0) {
                                                if (x[2] <= 521.0) {
                                                    y_pred += 77.0;
                                                }

                                                else {
                                                    y_pred += 80.0;
                                                }
                                            }

                                            else {
                                                y_pred += 58.0;
                                            }
                                        }

                                        else {
                                            y_pred += 87.0;
                                        }
                                    }

                                    else {
                                        y_pred += 88.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 1865.0) {
                                        y_pred += 71.0;
                                    }

                                    else {
                                        if (x[1] <= 856.5) {
                                            y_pred += 106.0;
                                        }

                                        else {
                                            if (x[0] <= 2172.0) {
                                                if (x[2] <= 711.5) {
                                                    if (x[2] <= 579.0) {
                                                        if (x[0] <= 2043.5) {
                                                            if (x[1] <= 1049.0) {
                                                                y_pred += 87.0;
                                                            }

                                                            else {
                                                                y_pred += 91.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 663.5) {
                                                            if (x[1] <= 1000.0) {
                                                                y_pred += 94.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1102.0) {
                                                                    y_pred += 114.0;
                                                                }

                                                                else {
                                                                    y_pred += 100.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 91.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 121.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2346.0) {
                                                    if (x[1] <= 910.0) {
                                                        y_pred += 71.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2191.0) {
                                                            y_pred += 66.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2247.5) {
                                                                if (x[0] <= 2216.0) {
                                                                    y_pred += 84.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1018.5) {
                                                                        y_pred += 89.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 85.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 993.0) {
                                                                    y_pred += 84.0;
                                                                }

                                                                else {
                                                                    y_pred += 70.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1047.0) {
                                                        if (x[0] <= 2601.0) {
                                                            if (x[1] <= 1006.5) {
                                                                y_pred += 115.0;
                                                            }

                                                            else {
                                                                y_pred += 101.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 786.0) {
                                                            if (x[2] <= 679.5) {
                                                                y_pred += 91.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2873.5) {
                                                                    if (x[0] <= 2514.0) {
                                                                        y_pred += 90.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 93.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 771.0) {
                                                                        y_pred += 79.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 83.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 95.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1632.0) {
                                    if (x[1] <= 1567.5) {
                                        if (x[0] <= 3036.5) {
                                            if (x[2] <= 861.5) {
                                                if (x[0] <= 2431.5) {
                                                    y_pred += 67.0;
                                                }

                                                else {
                                                    if (x[1] <= 1492.0) {
                                                        if (x[2] <= 838.5) {
                                                            y_pred += 73.0;
                                                        }

                                                        else {
                                                            y_pred += 70.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 80.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2958.0) {
                                                    if (x[0] <= 2018.5) {
                                                        if (x[2] <= 1233.0) {
                                                            y_pred += 72.0;
                                                        }

                                                        else {
                                                            y_pred += 77.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2144.5) {
                                                            if (x[1] <= 1119.0) {
                                                                y_pred += 110.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2543.5) {
                                                                if (x[0] <= 2344.0) {
                                                                    if (x[1] <= 1318.0) {
                                                                        y_pred += 88.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2240.0) {
                                                                            y_pred += 78.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 82.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2479.0) {
                                                                        y_pred += 95.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 82.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1152.0) {
                                                                    y_pred += 71.0;
                                                                }

                                                                else {
                                                                    y_pred += 81.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 106.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3238.0) {
                                                if (x[1] <= 1286.5) {
                                                    y_pred += 69.0;
                                                }

                                                else {
                                                    y_pred += 68.0;
                                                }
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1607.5) {
                                            y_pred += 64.0;
                                        }

                                        else {
                                            y_pred += 75.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1669.5) {
                                        y_pred += 120.0;
                                    }

                                    else {
                                        if (x[2] <= 1921.0) {
                                            if (x[2] <= 1022.0) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                if (x[2] <= 1169.5) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    if (x[1] <= 1762.0) {
                                                        y_pred += 88.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2703.0) {
                                                            y_pred += 85.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1858.5) {
                                                                if (x[1] <= 1800.0) {
                                                                    y_pred += 73.0;
                                                                }

                                                                else {
                                                                    y_pred += 76.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 3082.0) {
                                                                    y_pred += 83.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 1578.0) {
                                                                        y_pred += 80.0;
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
                                            if (x[2] <= 2861.0) {
                                                if (x[1] <= 2082.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    if (x[1] <= 2176.5) {
                                                        y_pred += 103.0;
                                                    }

                                                    else {
                                                        y_pred += 106.0;
                                                    }
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

                        // tree #7
                        if (x[2] <= 798.5) {
                            if (x[1] <= 1075.5) {
                                if (x[1] <= 1040.0) {
                                    if (x[2] <= 749.5) {
                                        if (x[2] <= 748.5) {
                                            if (x[1] <= 983.0) {
                                                if (x[2] <= 723.0) {
                                                    if (x[1] <= 649.5) {
                                                        y_pred += 105.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2380.0) {
                                                            if (x[1] <= 905.5) {
                                                                if (x[2] <= 677.0) {
                                                                    if (x[2] <= 596.0) {
                                                                        if (x[1] <= 874.5) {
                                                                            if (x[0] <= 2020.5) {
                                                                                y_pred += 80.0;
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 766.5) {
                                                                                    y_pred += 77.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 79.0;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 87.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 809.0) {
                                                                            y_pred += 88.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 91.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 71.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2254.5) {
                                                                    y_pred += 94.0;
                                                                }

                                                                else {
                                                                    y_pred += 84.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2491.5) {
                                                                y_pred += 58.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2596.0) {
                                                                    y_pred += 87.0;
                                                                }

                                                                else {
                                                                    y_pred += 79.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 741.0) {
                                                        y_pred += 106.0;
                                                    }

                                                    else {
                                                        y_pred += 89.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1006.5) {
                                                    y_pred += 115.0;
                                                }

                                                else {
                                                    y_pred += 101.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 66.0;
                                        }
                                    }

                                    else {
                                        y_pred += 121.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 698.5) {
                                        if (x[0] <= 2050.0) {
                                            y_pred += 71.0;
                                        }

                                        else {
                                            y_pred += 70.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2650.0) {
                                            y_pred += 85.0;
                                        }

                                        else {
                                            y_pred += 79.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 710.0) {
                                    if (x[1] <= 1102.0) {
                                        y_pred += 114.0;
                                    }

                                    else {
                                        if (x[0] <= 1939.5) {
                                            y_pred += 91.0;
                                        }

                                        else {
                                            if (x[1] <= 1197.0) {
                                                y_pred += 100.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 3001.0) {
                                        if (x[0] <= 2277.5) {
                                            y_pred += 84.0;
                                        }

                                        else {
                                            if (x[0] <= 2446.0) {
                                                y_pred += 90.0;
                                            }

                                            else {
                                                if (x[1] <= 1374.5) {
                                                    y_pred += 95.0;
                                                }

                                                else {
                                                    y_pred += 93.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 83.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 3090.0) {
                                if (x[0] <= 2958.0) {
                                    if (x[2] <= 1875.0) {
                                        if (x[0] <= 2175.5) {
                                            if (x[2] <= 893.5) {
                                                if (x[1] <= 1106.5) {
                                                    y_pred += 110.0;
                                                }

                                                else {
                                                    y_pred += 88.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2018.5) {
                                                    if (x[1] <= 1247.0) {
                                                        y_pred += 72.0;
                                                    }

                                                    else {
                                                        y_pred += 77.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 904.5) {
                                                if (x[2] <= 810.0) {
                                                    y_pred += 80.0;
                                                }

                                                else {
                                                    if (x[2] <= 838.5) {
                                                        y_pred += 73.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2386.0) {
                                                            y_pred += 67.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 878.0) {
                                                                y_pred += 70.0;
                                                            }

                                                            else {
                                                                y_pred += 71.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2739.0) {
                                                    if (x[0] <= 2430.0) {
                                                        if (x[1] <= 1537.5) {
                                                            if (x[2] <= 1104.5) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 64.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1206.0) {
                                                            if (x[0] <= 2572.0) {
                                                                y_pred += 95.0;
                                                            }

                                                            else {
                                                                y_pred += 88.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2578.0) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 85.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1858.5) {
                                                        if (x[0] <= 2950.5) {
                                                            if (x[1] <= 1800.0) {
                                                                if (x[2] <= 1122.5) {
                                                                    y_pred += 75.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 1367.5) {
                                                                        y_pred += 68.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 73.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 76.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 81.0;
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
                                        if (x[1] <= 2256.0) {
                                            if (x[1] <= 2082.5) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                if (x[1] <= 2176.5) {
                                                    y_pred += 103.0;
                                                }

                                                else {
                                                    y_pred += 106.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 3017.5) {
                                        y_pred += 106.0;
                                    }

                                    else {
                                        y_pred += 120.0;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1559.5) {
                                    if (x[1] <= 1172.5) {
                                        y_pred += 76.0;
                                    }

                                    else {
                                        if (x[1] <= 1286.5) {
                                            y_pred += 69.0;
                                        }

                                        else {
                                            y_pred += 68.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1823.0) {
                                        y_pred += 88.0;
                                    }

                                    else {
                                        if (x[2] <= 1578.0) {
                                            y_pred += 80.0;
                                        }

                                        else {
                                            y_pred += 75.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #8
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[1] <= 852.5) {
                                if (x[1] <= 826.0) {
                                    if (x[2] <= 543.5) {
                                        if (x[1] <= 708.0) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            y_pred += 80.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 586.0) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            y_pred += 88.0;
                                        }
                                    }
                                }

                                else {
                                    y_pred += 58.0;
                                }
                            }

                            else {
                                if (x[2] <= 798.5) {
                                    if (x[0] <= 1865.0) {
                                        y_pred += 71.0;
                                    }

                                    else {
                                        if (x[0] <= 2172.0) {
                                            if (x[0] <= 2021.0) {
                                                if (x[0] <= 1975.0) {
                                                    if (x[2] <= 569.0) {
                                                        y_pred += 91.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 628.5) {
                                                        y_pred += 100.0;
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 882.0) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    if (x[2] <= 620.0) {
                                                        y_pred += 94.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 702.0) {
                                                            y_pred += 114.0;
                                                        }

                                                        else {
                                                            y_pred += 121.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2346.0) {
                                                if (x[2] <= 698.5) {
                                                    if (x[0] <= 2250.0) {
                                                        y_pred += 71.0;
                                                    }

                                                    else {
                                                        y_pred += 70.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 748.5) {
                                                        if (x[0] <= 2229.0) {
                                                            y_pred += 89.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2286.5) {
                                                                y_pred += 85.0;
                                                            }

                                                            else {
                                                                y_pred += 84.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2191.0) {
                                                            y_pred += 66.0;
                                                        }

                                                        else {
                                                            y_pred += 84.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 751.5) {
                                                    if (x[1] <= 956.0) {
                                                        if (x[1] <= 890.0) {
                                                            y_pred += 106.0;
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2517.5) {
                                                            y_pred += 115.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2596.5) {
                                                                y_pred += 101.0;
                                                            }

                                                            else {
                                                                y_pred += 91.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1112.0) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1486.5) {
                                                            if (x[2] <= 786.0) {
                                                                if (x[0] <= 2514.0) {
                                                                    y_pred += 90.0;
                                                                }

                                                                else {
                                                                    y_pred += 93.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 95.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 2298.5) {
                                        if (x[1] <= 923.5) {
                                            y_pred += 67.0;
                                        }

                                        else {
                                            if (x[0] <= 3090.0) {
                                                if (x[1] <= 983.5) {
                                                    y_pred += 110.0;
                                                }

                                                else {
                                                    if (x[0] <= 2958.0) {
                                                        if (x[0] <= 2543.5) {
                                                            if (x[0] <= 2430.0) {
                                                                if (x[1] <= 1755.5) {
                                                                    if (x[1] <= 1537.5) {
                                                                        if (x[1] <= 1187.0) {
                                                                            y_pred += 72.0;
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1378.0) {
                                                                                if (x[0] <= 2198.0) {
                                                                                    if (x[1] <= 1294.5) {
                                                                                        y_pred += 88.0;
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 83.0;
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    y_pred += 82.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[1] <= 1446.5) {
                                                                                    y_pred += 77.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 78.0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 64.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 87.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2479.0) {
                                                                    y_pred += 95.0;
                                                                }

                                                                else {
                                                                    y_pred += 82.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1647.5) {
                                                                if (x[2] <= 904.5) {
                                                                    if (x[2] <= 810.0) {
                                                                        y_pred += 80.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2675.0) {
                                                                            if (x[1] <= 1450.0) {
                                                                                y_pred += 73.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 71.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 70.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 1009.5) {
                                                                        y_pred += 88.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1221.0) {
                                                                            if (x[2] <= 1122.5) {
                                                                                y_pred += 75.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 68.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 2857.0) {
                                                                                if (x[0] <= 2784.5) {
                                                                                    y_pred += 73.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 76.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 1355.5) {
                                                                                    y_pred += 83.0;
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
                                                                y_pred += 85.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1049.5) {
                                                            y_pred += 106.0;
                                                        }

                                                        else {
                                                            y_pred += 120.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 3493.0) {
                                                    if (x[1] <= 1650.5) {
                                                        if (x[2] <= 853.5) {
                                                            y_pred += 76.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 3143.5) {
                                                                y_pred += 68.0;
                                                            }

                                                            else {
                                                                y_pred += 69.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1578.0) {
                                                            y_pred += 80.0;
                                                        }

                                                        else {
                                                            y_pred += 75.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 88.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 2861.0) {
                                            if (x[1] <= 2176.5) {
                                                y_pred += 103.0;
                                            }

                                            else {
                                                y_pred += 106.0;
                                            }
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #9
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[2] <= 798.5) {
                                if (x[2] <= 640.0) {
                                    if (x[2] <= 590.5) {
                                        if (x[1] <= 905.0) {
                                            if (x[2] <= 543.5) {
                                                if (x[0] <= 2020.5) {
                                                    y_pred += 80.0;
                                                }

                                                else {
                                                    y_pred += 77.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2043.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    if (x[0] <= 2343.5) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1939.5) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[2] <= 585.0) {
                                                    y_pred += 100.0;
                                                }

                                                else {
                                                    if (x[1] <= 1095.0) {
                                                        y_pred += 94.0;
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2358.0) {
                                            if (x[0] <= 2067.0) {
                                                y_pred += 71.0;
                                            }

                                            else {
                                                y_pred += 88.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 607.0) {
                                                y_pred += 58.0;
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1006.5) {
                                        if (x[2] <= 749.0) {
                                            if (x[2] <= 668.0) {
                                                y_pred += 115.0;
                                            }

                                            else {
                                                if (x[1] <= 874.5) {
                                                    y_pred += 106.0;
                                                }

                                                else {
                                                    if (x[2] <= 677.0) {
                                                        y_pred += 91.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 696.5) {
                                                            y_pred += 71.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2284.5) {
                                                                y_pred += 89.0;
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
                                            y_pred += 121.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 673.0) {
                                            y_pred += 114.0;
                                        }

                                        else {
                                            if (x[2] <= 698.5) {
                                                y_pred += 70.0;
                                            }

                                            else {
                                                if (x[1] <= 1128.0) {
                                                    if (x[0] <= 2191.0) {
                                                        y_pred += 66.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 745.5) {
                                                            if (x[1] <= 1042.0) {
                                                                y_pred += 101.0;
                                                            }

                                                            else {
                                                                y_pred += 85.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2637.0) {
                                                                y_pred += 84.0;
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 3001.0) {
                                                        if (x[1] <= 1234.0) {
                                                            y_pred += 90.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 784.5) {
                                                                y_pred += 93.0;
                                                            }

                                                            else {
                                                                y_pred += 95.0;
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
                                }
                            }

                            else {
                                if (x[0] <= 3090.0) {
                                    if (x[2] <= 861.5) {
                                        if (x[1] <= 1492.0) {
                                            if (x[2] <= 838.5) {
                                                y_pred += 73.0;
                                            }

                                            else {
                                                if (x[1] <= 976.0) {
                                                    y_pred += 67.0;
                                                }

                                                else {
                                                    y_pred += 70.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 80.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1011.5) {
                                            y_pred += 110.0;
                                        }

                                        else {
                                            if (x[0] <= 2958.0) {
                                                if (x[2] <= 1875.0) {
                                                    if (x[1] <= 1565.0) {
                                                        if (x[2] <= 927.5) {
                                                            if (x[2] <= 883.5) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1279.5) {
                                                                    y_pred += 72.0;
                                                                }

                                                                else {
                                                                    y_pred += 71.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1503.5) {
                                                                if (x[1] <= 1378.0) {
                                                                    if (x[0] <= 2196.5) {
                                                                        y_pred += 83.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 82.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 1427.0) {
                                                                        if (x[2] <= 1198.5) {
                                                                            y_pred += 78.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 82.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 77.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1531.0) {
                                                                    y_pred += 95.0;
                                                                }

                                                                else {
                                                                    y_pred += 81.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1009.5) {
                                                            y_pred += 88.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1647.5) {
                                                                if (x[1] <= 1800.0) {
                                                                    if (x[1] <= 1607.5) {
                                                                        y_pred += 64.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1668.5) {
                                                                            y_pred += 75.0;
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 2860.0) {
                                                                                y_pred += 73.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 68.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 1320.5) {
                                                                        y_pred += 83.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 76.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 85.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 2861.0) {
                                                        if (x[2] <= 2298.5) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2164.5) {
                                                                y_pred += 103.0;
                                                            }

                                                            else {
                                                                y_pred += 106.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 78.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1526.5) {
                                                    y_pred += 106.0;
                                                }

                                                else {
                                                    y_pred += 120.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 3493.0) {
                                        if (x[2] <= 1159.5) {
                                            if (x[2] <= 853.5) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                if (x[1] <= 1286.5) {
                                                    y_pred += 69.0;
                                                }

                                                else {
                                                    y_pred += 68.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1578.0) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                y_pred += 75.0;
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 88.0;
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[0] <= 2172.0) {
                            if (x[0] <= 1975.0) {
                                if (x[0] <= 1859.0) {
                                    if (x[1] <= 1228.5) {
                                        y_pred += 71.0;
                                    }

                                    else {
                                        if (x[0] <= 1563.0) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1149.0) {
                                        if (x[0] <= 1907.0) {
                                            y_pred += 72.0;
                                        }

                                        else {
                                            if (x[0] <= 1942.0) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1652.5) {
                                            y_pred += 91.0;
                                        }

                                        else {
                                            y_pred += 103.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1202.0) {
                                    if (x[0] <= 2133.0) {
                                        if (x[0] <= 2119.0) {
                                            if (x[0] <= 2021.0) {
                                                if (x[2] <= 628.5) {
                                                    y_pred += 100.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 765.0) {
                                                    y_pred += 105.0;
                                                }

                                                else {
                                                    y_pred += 121.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 541.5) {
                                                y_pred += 77.0;
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2161.5) {
                                            if (x[1] <= 1006.5) {
                                                y_pred += 110.0;
                                            }

                                            else {
                                                y_pred += 114.0;
                                            }
                                        }

                                        else {
                                            y_pred += 94.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1294.5) {
                                        y_pred += 88.0;
                                    }

                                    else {
                                        if (x[1] <= 1617.0) {
                                            y_pred += 83.0;
                                        }

                                        else {
                                            y_pred += 87.0;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 2060.0) {
                                if (x[2] <= 798.5) {
                                    if (x[2] <= 604.5) {
                                        if (x[1] <= 1060.5) {
                                            if (x[1] <= 826.0) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 58.0;
                                            }
                                        }

                                        else {
                                            y_pred += 91.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 672.0) {
                                            if (x[0] <= 2543.5) {
                                                if (x[1] <= 856.5) {
                                                    y_pred += 88.0;
                                                }

                                                else {
                                                    y_pred += 115.0;
                                                }
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2346.0) {
                                                if (x[1] <= 910.0) {
                                                    y_pred += 71.0;
                                                }

                                                else {
                                                    if (x[1] <= 1001.5) {
                                                        if (x[2] <= 730.0) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            y_pred += 89.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2191.0) {
                                                            y_pred += 66.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 698.5) {
                                                                y_pred += 70.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1080.0) {
                                                                    y_pred += 85.0;
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
                                                if (x[1] <= 1047.0) {
                                                    if (x[1] <= 940.5) {
                                                        y_pred += 106.0;
                                                    }

                                                    else {
                                                        y_pred += 101.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 770.0) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 3001.0) {
                                                            if (x[2] <= 786.0) {
                                                                if (x[0] <= 2514.0) {
                                                                    y_pred += 90.0;
                                                                }

                                                                else {
                                                                    y_pred += 93.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 95.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2958.0) {
                                        if (x[0] <= 2217.5) {
                                            y_pred += 67.0;
                                        }

                                        else {
                                            if (x[2] <= 904.5) {
                                                if (x[0] <= 2688.0) {
                                                    if (x[1] <= 1509.0) {
                                                        if (x[0] <= 2611.5) {
                                                            y_pred += 71.0;
                                                        }

                                                        else {
                                                            y_pred += 73.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 80.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 70.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2739.0) {
                                                    if (x[0] <= 2430.0) {
                                                        if (x[1] <= 1537.5) {
                                                            if (x[2] <= 1104.5) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 64.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1206.0) {
                                                            if (x[2] <= 1013.5) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                y_pred += 95.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2578.0) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 85.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2950.5) {
                                                        if (x[0] <= 2932.5) {
                                                            if (x[0] <= 2906.5) {
                                                                if (x[0] <= 2784.5) {
                                                                    y_pred += 73.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2847.5) {
                                                                        y_pred += 76.0;
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
                                                            y_pred += 68.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 81.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 951.5) {
                                            if (x[1] <= 1172.5) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                if (x[2] <= 922.5) {
                                                    y_pred += 69.0;
                                                }

                                                else {
                                                    y_pred += 68.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3159.5) {
                                                if (x[0] <= 3017.5) {
                                                    y_pred += 106.0;
                                                }

                                                else {
                                                    y_pred += 120.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1823.0) {
                                                    y_pred += 88.0;
                                                }

                                                else {
                                                    if (x[0] <= 3252.0) {
                                                        y_pred += 75.0;
                                                    }

                                                    else {
                                                        y_pred += 80.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                y_pred += 106.0;
                            }
                        }

                        // tree #11
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[0] <= 2172.0) {
                                if (x[0] <= 1859.0) {
                                    if (x[1] <= 1228.5) {
                                        y_pred += 71.0;
                                    }

                                    else {
                                        if (x[2] <= 2260.0) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2143.0) {
                                        if (x[1] <= 874.5) {
                                            if (x[2] <= 521.0) {
                                                y_pred += 77.0;
                                            }

                                            else {
                                                if (x[0] <= 2020.5) {
                                                    y_pred += 80.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 999.5) {
                                                if (x[0] <= 2021.0) {
                                                    if (x[2] <= 621.5) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 121.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 1888.0) {
                                                    y_pred += 103.0;
                                                }

                                                else {
                                                    if (x[1] <= 1107.0) {
                                                        y_pred += 72.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1164.0) {
                                                            y_pred += 100.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 758.5) {
                                                                y_pred += 91.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1617.0) {
                                                                    y_pred += 83.0;
                                                                }

                                                                else {
                                                                    y_pred += 87.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 1468.0) {
                                            if (x[1] <= 1182.0) {
                                                if (x[2] <= 620.0) {
                                                    y_pred += 94.0;
                                                }

                                                else {
                                                    if (x[2] <= 767.5) {
                                                        y_pred += 114.0;
                                                    }

                                                    else {
                                                        y_pred += 110.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 88.0;
                                            }
                                        }

                                        else {
                                            y_pred += 87.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2108.5) {
                                    if (x[1] <= 925.5) {
                                        if (x[2] <= 795.0) {
                                            if (x[2] <= 707.5) {
                                                if (x[0] <= 2491.5) {
                                                    if (x[2] <= 604.5) {
                                                        y_pred += 58.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2267.0) {
                                                            y_pred += 71.0;
                                                        }

                                                        else {
                                                            y_pred += 88.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2596.0) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 79.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 106.0;
                                            }
                                        }

                                        else {
                                            y_pred += 67.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2191.0) {
                                            y_pred += 66.0;
                                        }

                                        else {
                                            if (x[0] <= 3090.0) {
                                                if (x[1] <= 1030.5) {
                                                    if (x[1] <= 983.0) {
                                                        if (x[1] <= 952.5) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            y_pred += 89.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2517.5) {
                                                            y_pred += 115.0;
                                                        }

                                                        else {
                                                            y_pred += 101.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 3070.0) {
                                                        if (x[0] <= 2958.0) {
                                                            if (x[1] <= 1567.5) {
                                                                if (x[0] <= 2688.0) {
                                                                    if (x[1] <= 1080.0) {
                                                                        if (x[2] <= 698.5) {
                                                                            y_pred += 70.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 85.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2554.0) {
                                                                            if (x[0] <= 2300.5) {
                                                                                if (x[1] <= 1422.5) {
                                                                                    if (x[1] <= 1227.5) {
                                                                                        y_pred += 84.0;
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 82.0;
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    y_pred += 78.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 1206.0) {
                                                                                    if (x[1] <= 1234.0) {
                                                                                        y_pred += 90.0;
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 95.0;
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    y_pred += 82.0;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1451.5) {
                                                                                if (x[1] <= 1434.5) {
                                                                                    if (x[0] <= 2637.5) {
                                                                                        y_pred += 91.0;
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 73.0;
                                                                                    }
                                                                                }

                                                                                else {
                                                                                    y_pred += 93.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 2624.5) {
                                                                                    y_pred += 71.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 80.0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2822.5) {
                                                                        y_pred += 70.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 81.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1009.5) {
                                                                    y_pred += 88.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1858.5) {
                                                                        if (x[2] <= 1366.5) {
                                                                            if (x[2] <= 1234.5) {
                                                                                if (x[2] <= 1122.5) {
                                                                                    y_pred += 75.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 68.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 76.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 1499.5) {
                                                                                y_pred += 64.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 73.0;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1501.0) {
                                                                            y_pred += 83.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 85.0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 861.0) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                y_pred += 106.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 120.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 3217.0) {
                                                    if (x[2] <= 922.5) {
                                                        y_pred += 69.0;
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1008.0) {
                                                        if (x[2] <= 792.5) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            y_pred += 76.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1823.0) {
                                                            y_pred += 88.0;
                                                        }

                                                        else {
                                                            y_pred += 80.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 2060.0) {
                                        y_pred += 75.0;
                                    }

                                    else {
                                        y_pred += 106.0;
                                    }
                                }
                            }
                        }

                        // tree #12
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[2] <= 798.5) {
                                if (x[1] <= 852.5) {
                                    if (x[2] <= 604.5) {
                                        if (x[0] <= 2491.5) {
                                            if (x[1] <= 794.5) {
                                                if (x[0] <= 2020.5) {
                                                    y_pred += 80.0;
                                                }

                                                else {
                                                    y_pred += 77.0;
                                                }
                                            }

                                            else {
                                                y_pred += 58.0;
                                            }
                                        }

                                        else {
                                            y_pred += 87.0;
                                        }
                                    }

                                    else {
                                        y_pred += 88.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 1865.0) {
                                        y_pred += 71.0;
                                    }

                                    else {
                                        if (x[0] <= 2172.0) {
                                            if (x[1] <= 900.0) {
                                                if (x[1] <= 874.5) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    if (x[2] <= 621.5) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 912.5) {
                                                    y_pred += 121.0;
                                                }

                                                else {
                                                    if (x[1] <= 1164.0) {
                                                        if (x[1] <= 1000.0) {
                                                            y_pred += 94.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 619.0) {
                                                                y_pred += 100.0;
                                                            }

                                                            else {
                                                                y_pred += 114.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 874.5) {
                                                y_pred += 106.0;
                                            }

                                            else {
                                                if (x[1] <= 925.5) {
                                                    if (x[2] <= 652.0) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        y_pred += 71.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 677.5) {
                                                        if (x[2] <= 626.5) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            y_pred += 115.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1128.0) {
                                                            if (x[1] <= 1042.0) {
                                                                if (x[1] <= 1001.5) {
                                                                    if (x[2] <= 730.0) {
                                                                        y_pred += 84.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 89.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 737.0) {
                                                                        y_pred += 101.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 66.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2247.5) {
                                                                    if (x[0] <= 2218.0) {
                                                                        y_pred += 84.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 85.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2666.5) {
                                                                        y_pred += 70.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 79.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 3001.0) {
                                                                if (x[2] <= 786.0) {
                                                                    if (x[2] <= 772.5) {
                                                                        y_pred += 93.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 90.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 95.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 83.0;
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
                                if (x[1] <= 1632.0) {
                                    if (x[2] <= 861.5) {
                                        if (x[2] <= 816.5) {
                                            if (x[1] <= 1355.0) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                y_pred += 80.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 976.0) {
                                                y_pred += 67.0;
                                            }

                                            else {
                                                if (x[0] <= 2675.0) {
                                                    y_pred += 73.0;
                                                }

                                                else {
                                                    y_pred += 70.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 888.0) {
                                            if (x[2] <= 874.0) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                y_pred += 110.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3036.5) {
                                                if (x[1] <= 1565.0) {
                                                    if (x[1] <= 1199.5) {
                                                        y_pred += 72.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 924.5) {
                                                            y_pred += 71.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1419.0) {
                                                                if (x[0] <= 1824.5) {
                                                                    y_pred += 77.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 1027.5) {
                                                                        y_pred += 83.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 82.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1455.5) {
                                                                    y_pred += 106.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2333.0) {
                                                                        y_pred += 78.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1531.0) {
                                                                            y_pred += 95.0;
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
                                                    if (x[2] <= 1254.5) {
                                                        y_pred += 75.0;
                                                    }

                                                    else {
                                                        y_pred += 64.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1286.5) {
                                                    y_pred += 69.0;
                                                }

                                                else {
                                                    y_pred += 68.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1669.5) {
                                        y_pred += 120.0;
                                    }

                                    else {
                                        if (x[2] <= 1921.0) {
                                            if (x[2] <= 1022.0) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                if (x[2] <= 1169.5) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    if (x[0] <= 3472.0) {
                                                        if (x[2] <= 1320.5) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1647.5) {
                                                                if (x[2] <= 1484.5) {
                                                                    if (x[0] <= 3027.0) {
                                                                        y_pred += 76.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 80.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 73.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 2123.0) {
                                                                    y_pred += 85.0;
                                                                }

                                                                else {
                                                                    y_pred += 75.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 88.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 2861.0) {
                                                if (x[2] <= 2298.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    if (x[1] <= 2176.5) {
                                                        y_pred += 103.0;
                                                    }

                                                    else {
                                                        y_pred += 106.0;
                                                    }
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

                        // tree #13
                        if (x[2] <= 798.5) {
                            if (x[0] <= 2172.0) {
                                if (x[0] <= 1975.0) {
                                    if (x[0] <= 1865.0) {
                                        y_pred += 71.0;
                                    }

                                    else {
                                        if (x[1] <= 816.0) {
                                            y_pred += 80.0;
                                        }

                                        else {
                                            if (x[2] <= 569.0) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2119.0) {
                                        if (x[2] <= 711.5) {
                                            if (x[2] <= 628.5) {
                                                if (x[0] <= 2050.5) {
                                                    y_pred += 100.0;
                                                }

                                                else {
                                                    y_pred += 105.0;
                                                }
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }

                                        else {
                                            y_pred += 121.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2139.0) {
                                            if (x[2] <= 541.5) {
                                                y_pred += 77.0;
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 620.0) {
                                                y_pred += 94.0;
                                            }

                                            else {
                                                y_pred += 114.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 852.5) {
                                    if (x[2] <= 604.5) {
                                        if (x[0] <= 2491.5) {
                                            y_pred += 58.0;
                                        }

                                        else {
                                            y_pred += 87.0;
                                        }
                                    }

                                    else {
                                        y_pred += 88.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 2346.0) {
                                        if (x[0] <= 2191.0) {
                                            y_pred += 66.0;
                                        }

                                        else {
                                            if (x[0] <= 2233.5) {
                                                if (x[0] <= 2216.0) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    if (x[2] <= 726.5) {
                                                        y_pred += 85.0;
                                                    }

                                                    else {
                                                        y_pred += 89.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2303.0) {
                                                    if (x[1] <= 976.0) {
                                                        y_pred += 71.0;
                                                    }

                                                    else {
                                                        y_pred += 70.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 84.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1047.0) {
                                            if (x[0] <= 2613.0) {
                                                if (x[1] <= 1006.5) {
                                                    if (x[1] <= 922.0) {
                                                        y_pred += 106.0;
                                                    }

                                                    else {
                                                        y_pred += 115.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 101.0;
                                                }
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1112.0) {
                                                y_pred += 79.0;
                                            }

                                            else {
                                                if (x[2] <= 786.0) {
                                                    if (x[2] <= 772.0) {
                                                        if (x[0] <= 2648.0) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            y_pred += 93.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2837.0) {
                                                            y_pred += 90.0;
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 95.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 2298.5) {
                                if (x[1] <= 923.5) {
                                    y_pred += 67.0;
                                }

                                else {
                                    if (x[0] <= 3090.0) {
                                        if (x[2] <= 861.5) {
                                            if (x[1] <= 1492.0) {
                                                if (x[1] <= 1234.5) {
                                                    y_pred += 70.0;
                                                }

                                                else {
                                                    y_pred += 73.0;
                                                }
                                            }

                                            else {
                                                y_pred += 80.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 890.5) {
                                                if (x[0] <= 2144.5) {
                                                    y_pred += 110.0;
                                                }

                                                else {
                                                    y_pred += 88.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 907.5) {
                                                    if (x[1] <= 1279.5) {
                                                        y_pred += 72.0;
                                                    }

                                                    else {
                                                        y_pred += 71.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1669.5) {
                                                        if (x[0] <= 2958.0) {
                                                            if (x[1] <= 1565.0) {
                                                                if (x[1] <= 1503.5) {
                                                                    if (x[1] <= 1378.0) {
                                                                        if (x[1] <= 1330.5) {
                                                                            y_pred += 83.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 82.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1427.0) {
                                                                            if (x[1] <= 1454.5) {
                                                                                y_pred += 82.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 78.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 77.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 1261.0) {
                                                                        y_pred += 95.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 81.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2660.0) {
                                                                    y_pred += 64.0;
                                                                }

                                                                else {
                                                                    y_pred += 75.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1526.5) {
                                                                y_pred += 106.0;
                                                            }

                                                            else {
                                                                y_pred += 120.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2739.0) {
                                                            if (x[2] <= 1302.0) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2396.5) {
                                                                    y_pred += 87.0;
                                                                }

                                                                else {
                                                                    y_pred += 85.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2932.5) {
                                                                if (x[1] <= 1858.5) {
                                                                    if (x[2] <= 1467.0) {
                                                                        y_pred += 76.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 73.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1559.5) {
                                            if (x[1] <= 1172.5) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                if (x[2] <= 922.5) {
                                                    y_pred += 69.0;
                                                }

                                                else {
                                                    y_pred += 68.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1823.0) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                if (x[0] <= 3252.0) {
                                                    y_pred += 75.0;
                                                }

                                                else {
                                                    y_pred += 80.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2256.0) {
                                    if (x[0] <= 2164.5) {
                                        y_pred += 103.0;
                                    }

                                    else {
                                        y_pred += 106.0;
                                    }
                                }

                                else {
                                    y_pred += 78.0;
                                }
                            }
                        }

                        // tree #14
                        if (x[2] <= 798.5) {
                            if (x[1] <= 1075.5) {
                                if (x[2] <= 718.5) {
                                    if (x[1] <= 649.5) {
                                        y_pred += 105.0;
                                    }

                                    else {
                                        if (x[0] <= 2439.0) {
                                            if (x[1] <= 853.0) {
                                                if (x[2] <= 604.5) {
                                                    if (x[0] <= 2270.0) {
                                                        if (x[0] <= 2020.5) {
                                                            y_pred += 80.0;
                                                        }

                                                        else {
                                                            y_pred += 77.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 58.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 88.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 606.0) {
                                                    if (x[1] <= 874.5) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2066.0) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 94.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 991.0) {
                                                        if (x[2] <= 677.0) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 910.0) {
                                                                y_pred += 71.0;
                                                            }

                                                            else {
                                                                y_pred += 84.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1057.0) {
                                                            y_pred += 71.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2247.5) {
                                                                y_pred += 85.0;
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
                                            if (x[2] <= 643.0) {
                                                if (x[1] <= 863.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }

                                            else {
                                                y_pred += 115.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 942.5) {
                                        if (x[0] <= 2322.5) {
                                            y_pred += 121.0;
                                        }

                                        else {
                                            y_pred += 106.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2202.0) {
                                            y_pred += 66.0;
                                        }

                                        else {
                                            if (x[1] <= 1047.0) {
                                                if (x[1] <= 1001.5) {
                                                    y_pred += 89.0;
                                                }

                                                else {
                                                    y_pred += 101.0;
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
                                if (x[2] <= 710.0) {
                                    if (x[0] <= 1939.5) {
                                        y_pred += 91.0;
                                    }

                                    else {
                                        if (x[2] <= 622.0) {
                                            if (x[1] <= 1197.0) {
                                                y_pred += 100.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }

                                        else {
                                            y_pred += 114.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 786.0) {
                                        if (x[1] <= 1486.5) {
                                            if (x[2] <= 768.5) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                if (x[0] <= 2514.0) {
                                                    y_pred += 90.0;
                                                }

                                                else {
                                                    y_pred += 93.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 83.0;
                                        }
                                    }

                                    else {
                                        y_pred += 95.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 2298.5) {
                                if (x[0] <= 2182.0) {
                                    if (x[1] <= 1011.5) {
                                        y_pred += 110.0;
                                    }

                                    else {
                                        if (x[1] <= 1187.0) {
                                            y_pred += 72.0;
                                        }

                                        else {
                                            if (x[0] <= 1824.5) {
                                                y_pred += 77.0;
                                            }

                                            else {
                                                if (x[1] <= 1294.5) {
                                                    y_pred += 88.0;
                                                }

                                                else {
                                                    if (x[0] <= 2150.0) {
                                                        if (x[2] <= 1606.5) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2958.0) {
                                        if (x[1] <= 1195.0) {
                                            if (x[0] <= 2449.5) {
                                                y_pred += 67.0;
                                            }

                                            else {
                                                y_pred += 70.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1858.5) {
                                                if (x[2] <= 1126.5) {
                                                    if (x[1] <= 1503.5) {
                                                        if (x[2] <= 1001.5) {
                                                            if (x[0] <= 2611.5) {
                                                                y_pred += 71.0;
                                                            }

                                                            else {
                                                                y_pred += 73.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1422.5) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2560.0) {
                                                            y_pred += 95.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1674.5) {
                                                                if (x[2] <= 954.5) {
                                                                    y_pred += 80.0;
                                                                }

                                                                else {
                                                                    y_pred += 75.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 88.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2472.0) {
                                                        y_pred += 64.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2646.0) {
                                                            y_pred += 82.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2950.5) {
                                                                if (x[1] <= 1749.0) {
                                                                    y_pred += 68.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1800.0) {
                                                                        y_pred += 73.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 76.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 81.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1936.0) {
                                                    y_pred += 83.0;
                                                }

                                                else {
                                                    y_pred += 85.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3090.0) {
                                            if (x[2] <= 1049.5) {
                                                y_pred += 106.0;
                                            }

                                            else {
                                                y_pred += 120.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3493.0) {
                                                if (x[2] <= 1159.5) {
                                                    if (x[1] <= 1172.5) {
                                                        y_pred += 76.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1286.5) {
                                                            y_pred += 69.0;
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 3252.0) {
                                                        y_pred += 75.0;
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
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2256.0) {
                                    if (x[1] <= 2176.5) {
                                        y_pred += 103.0;
                                    }

                                    else {
                                        y_pred += 106.0;
                                    }
                                }

                                else {
                                    y_pred += 78.0;
                                }
                            }
                        }

                        // tree #15
                        if (x[0] <= 2172.0) {
                            if (x[2] <= 893.5) {
                                if (x[0] <= 1975.0) {
                                    if (x[2] <= 598.0) {
                                        if (x[0] <= 1906.5) {
                                            y_pred += 91.0;
                                        }

                                        else {
                                            if (x[2] <= 551.5) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 71.0;
                                    }
                                }

                                else {
                                    if (x[1] <= 900.0) {
                                        if (x[2] <= 524.5) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            if (x[2] <= 557.0) {
                                                y_pred += 105.0;
                                            }

                                            else {
                                                if (x[1] <= 875.0) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1102.0) {
                                            if (x[1] <= 912.5) {
                                                y_pred += 121.0;
                                            }

                                            else {
                                                if (x[2] <= 620.0) {
                                                    y_pred += 94.0;
                                                }

                                                else {
                                                    if (x[1] <= 1006.5) {
                                                        y_pred += 110.0;
                                                    }

                                                    else {
                                                        y_pred += 114.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1202.0) {
                                                y_pred += 100.0;
                                            }

                                            else {
                                                y_pred += 88.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1664.5) {
                                    if (x[1] <= 1199.5) {
                                        y_pred += 72.0;
                                    }

                                    else {
                                        if (x[1] <= 1354.5) {
                                            y_pred += 83.0;
                                        }

                                        else {
                                            y_pred += 77.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 2178.5) {
                                        if (x[1] <= 2082.5) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            y_pred += 103.0;
                                        }
                                    }

                                    else {
                                        y_pred += 78.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2108.5) {
                                if (x[0] <= 2430.0) {
                                    if (x[2] <= 604.5) {
                                        y_pred += 58.0;
                                    }

                                    else {
                                        if (x[1] <= 1537.5) {
                                            if (x[1] <= 1080.0) {
                                                if (x[2] <= 748.5) {
                                                    if (x[0] <= 2233.5) {
                                                        if (x[1] <= 1018.5) {
                                                            y_pred += 89.0;
                                                        }

                                                        else {
                                                            y_pred += 85.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2281.0) {
                                                            if (x[2] <= 686.5) {
                                                                y_pred += 71.0;
                                                            }

                                                            else {
                                                                y_pred += 70.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2320.0) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                y_pred += 84.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 802.5) {
                                                        y_pred += 66.0;
                                                    }

                                                    else {
                                                        y_pred += 67.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1254.5) {
                                                    if (x[0] <= 2277.5) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        y_pred += 90.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2240.0) {
                                                        y_pred += 78.0;
                                                    }

                                                    else {
                                                        y_pred += 82.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 64.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 751.5) {
                                        if (x[1] <= 956.0) {
                                            if (x[2] <= 678.5) {
                                                if (x[0] <= 2596.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }

                                            else {
                                                y_pred += 106.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2517.5) {
                                                y_pred += 115.0;
                                            }

                                            else {
                                                if (x[0] <= 2596.5) {
                                                    y_pred += 101.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2554.0) {
                                            if (x[1] <= 1365.5) {
                                                y_pred += 95.0;
                                            }

                                            else {
                                                if (x[1] <= 1467.0) {
                                                    y_pred += 82.0;
                                                }

                                                else {
                                                    y_pred += 95.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 951.5) {
                                                if (x[1] <= 1434.5) {
                                                    if (x[1] <= 1172.5) {
                                                        if (x[2] <= 834.0) {
                                                            if (x[1] <= 1114.0) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                y_pred += 76.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 70.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1410.0) {
                                                            if (x[1] <= 1286.5) {
                                                                y_pred += 69.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 73.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1451.5) {
                                                        y_pred += 93.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2624.5) {
                                                            y_pred += 71.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 854.0) {
                                                                if (x[2] <= 786.0) {
                                                                    y_pred += 83.0;
                                                                }

                                                                else {
                                                                    y_pred += 80.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 88.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1031.5) {
                                                    y_pred += 106.0;
                                                }

                                                else {
                                                    if (x[0] <= 3011.5) {
                                                        if (x[2] <= 1221.0) {
                                                            if (x[2] <= 1122.5) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1647.5) {
                                                                if (x[0] <= 2857.0) {
                                                                    if (x[2] <= 1467.0) {
                                                                        y_pred += 76.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 73.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2934.0) {
                                                                        y_pred += 83.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 81.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 85.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1175.0) {
                                                            y_pred += 120.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 3472.0) {
                                                                y_pred += 80.0;
                                                            }

                                                            else {
                                                                y_pred += 88.0;
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
                                if (x[2] <= 2060.0) {
                                    y_pred += 75.0;
                                }

                                else {
                                    y_pred += 106.0;
                                }
                            }
                        }

                        // tree #16
                        if (x[2] <= 798.5) {
                            if (x[0] <= 2172.0) {
                                if (x[0] <= 1975.0) {
                                    if (x[2] <= 598.0) {
                                        if (x[1] <= 816.0) {
                                            y_pred += 80.0;
                                        }

                                        else {
                                            if (x[1] <= 1049.0) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 71.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 2119.0) {
                                        if (x[0] <= 2021.0) {
                                            if (x[1] <= 1007.5) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                y_pred += 100.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2081.0) {
                                                y_pred += 121.0;
                                            }

                                            else {
                                                y_pred += 105.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2139.0) {
                                            if (x[2] <= 541.5) {
                                                y_pred += 77.0;
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2161.5) {
                                                y_pred += 114.0;
                                            }

                                            else {
                                                y_pred += 94.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 604.5) {
                                    if (x[2] <= 590.5) {
                                        if (x[1] <= 1037.5) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            y_pred += 91.0;
                                        }
                                    }

                                    else {
                                        y_pred += 58.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 672.0) {
                                        if (x[0] <= 2543.5) {
                                            if (x[2] <= 640.5) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                y_pred += 115.0;
                                            }
                                        }

                                        else {
                                            y_pred += 79.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 874.5) {
                                            y_pred += 106.0;
                                        }

                                        else {
                                            if (x[0] <= 2303.0) {
                                                if (x[0] <= 2191.0) {
                                                    y_pred += 66.0;
                                                }

                                                else {
                                                    if (x[1] <= 935.5) {
                                                        y_pred += 71.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 698.5) {
                                                            y_pred += 70.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1018.5) {
                                                                y_pred += 89.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1080.0) {
                                                                    y_pred += 85.0;
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
                                                if (x[1] <= 1486.5) {
                                                    if (x[1] <= 976.0) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2873.5) {
                                                            if (x[0] <= 2446.0) {
                                                                y_pred += 90.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 748.0) {
                                                                    y_pred += 101.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2610.0) {
                                                                        y_pred += 95.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 93.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 79.0;
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
                            }
                        }

                        else {
                            if (x[2] <= 2298.5) {
                                if (x[0] <= 2182.0) {
                                    if (x[2] <= 893.5) {
                                        if (x[1] <= 1106.5) {
                                            y_pred += 110.0;
                                        }

                                        else {
                                            y_pred += 88.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2018.5) {
                                            if (x[1] <= 1247.0) {
                                                y_pred += 72.0;
                                            }

                                            else {
                                                y_pred += 77.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1502.0) {
                                                y_pred += 83.0;
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2958.0) {
                                        if (x[1] <= 1195.0) {
                                            if (x[0] <= 2449.5) {
                                                y_pred += 67.0;
                                            }

                                            else {
                                                y_pred += 70.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1126.5) {
                                                if (x[2] <= 1114.0) {
                                                    if (x[1] <= 1674.5) {
                                                        if (x[1] <= 1393.5) {
                                                            y_pred += 82.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1479.0) {
                                                                if (x[2] <= 860.5) {
                                                                    y_pred += 73.0;
                                                                }

                                                                else {
                                                                    y_pred += 71.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2790.0) {
                                                                    if (x[1] <= 1521.0) {
                                                                        y_pred += 78.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 80.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 75.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 88.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 95.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1214.5) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    if (x[0] <= 2472.0) {
                                                        y_pred += 64.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 1647.5) {
                                                            if (x[2] <= 1502.0) {
                                                                if (x[1] <= 1858.5) {
                                                                    if (x[0] <= 2659.5) {
                                                                        y_pred += 82.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1369.0) {
                                                                            y_pred += 76.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 81.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 73.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 85.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3090.0) {
                                            if (x[2] <= 1049.5) {
                                                y_pred += 106.0;
                                            }

                                            else {
                                                y_pred += 120.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1559.5) {
                                                if (x[0] <= 3238.0) {
                                                    if (x[1] <= 1286.5) {
                                                        y_pred += 69.0;
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 76.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 3472.0) {
                                                    if (x[1] <= 2098.5) {
                                                        y_pred += 80.0;
                                                    }

                                                    else {
                                                        y_pred += 75.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 88.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1750.5) {
                                    y_pred += 78.0;
                                }

                                else {
                                    if (x[0] <= 2164.5) {
                                        y_pred += 103.0;
                                    }

                                    else {
                                        y_pred += 106.0;
                                    }
                                }
                            }
                        }

                        // tree #17
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[2] <= 798.5) {
                                if (x[2] <= 640.0) {
                                    if (x[1] <= 1088.5) {
                                        if (x[1] <= 989.5) {
                                            if (x[1] <= 874.5) {
                                                if (x[0] <= 2358.0) {
                                                    if (x[2] <= 596.0) {
                                                        if (x[1] <= 708.0) {
                                                            y_pred += 77.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 553.5) {
                                                                y_pred += 80.0;
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 88.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2491.5) {
                                                        y_pred += 58.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 604.5) {
                                                    if (x[1] <= 905.0) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 94.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 71.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1939.5) {
                                            y_pred += 91.0;
                                        }

                                        else {
                                            if (x[1] <= 1197.0) {
                                                y_pred += 100.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2166.5) {
                                        if (x[2] <= 711.5) {
                                            if (x[0] <= 2076.0) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                y_pred += 114.0;
                                            }
                                        }

                                        else {
                                            y_pred += 121.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 672.0) {
                                            y_pred += 115.0;
                                        }

                                        else {
                                            if (x[2] <= 698.5) {
                                                if (x[2] <= 686.5) {
                                                    y_pred += 71.0;
                                                }

                                                else {
                                                    y_pred += 70.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2191.0) {
                                                    y_pred += 66.0;
                                                }

                                                else {
                                                    if (x[1] <= 891.5) {
                                                        y_pred += 106.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2873.5) {
                                                            if (x[1] <= 952.5) {
                                                                y_pred += 84.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2446.0) {
                                                                    if (x[2] <= 770.0) {
                                                                        if (x[1] <= 1018.5) {
                                                                            y_pred += 89.0;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 735.5) {
                                                                                y_pred += 85.0;
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

                                                                else {
                                                                    if (x[1] <= 1169.0) {
                                                                        y_pred += 101.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 784.5) {
                                                                            y_pred += 93.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 95.0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 771.0) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
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
                                if (x[2] <= 2298.5) {
                                    if (x[2] <= 861.5) {
                                        if (x[1] <= 1097.5) {
                                            if (x[0] <= 2449.5) {
                                                y_pred += 67.0;
                                            }

                                            else {
                                                y_pred += 70.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2670.0) {
                                                y_pred += 73.0;
                                            }

                                            else {
                                                if (x[1] <= 1355.0) {
                                                    y_pred += 76.0;
                                                }

                                                else {
                                                    y_pred += 80.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3090.0) {
                                            if (x[1] <= 1011.5) {
                                                y_pred += 110.0;
                                            }

                                            else {
                                                if (x[2] <= 1320.5) {
                                                    if (x[2] <= 1140.5) {
                                                        if (x[1] <= 1443.5) {
                                                            if (x[0] <= 2607.5) {
                                                                if (x[1] <= 1187.0) {
                                                                    y_pred += 72.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 908.0) {
                                                                        y_pred += 88.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1330.5) {
                                                                            y_pred += 83.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 82.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 106.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1126.5) {
                                                                if (x[2] <= 1114.0) {
                                                                    if (x[0] <= 2636.5) {
                                                                        if (x[2] <= 1001.5) {
                                                                            y_pred += 71.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 78.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1674.5) {
                                                                            y_pred += 75.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 88.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 95.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2993.5) {
                                                            if (x[2] <= 1300.5) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 120.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1647.5) {
                                                        if (x[2] <= 1401.5) {
                                                            if (x[1] <= 1696.0) {
                                                                y_pred += 64.0;
                                                            }

                                                            else {
                                                                y_pred += 76.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1669.0) {
                                                                if (x[0] <= 2229.5) {
                                                                    y_pred += 77.0;
                                                                }

                                                                else {
                                                                    y_pred += 81.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 73.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1875.0) {
                                                            y_pred += 85.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1077.0) {
                                                if (x[0] <= 3143.5) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    y_pred += 69.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1286.5) {
                                                    y_pred += 88.0;
                                                }

                                                else {
                                                    if (x[2] <= 1578.0) {
                                                        y_pred += 80.0;
                                                    }

                                                    else {
                                                        y_pred += 75.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 2861.0) {
                                        if (x[2] <= 2547.5) {
                                            y_pred += 106.0;
                                        }

                                        else {
                                            y_pred += 103.0;
                                        }
                                    }

                                    else {
                                        y_pred += 78.0;
                                    }
                                }
                            }
                        }

                        // tree #18
                        if (x[0] <= 2172.0) {
                            if (x[2] <= 893.5) {
                                if (x[1] <= 900.0) {
                                    if (x[2] <= 536.5) {
                                        if (x[0] <= 2020.5) {
                                            y_pred += 80.0;
                                        }

                                        else {
                                            y_pred += 77.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 555.0) {
                                            y_pred += 105.0;
                                        }

                                        else {
                                            if (x[2] <= 623.5) {
                                                if (x[0] <= 2043.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 912.5) {
                                        y_pred += 121.0;
                                    }

                                    else {
                                        if (x[0] <= 1865.0) {
                                            y_pred += 71.0;
                                        }

                                        else {
                                            if (x[0] <= 1939.5) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[1] <= 1202.0) {
                                                    if (x[2] <= 620.0) {
                                                        if (x[0] <= 2076.0) {
                                                            y_pred += 100.0;
                                                        }

                                                        else {
                                                            y_pred += 94.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 767.5) {
                                                            y_pred += 114.0;
                                                        }

                                                        else {
                                                            y_pred += 110.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 88.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 1807.5) {
                                    if (x[0] <= 2018.5) {
                                        if (x[1] <= 1247.0) {
                                            y_pred += 72.0;
                                        }

                                        else {
                                            y_pred += 77.0;
                                        }
                                    }

                                    else {
                                        y_pred += 83.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 1750.5) {
                                        y_pred += 78.0;
                                    }

                                    else {
                                        if (x[2] <= 2513.0) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            y_pred += 103.0;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 2060.0) {
                                if (x[2] <= 798.5) {
                                    if (x[1] <= 852.5) {
                                        if (x[2] <= 604.5) {
                                            if (x[2] <= 572.5) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 58.0;
                                            }
                                        }

                                        else {
                                            y_pred += 88.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 874.5) {
                                            y_pred += 106.0;
                                        }

                                        else {
                                            if (x[1] <= 925.5) {
                                                if (x[1] <= 908.5) {
                                                    y_pred += 71.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 677.5) {
                                                    if (x[2] <= 626.5) {
                                                        y_pred += 91.0;
                                                    }

                                                    else {
                                                        y_pred += 115.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 698.5) {
                                                        y_pred += 70.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1128.0) {
                                                            if (x[2] <= 748.5) {
                                                                if (x[1] <= 952.5) {
                                                                    y_pred += 84.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 715.0) {
                                                                        y_pred += 85.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 736.5) {
                                                                            y_pred += 101.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 89.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 757.5) {
                                                                    y_pred += 66.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1085.0) {
                                                                        y_pred += 79.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 84.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 3001.0) {
                                                                if (x[2] <= 786.0) {
                                                                    if (x[1] <= 1295.5) {
                                                                        y_pred += 90.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 93.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 95.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1402.5) {
                                        if (x[0] <= 2228.5) {
                                            y_pred += 67.0;
                                        }

                                        else {
                                            if (x[2] <= 1028.0) {
                                                if (x[0] <= 3238.0) {
                                                    if (x[2] <= 875.5) {
                                                        y_pred += 70.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 3143.5) {
                                                            y_pred += 68.0;
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

                                            else {
                                                y_pred += 82.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2958.0) {
                                            if (x[2] <= 1647.5) {
                                                if (x[0] <= 2430.0) {
                                                    if (x[2] <= 1251.0) {
                                                        y_pred += 78.0;
                                                    }

                                                    else {
                                                        y_pred += 64.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1491.5) {
                                                        if (x[0] <= 2543.5) {
                                                            y_pred += 82.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2611.5) {
                                                                y_pred += 71.0;
                                                            }

                                                            else {
                                                                y_pred += 73.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2739.0) {
                                                            if (x[1] <= 1533.5) {
                                                                y_pred += 95.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1634.5) {
                                                                    y_pred += 80.0;
                                                                }

                                                                else {
                                                                    y_pred += 88.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1858.5) {
                                                                if (x[0] <= 2950.5) {
                                                                    if (x[0] <= 2923.0) {
                                                                        if (x[2] <= 1467.0) {
                                                                            if (x[1] <= 1719.5) {
                                                                                y_pred += 75.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 76.0;
                                                                            }
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
                                                                    y_pred += 81.0;
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
                                                y_pred += 85.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1682.5) {
                                                if (x[0] <= 3017.5) {
                                                    y_pred += 106.0;
                                                }

                                                else {
                                                    y_pred += 120.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1286.5) {
                                                    y_pred += 88.0;
                                                }

                                                else {
                                                    if (x[1] <= 2098.5) {
                                                        y_pred += 80.0;
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
                                y_pred += 106.0;
                            }
                        }

                        // tree #19
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[0] <= 2172.0) {
                                if (x[0] <= 1859.0) {
                                    if (x[1] <= 1228.5) {
                                        y_pred += 71.0;
                                    }

                                    else {
                                        if (x[1] <= 1830.0) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 892.5) {
                                        if (x[1] <= 874.5) {
                                            if (x[0] <= 2020.5) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                if (x[2] <= 541.5) {
                                                    y_pred += 77.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 87.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1087.0) {
                                            if (x[0] <= 2021.0) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[1] <= 912.5) {
                                                    y_pred += 121.0;
                                                }

                                                else {
                                                    if (x[0] <= 2161.5) {
                                                        if (x[0] <= 2150.0) {
                                                            y_pred += 110.0;
                                                        }

                                                        else {
                                                            y_pred += 114.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 94.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1888.0) {
                                                y_pred += 103.0;
                                            }

                                            else {
                                                if (x[2] <= 725.5) {
                                                    if (x[1] <= 1164.0) {
                                                        y_pred += 100.0;
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2018.5) {
                                                        y_pred += 72.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 908.0) {
                                                            y_pred += 88.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1502.0) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                y_pred += 87.0;
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
                                if (x[2] <= 2060.0) {
                                    if (x[1] <= 1762.0) {
                                        if (x[1] <= 1632.0) {
                                            if (x[0] <= 2430.0) {
                                                if (x[1] <= 921.5) {
                                                    if (x[1] <= 787.0) {
                                                        y_pred += 88.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2327.0) {
                                                            if (x[1] <= 904.5) {
                                                                y_pred += 71.0;
                                                            }

                                                            else {
                                                                y_pred += 67.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 58.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1252.5) {
                                                        if (x[1] <= 1001.5) {
                                                            if (x[1] <= 952.5) {
                                                                y_pred += 84.0;
                                                            }

                                                            else {
                                                                y_pred += 89.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2191.0) {
                                                                y_pred += 66.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2307.0) {
                                                                    if (x[2] <= 698.5) {
                                                                        y_pred += 70.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 934.5) {
                                                                            if (x[1] <= 1080.0) {
                                                                                y_pred += 85.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 84.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 1104.5) {
                                                                                y_pred += 78.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 82.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 90.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 64.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2622.5) {
                                                    if (x[2] <= 849.0) {
                                                        if (x[1] <= 829.5) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1006.5) {
                                                                if (x[2] <= 698.5) {
                                                                    y_pred += 115.0;
                                                                }

                                                                else {
                                                                    y_pred += 106.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1148.5) {
                                                                    y_pred += 101.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 694.0) {
                                                                        y_pred += 91.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 95.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2479.0) {
                                                            y_pred += 95.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1097.0) {
                                                                y_pred += 71.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 3089.0) {
                                                        if (x[1] <= 1244.5) {
                                                            if (x[0] <= 2660.0) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2881.0) {
                                                                    y_pred += 70.0;
                                                                }

                                                                else {
                                                                    y_pred += 79.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2958.0) {
                                                                if (x[1] <= 1434.5) {
                                                                    y_pred += 73.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2680.5) {
                                                                        y_pred += 93.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2924.5) {
                                                                            if (x[0] <= 2790.0) {
                                                                                y_pred += 80.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 75.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 81.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 106.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1462.0) {
                                                            if (x[1] <= 1172.5) {
                                                                y_pred += 76.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 922.5) {
                                                                    y_pred += 69.0;
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
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
                                            if (x[1] <= 1669.5) {
                                                y_pred += 120.0;
                                            }

                                            else {
                                                if (x[1] <= 1712.0) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    y_pred += 88.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2703.0) {
                                            y_pred += 85.0;
                                        }

                                        else {
                                            if (x[1] <= 1858.5) {
                                                if (x[1] <= 1800.0) {
                                                    y_pred += 73.0;
                                                }

                                                else {
                                                    y_pred += 76.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1578.0) {
                                                    if (x[1] <= 1911.5) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        y_pred += 80.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 75.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    y_pred += 106.0;
                                }
                            }
                        }

                        // tree #20
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[0] <= 2172.0) {
                                if (x[2] <= 893.5) {
                                    if (x[0] <= 1975.0) {
                                        if (x[1] <= 1130.5) {
                                            if (x[2] <= 598.0) {
                                                if (x[0] <= 1942.0) {
                                                    y_pred += 80.0;
                                                }

                                                else {
                                                    y_pred += 87.0;
                                                }
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }

                                        else {
                                            y_pred += 91.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 579.0) {
                                            if (x[2] <= 541.5) {
                                                y_pred += 77.0;
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2021.0) {
                                                if (x[0] <= 1990.5) {
                                                    y_pred += 100.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1182.0) {
                                                    if (x[1] <= 912.5) {
                                                        y_pred += 121.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 924.5) {
                                                            y_pred += 94.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1006.5) {
                                                                y_pred += 110.0;
                                                            }

                                                            else {
                                                                y_pred += 114.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 88.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1750.5) {
                                        if (x[2] <= 2260.0) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1888.5) {
                                            y_pred += 103.0;
                                        }

                                        else {
                                            if (x[0] <= 2018.5) {
                                                y_pred += 72.0;
                                            }

                                            else {
                                                if (x[1] <= 1617.0) {
                                                    y_pred += 83.0;
                                                }

                                                else {
                                                    y_pred += 87.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2430.0) {
                                    if (x[2] <= 604.5) {
                                        y_pred += 58.0;
                                    }

                                    else {
                                        if (x[2] <= 1252.5) {
                                            if (x[0] <= 2281.0) {
                                                if (x[1] <= 947.0) {
                                                    if (x[1] <= 904.5) {
                                                        y_pred += 71.0;
                                                    }

                                                    else {
                                                        y_pred += 67.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 698.5) {
                                                        y_pred += 70.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2191.0) {
                                                            y_pred += 66.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1227.5) {
                                                                if (x[0] <= 2216.0) {
                                                                    y_pred += 84.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1018.5) {
                                                                        y_pred += 89.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 85.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2240.0) {
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

                                            else {
                                                if (x[0] <= 2346.0) {
                                                    if (x[0] <= 2320.0) {
                                                        y_pred += 88.0;
                                                    }

                                                    else {
                                                        y_pred += 84.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 90.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 64.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 751.5) {
                                        if (x[2] <= 643.0) {
                                            if (x[1] <= 1098.0) {
                                                if (x[0] <= 2596.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 694.0) {
                                                y_pred += 115.0;
                                            }

                                            else {
                                                if (x[0] <= 2587.0) {
                                                    y_pred += 101.0;
                                                }

                                                else {
                                                    y_pred += 106.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1249.5) {
                                            if (x[0] <= 2881.0) {
                                                y_pred += 70.0;
                                            }

                                            else {
                                                if (x[1] <= 1172.5) {
                                                    if (x[1] <= 1114.0) {
                                                        y_pred += 79.0;
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

                                        else {
                                            if (x[2] <= 2060.0) {
                                                if (x[2] <= 1320.5) {
                                                    if (x[0] <= 2956.5) {
                                                        if (x[0] <= 2554.0) {
                                                            if (x[2] <= 1206.0) {
                                                                y_pred += 95.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 785.0) {
                                                                y_pred += 93.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2932.5) {
                                                                    if (x[0] <= 2670.0) {
                                                                        if (x[1] <= 1450.0) {
                                                                            y_pred += 73.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 71.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1674.5) {
                                                                            if (x[1] <= 1591.0) {
                                                                                y_pred += 80.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 75.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 1108.0) {
                                                                                y_pred += 88.0;
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
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1403.5) {
                                                            y_pred += 68.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 3197.5) {
                                                                if (x[2] <= 1049.5) {
                                                                    y_pred += 106.0;
                                                                }

                                                                else {
                                                                    y_pred += 120.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1634.5) {
                                                                    y_pred += 83.0;
                                                                }

                                                                else {
                                                                    y_pred += 88.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2703.0) {
                                                        y_pred += 85.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1669.0) {
                                                            y_pred += 81.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 3252.0) {
                                                                if (x[1] <= 1800.0) {
                                                                    y_pred += 73.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 2045.5) {
                                                                        y_pred += 76.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 80.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 106.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #21
                        if (x[2] <= 798.5) {
                            if (x[2] <= 640.0) {
                                if (x[2] <= 590.5) {
                                    if (x[0] <= 2119.0) {
                                        if (x[0] <= 1975.0) {
                                            if (x[2] <= 550.5) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                if (x[2] <= 569.0) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 87.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 872.5) {
                                                y_pred += 105.0;
                                            }

                                            else {
                                                y_pred += 100.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 887.5) {
                                            if (x[2] <= 531.5) {
                                                y_pred += 77.0;
                                            }

                                            else {
                                                if (x[1] <= 830.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2392.5) {
                                                y_pred += 94.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 787.0) {
                                        y_pred += 88.0;
                                    }

                                    else {
                                        if (x[0] <= 2522.5) {
                                            if (x[0] <= 2127.0) {
                                                y_pred += 71.0;
                                            }

                                            else {
                                                y_pred += 58.0;
                                            }
                                        }

                                        else {
                                            y_pred += 79.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 668.0) {
                                    if (x[1] <= 1035.0) {
                                        y_pred += 115.0;
                                    }

                                    else {
                                        y_pred += 114.0;
                                    }
                                }

                                else {
                                    if (x[1] <= 917.0) {
                                        if (x[1] <= 900.0) {
                                            if (x[1] <= 874.5) {
                                                y_pred += 106.0;
                                            }

                                            else {
                                                if (x[2] <= 677.0) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 121.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 698.5) {
                                            y_pred += 70.0;
                                        }

                                        else {
                                            if (x[1] <= 1128.0) {
                                                if (x[1] <= 1001.5) {
                                                    if (x[0] <= 2284.5) {
                                                        y_pred += 89.0;
                                                    }

                                                    else {
                                                        y_pred += 84.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 737.0) {
                                                        if (x[0] <= 2403.0) {
                                                            y_pred += 85.0;
                                                        }

                                                        else {
                                                            y_pred += 101.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2191.0) {
                                                            y_pred += 66.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2637.0) {
                                                                y_pred += 84.0;
                                                            }

                                                            else {
                                                                y_pred += 79.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 786.0) {
                                                    if (x[0] <= 3001.0) {
                                                        if (x[1] <= 1295.5) {
                                                            y_pred += 90.0;
                                                        }

                                                        else {
                                                            y_pred += 93.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 83.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 95.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 2298.5) {
                                if (x[1] <= 923.5) {
                                    y_pred += 67.0;
                                }

                                else {
                                    if (x[1] <= 983.5) {
                                        y_pred += 110.0;
                                    }

                                    else {
                                        if (x[0] <= 2958.0) {
                                            if (x[2] <= 1647.5) {
                                                if (x[2] <= 1320.5) {
                                                    if (x[0] <= 2543.5) {
                                                        if (x[1] <= 1503.5) {
                                                            if (x[2] <= 886.5) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1199.5) {
                                                                    y_pred += 72.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2185.5) {
                                                                        y_pred += 83.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1454.5) {
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
                                                            y_pred += 95.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1221.0) {
                                                            if (x[1] <= 1712.0) {
                                                                if (x[0] <= 2923.0) {
                                                                    if (x[2] <= 810.0) {
                                                                        y_pred += 80.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1549.0) {
                                                                            if (x[2] <= 838.5) {
                                                                                y_pred += 73.0;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 878.0) {
                                                                                    y_pred += 70.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 71.0;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 75.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 88.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1565.0) {
                                                        if (x[1] <= 1474.0) {
                                                            y_pred += 77.0;
                                                        }

                                                        else {
                                                            y_pred += 81.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1688.0) {
                                                            y_pred += 64.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2784.5) {
                                                                y_pred += 73.0;
                                                            }

                                                            else {
                                                                y_pred += 76.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1945.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    if (x[2] <= 1875.0) {
                                                        y_pred += 85.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3090.0) {
                                                if (x[1] <= 1526.5) {
                                                    y_pred += 106.0;
                                                }

                                                else {
                                                    y_pred += 120.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 3493.0) {
                                                    if (x[1] <= 1650.5) {
                                                        if (x[1] <= 1172.5) {
                                                            y_pred += 76.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1286.5) {
                                                                y_pred += 69.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 2098.5) {
                                                            y_pred += 80.0;
                                                        }

                                                        else {
                                                            y_pred += 75.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 88.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1750.5) {
                                    y_pred += 78.0;
                                }

                                else {
                                    if (x[1] <= 2176.5) {
                                        y_pred += 103.0;
                                    }

                                    else {
                                        y_pred += 106.0;
                                    }
                                }
                            }
                        }

                        // tree #22
                        if (x[0] <= 2172.0) {
                            if (x[1] <= 1087.0) {
                                if (x[1] <= 900.0) {
                                    if (x[0] <= 2119.0) {
                                        if (x[2] <= 536.5) {
                                            y_pred += 80.0;
                                        }

                                        else {
                                            if (x[1] <= 757.5) {
                                                y_pred += 105.0;
                                            }

                                            else {
                                                if (x[2] <= 621.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 766.5) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            y_pred += 79.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 912.5) {
                                        y_pred += 121.0;
                                    }

                                    else {
                                        if (x[1] <= 1068.5) {
                                            if (x[1] <= 993.0) {
                                                if (x[1] <= 924.5) {
                                                    y_pred += 94.0;
                                                }

                                                else {
                                                    y_pred += 110.0;
                                                }
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }

                                        else {
                                            y_pred += 114.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 725.5) {
                                    if (x[2] <= 576.0) {
                                        y_pred += 91.0;
                                    }

                                    else {
                                        y_pred += 100.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 1750.5) {
                                        if (x[2] <= 2260.0) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1888.5) {
                                            y_pred += 103.0;
                                        }

                                        else {
                                            if (x[0] <= 2018.5) {
                                                y_pred += 72.0;
                                            }

                                            else {
                                                if (x[1] <= 1294.5) {
                                                    y_pred += 88.0;
                                                }

                                                else {
                                                    if (x[2] <= 1502.0) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2430.0) {
                                if (x[2] <= 604.5) {
                                    y_pred += 58.0;
                                }

                                else {
                                    if (x[0] <= 2386.5) {
                                        if (x[2] <= 649.5) {
                                            y_pred += 88.0;
                                        }

                                        else {
                                            if (x[0] <= 2191.0) {
                                                y_pred += 66.0;
                                            }

                                            else {
                                                if (x[1] <= 921.5) {
                                                    if (x[0] <= 2221.0) {
                                                        y_pred += 67.0;
                                                    }

                                                    else {
                                                        y_pred += 71.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1018.5) {
                                                        if (x[2] <= 730.0) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            y_pred += 89.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1080.0) {
                                                            if (x[2] <= 698.5) {
                                                                y_pred += 70.0;
                                                            }

                                                            else {
                                                                y_pred += 85.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2300.5) {
                                                                if (x[1] <= 1422.5) {
                                                                    if (x[1] <= 1227.5) {
                                                                        y_pred += 84.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 82.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 78.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 90.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 64.0;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2490.5) {
                                    if (x[1] <= 1252.0) {
                                        y_pred += 115.0;
                                    }

                                    else {
                                        if (x[2] <= 1725.5) {
                                            y_pred += 95.0;
                                        }

                                        else {
                                            y_pred += 106.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 798.5) {
                                        if (x[2] <= 674.0) {
                                            if (x[2] <= 606.5) {
                                                if (x[2] <= 572.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2873.5) {
                                                if (x[2] <= 752.5) {
                                                    if (x[1] <= 940.5) {
                                                        y_pred += 106.0;
                                                    }

                                                    else {
                                                        y_pred += 101.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 784.5) {
                                                        y_pred += 93.0;
                                                    }

                                                    else {
                                                        y_pred += 95.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 3196.5) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1402.5) {
                                            if (x[0] <= 3238.0) {
                                                if (x[1] <= 1111.0) {
                                                    y_pred += 70.0;
                                                }

                                                else {
                                                    if (x[2] <= 922.5) {
                                                        y_pred += 69.0;
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 76.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2958.0) {
                                                if (x[0] <= 2739.0) {
                                                    if (x[1] <= 1634.5) {
                                                        if (x[0] <= 2543.5) {
                                                            y_pred += 82.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 810.0) {
                                                                y_pred += 80.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 860.5) {
                                                                    y_pred += 73.0;
                                                                }

                                                                else {
                                                                    y_pred += 71.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1840.5) {
                                                            y_pred += 88.0;
                                                        }

                                                        else {
                                                            y_pred += 85.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1221.0) {
                                                        if (x[0] <= 2923.0) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2857.0) {
                                                            if (x[2] <= 1467.0) {
                                                                y_pred += 76.0;
                                                            }

                                                            else {
                                                                y_pred += 73.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1355.5) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                y_pred += 81.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1682.5) {
                                                    if (x[0] <= 3017.5) {
                                                        y_pred += 106.0;
                                                    }

                                                    else {
                                                        y_pred += 120.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1823.0) {
                                                        y_pred += 88.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 3252.0) {
                                                            y_pred += 75.0;
                                                        }

                                                        else {
                                                            y_pred += 80.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #23
                        if (x[0] <= 2172.0) {
                            if (x[0] <= 1975.0) {
                                if (x[1] <= 1149.0) {
                                    if (x[0] <= 1907.0) {
                                        if (x[1] <= 1073.5) {
                                            y_pred += 71.0;
                                        }

                                        else {
                                            y_pred += 72.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 551.5) {
                                            y_pred += 80.0;
                                        }

                                        else {
                                            y_pred += 87.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1750.5) {
                                        if (x[2] <= 2260.0) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 1665.0) {
                                            y_pred += 91.0;
                                        }

                                        else {
                                            y_pred += 103.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2119.0) {
                                    if (x[0] <= 2021.0) {
                                        if (x[2] <= 628.5) {
                                            y_pred += 100.0;
                                        }

                                        else {
                                            y_pred += 91.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2081.0) {
                                            y_pred += 121.0;
                                        }

                                        else {
                                            y_pred += 105.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2143.0) {
                                        if (x[0] <= 2132.0) {
                                            if (x[2] <= 541.5) {
                                                y_pred += 77.0;
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1606.5) {
                                                y_pred += 83.0;
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2157.0) {
                                            if (x[0] <= 2150.5) {
                                                if (x[0] <= 2144.5) {
                                                    y_pred += 110.0;
                                                }

                                                else {
                                                    y_pred += 88.0;
                                                }
                                            }

                                            else {
                                                y_pred += 114.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1492.0) {
                                                y_pred += 94.0;
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 2060.0) {
                                if (x[0] <= 2430.0) {
                                    if (x[1] <= 921.5) {
                                        if (x[1] <= 787.0) {
                                            y_pred += 88.0;
                                        }

                                        else {
                                            if (x[2] <= 636.0) {
                                                y_pred += 58.0;
                                            }

                                            else {
                                                if (x[0] <= 2221.0) {
                                                    y_pred += 67.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2386.5) {
                                            if (x[2] <= 698.5) {
                                                y_pred += 70.0;
                                            }

                                            else {
                                                if (x[1] <= 1001.5) {
                                                    if (x[2] <= 730.0) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        y_pred += 89.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 757.5) {
                                                        if (x[0] <= 2204.0) {
                                                            y_pred += 66.0;
                                                        }

                                                        else {
                                                            y_pred += 85.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 938.5) {
                                                            if (x[2] <= 770.0) {
                                                                y_pred += 84.0;
                                                            }

                                                            else {
                                                                y_pred += 90.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1104.5) {
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

                                        else {
                                            y_pred += 64.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 751.5) {
                                        if (x[1] <= 956.0) {
                                            if (x[1] <= 890.0) {
                                                if (x[2] <= 644.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 106.0;
                                                }
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 626.5) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[1] <= 1006.5) {
                                                    y_pred += 115.0;
                                                }

                                                else {
                                                    y_pred += 101.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2554.0) {
                                            if (x[2] <= 1206.0) {
                                                y_pred += 95.0;
                                            }

                                            else {
                                                y_pred += 82.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2958.0) {
                                                if (x[1] <= 1434.5) {
                                                    if (x[0] <= 2675.0) {
                                                        y_pred += 73.0;
                                                    }

                                                    else {
                                                        y_pred += 70.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2739.0) {
                                                        if (x[2] <= 785.0) {
                                                            y_pred += 93.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 904.5) {
                                                                if (x[1] <= 1509.0) {
                                                                    y_pred += 71.0;
                                                                }

                                                                else {
                                                                    y_pred += 80.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1840.5) {
                                                                    y_pred += 88.0;
                                                                }

                                                                else {
                                                                    y_pred += 85.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2950.5) {
                                                            if (x[2] <= 1221.0) {
                                                                if (x[2] <= 1122.5) {
                                                                    y_pred += 75.0;
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2857.0) {
                                                                    if (x[0] <= 2784.5) {
                                                                        y_pred += 73.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 76.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 81.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 3090.0) {
                                                    if (x[1] <= 1244.5) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 1049.5) {
                                                            y_pred += 106.0;
                                                        }

                                                        else {
                                                            y_pred += 120.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1462.0) {
                                                        if (x[0] <= 3238.0) {
                                                            if (x[1] <= 1286.5) {
                                                                y_pred += 69.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 76.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1286.5) {
                                                            if (x[0] <= 3506.0) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                y_pred += 88.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 2098.5) {
                                                                y_pred += 80.0;
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
                                y_pred += 106.0;
                            }
                        }

                        // tree #24
                        if (x[0] <= 2172.0) {
                            if (x[2] <= 893.5) {
                                if (x[0] <= 1975.0) {
                                    if (x[0] <= 1865.0) {
                                        y_pred += 71.0;
                                    }

                                    else {
                                        if (x[1] <= 816.0) {
                                            y_pred += 80.0;
                                        }

                                        else {
                                            if (x[1] <= 1049.0) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 900.0) {
                                        if (x[1] <= 649.5) {
                                            y_pred += 105.0;
                                        }

                                        else {
                                            if (x[2] <= 623.5) {
                                                if (x[1] <= 766.5) {
                                                    y_pred += 77.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1102.0) {
                                            if (x[2] <= 620.0) {
                                                y_pred += 94.0;
                                            }

                                            else {
                                                if (x[1] <= 919.0) {
                                                    y_pred += 121.0;
                                                }

                                                else {
                                                    if (x[1] <= 1006.5) {
                                                        y_pred += 110.0;
                                                    }

                                                    else {
                                                        y_pred += 114.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2065.0) {
                                                y_pred += 100.0;
                                            }

                                            else {
                                                y_pred += 88.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 1807.5) {
                                    if (x[2] <= 927.5) {
                                        y_pred += 72.0;
                                    }

                                    else {
                                        if (x[2] <= 1254.5) {
                                            y_pred += 83.0;
                                        }

                                        else {
                                            y_pred += 77.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 2861.0) {
                                        if (x[2] <= 2513.0) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            y_pred += 103.0;
                                        }
                                    }

                                    else {
                                        y_pred += 78.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2108.5) {
                                if (x[0] <= 2430.0) {
                                    if (x[0] <= 2384.0) {
                                        if (x[2] <= 649.5) {
                                            y_pred += 88.0;
                                        }

                                        else {
                                            if (x[2] <= 698.5) {
                                                if (x[0] <= 2250.0) {
                                                    y_pred += 71.0;
                                                }

                                                else {
                                                    y_pred += 70.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 748.5) {
                                                    if (x[2] <= 730.0) {
                                                        if (x[2] <= 708.5) {
                                                            y_pred += 85.0;
                                                        }

                                                        else {
                                                            y_pred += 84.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 89.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 757.5) {
                                                        y_pred += 66.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1008.5) {
                                                            y_pred += 67.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1254.5) {
                                                                if (x[1] <= 1128.0) {
                                                                    y_pred += 84.0;
                                                                }

                                                                else {
                                                                    y_pred += 90.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1104.5) {
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
                                    }

                                    else {
                                        if (x[1] <= 1216.5) {
                                            y_pred += 58.0;
                                        }

                                        else {
                                            y_pred += 64.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2622.5) {
                                        if (x[1] <= 1365.5) {
                                            if (x[1] <= 829.5) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                if (x[0] <= 2501.0) {
                                                    y_pred += 115.0;
                                                }

                                                else {
                                                    if (x[2] <= 657.5) {
                                                        y_pred += 91.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 766.0) {
                                                            if (x[1] <= 940.5) {
                                                                y_pred += 106.0;
                                                            }

                                                            else {
                                                                y_pred += 101.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 95.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2479.0) {
                                                y_pred += 95.0;
                                            }

                                            else {
                                                if (x[0] <= 2543.5) {
                                                    y_pred += 82.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2958.0) {
                                            if (x[2] <= 785.0) {
                                                if (x[0] <= 2652.5) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    y_pred += 93.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1647.5) {
                                                    if (x[2] <= 882.5) {
                                                        if (x[1] <= 1492.0) {
                                                            if (x[0] <= 2675.0) {
                                                                y_pred += 73.0;
                                                            }

                                                            else {
                                                                y_pred += 70.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 80.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1712.0) {
                                                            if (x[2] <= 1269.5) {
                                                                if (x[0] <= 2923.0) {
                                                                    y_pred += 75.0;
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 81.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1755.0) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1858.5) {
                                                                    if (x[2] <= 1467.0) {
                                                                        y_pred += 76.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 73.0;
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
                                                    y_pred += 85.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 951.5) {
                                                if (x[1] <= 1462.0) {
                                                    if (x[0] <= 3089.0) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 3238.0) {
                                                            if (x[1] <= 1286.5) {
                                                                y_pred += 69.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 76.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 3163.5) {
                                                    if (x[1] <= 1526.5) {
                                                        y_pred += 106.0;
                                                    }

                                                    else {
                                                        y_pred += 120.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 3472.0) {
                                                        y_pred += 80.0;
                                                    }

                                                    else {
                                                        y_pred += 88.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2268.5) {
                                    y_pred += 106.0;
                                }

                                else {
                                    y_pred += 75.0;
                                }
                            }
                        }

                        // tree #25
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[2] <= 798.5) {
                                if (x[0] <= 2439.0) {
                                    if (x[0] <= 2172.0) {
                                        if (x[1] <= 892.5) {
                                            if (x[0] <= 2043.5) {
                                                if (x[1] <= 816.0) {
                                                    y_pred += 80.0;
                                                }

                                                else {
                                                    y_pred += 87.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 766.5) {
                                                    y_pred += 77.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1865.0) {
                                                y_pred += 71.0;
                                            }

                                            else {
                                                if (x[1] <= 900.0) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    if (x[0] <= 2015.5) {
                                                        if (x[1] <= 1164.0) {
                                                            y_pred += 100.0;
                                                        }

                                                        else {
                                                            y_pred += 91.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 912.5) {
                                                            y_pred += 121.0;
                                                        }

                                                        else {
                                                            if (x[1] <= 1000.0) {
                                                                y_pred += 94.0;
                                                            }

                                                            else {
                                                                y_pred += 114.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2384.0) {
                                            if (x[2] <= 757.5) {
                                                if (x[1] <= 1001.5) {
                                                    if (x[1] <= 910.0) {
                                                        if (x[1] <= 809.0) {
                                                            y_pred += 88.0;
                                                        }

                                                        else {
                                                            y_pred += 71.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2284.5) {
                                                            y_pred += 89.0;
                                                        }

                                                        else {
                                                            y_pred += 84.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1042.0) {
                                                        y_pred += 66.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 698.5) {
                                                            y_pred += 70.0;
                                                        }

                                                        else {
                                                            y_pred += 85.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 770.0) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 90.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 58.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 643.0) {
                                        if (x[1] <= 1098.0) {
                                            if (x[0] <= 2596.0) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }

                                        else {
                                            y_pred += 91.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 751.5) {
                                            if (x[2] <= 694.0) {
                                                y_pred += 115.0;
                                            }

                                            else {
                                                if (x[1] <= 940.5) {
                                                    y_pred += 106.0;
                                                }

                                                else {
                                                    y_pred += 101.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2873.5) {
                                                if (x[1] <= 1374.5) {
                                                    y_pred += 95.0;
                                                }

                                                else {
                                                    y_pred += 93.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1303.0) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1632.0) {
                                    if (x[1] <= 1567.5) {
                                        if (x[2] <= 861.5) {
                                            if (x[1] <= 1097.5) {
                                                if (x[1] <= 976.0) {
                                                    y_pred += 67.0;
                                                }

                                                else {
                                                    y_pred += 70.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2670.0) {
                                                    y_pred += 73.0;
                                                }

                                                else {
                                                    if (x[0] <= 2990.5) {
                                                        y_pred += 80.0;
                                                    }

                                                    else {
                                                        y_pred += 76.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1011.5) {
                                                y_pred += 110.0;
                                            }

                                            else {
                                                if (x[2] <= 951.5) {
                                                    if (x[0] <= 2355.5) {
                                                        if (x[2] <= 886.5) {
                                                            y_pred += 88.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2018.5) {
                                                                y_pred += 72.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 925.0) {
                                                            if (x[0] <= 2872.0) {
                                                                y_pred += 71.0;
                                                            }

                                                            else {
                                                                y_pred += 69.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 68.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1419.0) {
                                                        if (x[1] <= 1378.0) {
                                                            y_pred += 82.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2014.0) {
                                                                y_pred += 77.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1028.0) {
                                                            y_pred += 106.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2333.0) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1531.0) {
                                                                    y_pred += 95.0;
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
                                    }

                                    else {
                                        if (x[0] <= 2660.0) {
                                            y_pred += 64.0;
                                        }

                                        else {
                                            y_pred += 75.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1669.5) {
                                        y_pred += 120.0;
                                    }

                                    else {
                                        if (x[2] <= 1921.0) {
                                            if (x[2] <= 1022.0) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                if (x[0] <= 3472.0) {
                                                    if (x[0] <= 2703.0) {
                                                        y_pred += 85.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 3252.0) {
                                                            if (x[1] <= 1800.0) {
                                                                if (x[2] <= 1367.5) {
                                                                    y_pred += 68.0;
                                                                }

                                                                else {
                                                                    y_pred += 73.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 3082.0) {
                                                                    if (x[2] <= 1320.5) {
                                                                        y_pred += 83.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 76.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 75.0;
                                                                }
                                                            }
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
                                        }

                                        else {
                                            if (x[1] <= 2256.0) {
                                                if (x[0] <= 2302.5) {
                                                    if (x[2] <= 2513.0) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 103.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 106.0;
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

                        // tree #26
                        if (x[0] <= 2172.0) {
                            if (x[0] <= 1975.0) {
                                if (x[0] <= 1859.0) {
                                    if (x[1] <= 1228.5) {
                                        y_pred += 71.0;
                                    }

                                    else {
                                        if (x[0] <= 1563.0) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1149.0) {
                                        if (x[2] <= 738.0) {
                                            if (x[2] <= 551.5) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }

                                        else {
                                            y_pred += 72.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 1665.0) {
                                            y_pred += 91.0;
                                        }

                                        else {
                                            y_pred += 103.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 524.5) {
                                    y_pred += 77.0;
                                }

                                else {
                                    if (x[0] <= 2119.0) {
                                        if (x[2] <= 711.5) {
                                            if (x[0] <= 2056.0) {
                                                if (x[1] <= 1007.5) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 100.0;
                                                }
                                            }

                                            else {
                                                y_pred += 105.0;
                                            }
                                        }

                                        else {
                                            y_pred += 121.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 915.0) {
                                            if (x[2] <= 580.0) {
                                                y_pred += 79.0;
                                            }

                                            else {
                                                if (x[1] <= 1182.0) {
                                                    if (x[1] <= 924.5) {
                                                        y_pred += 94.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1006.5) {
                                                            y_pred += 110.0;
                                                        }

                                                        else {
                                                            y_pred += 114.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 88.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2150.0) {
                                                if (x[2] <= 1606.5) {
                                                    y_pred += 83.0;
                                                }

                                                else {
                                                    y_pred += 87.0;
                                                }
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2108.5) {
                                if (x[0] <= 2430.0) {
                                    if (x[1] <= 921.5) {
                                        if (x[1] <= 787.0) {
                                            y_pred += 88.0;
                                        }

                                        else {
                                            if (x[0] <= 2327.0) {
                                                if (x[0] <= 2221.0) {
                                                    y_pred += 67.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }

                                            else {
                                                y_pred += 58.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2386.5) {
                                            if (x[2] <= 698.5) {
                                                y_pred += 70.0;
                                            }

                                            else {
                                                if (x[1] <= 1001.5) {
                                                    if (x[2] <= 730.0) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        y_pred += 89.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 757.5) {
                                                        if (x[1] <= 1042.0) {
                                                            y_pred += 66.0;
                                                        }

                                                        else {
                                                            y_pred += 85.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2300.5) {
                                                            if (x[1] <= 1422.5) {
                                                                if (x[0] <= 2228.0) {
                                                                    y_pred += 84.0;
                                                                }

                                                                else {
                                                                    y_pred += 82.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 90.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 64.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 751.5) {
                                        if (x[2] <= 643.0) {
                                            if (x[2] <= 606.5) {
                                                if (x[0] <= 2591.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 694.0) {
                                                y_pred += 115.0;
                                            }

                                            else {
                                                if (x[2] <= 729.5) {
                                                    y_pred += 101.0;
                                                }

                                                else {
                                                    y_pred += 106.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2554.0) {
                                            if (x[0] <= 2479.0) {
                                                y_pred += 95.0;
                                            }

                                            else {
                                                if (x[2] <= 1046.0) {
                                                    y_pred += 95.0;
                                                }

                                                else {
                                                    y_pred += 82.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1403.5) {
                                                if (x[1] <= 1172.5) {
                                                    if (x[0] <= 2881.0) {
                                                        y_pred += 70.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 790.5) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            y_pred += 76.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 922.5) {
                                                        y_pred += 69.0;
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1320.5) {
                                                    if (x[0] <= 2956.5) {
                                                        if (x[2] <= 785.0) {
                                                            y_pred += 93.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1221.0) {
                                                                if (x[0] <= 2923.0) {
                                                                    if (x[2] <= 904.5) {
                                                                        if (x[0] <= 2670.0) {
                                                                            if (x[1] <= 1450.0) {
                                                                                y_pred += 73.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 71.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 80.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1009.5) {
                                                                            y_pred += 88.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 75.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1682.5) {
                                                            if (x[0] <= 3197.5) {
                                                                if (x[1] <= 1526.5) {
                                                                    y_pred += 106.0;
                                                                }

                                                                else {
                                                                    y_pred += 120.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 88.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1938.5) {
                                                        if (x[2] <= 1502.0) {
                                                            if (x[2] <= 1351.5) {
                                                                y_pred += 76.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 3104.0) {
                                                                    y_pred += 81.0;
                                                                }

                                                                else {
                                                                    y_pred += 80.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 73.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 85.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2268.5) {
                                    y_pred += 106.0;
                                }

                                else {
                                    y_pred += 75.0;
                                }
                            }
                        }

                        // tree #27
                        if (x[0] <= 2172.0) {
                            if (x[1] <= 1087.0) {
                                if (x[1] <= 900.0) {
                                    if (x[1] <= 649.5) {
                                        y_pred += 105.0;
                                    }

                                    else {
                                        if (x[0] <= 2059.0) {
                                            if (x[0] <= 1942.0) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                if (x[0] <= 1980.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 541.5) {
                                                y_pred += 77.0;
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 640.0) {
                                        if (x[1] <= 986.5) {
                                            y_pred += 94.0;
                                        }

                                        else {
                                            y_pred += 71.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2095.0) {
                                            y_pred += 121.0;
                                        }

                                        else {
                                            if (x[0] <= 2150.0) {
                                                y_pred += 110.0;
                                            }

                                            else {
                                                y_pred += 114.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 725.5) {
                                    if (x[2] <= 576.0) {
                                        y_pred += 91.0;
                                    }

                                    else {
                                        y_pred += 100.0;
                                    }
                                }

                                else {
                                    if (x[1] <= 1187.0) {
                                        y_pred += 72.0;
                                    }

                                    else {
                                        if (x[2] <= 2861.0) {
                                            if (x[1] <= 2082.5) {
                                                if (x[2] <= 1807.5) {
                                                    if (x[2] <= 1254.5) {
                                                        if (x[1] <= 1294.5) {
                                                            y_pred += 88.0;
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 77.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 87.0;
                                                }
                                            }

                                            else {
                                                y_pred += 103.0;
                                            }
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 2108.5) {
                                if (x[0] <= 2430.0) {
                                    if (x[1] <= 921.5) {
                                        if (x[2] <= 604.5) {
                                            y_pred += 58.0;
                                        }

                                        else {
                                            if (x[2] <= 649.5) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                if (x[0] <= 2221.0) {
                                                    y_pred += 67.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2386.5) {
                                            if (x[1] <= 1001.5) {
                                                if (x[2] <= 730.0) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 89.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 757.5) {
                                                    if (x[0] <= 2204.0) {
                                                        y_pred += 66.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2247.5) {
                                                            y_pred += 85.0;
                                                        }

                                                        else {
                                                            y_pred += 70.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1254.5) {
                                                        if (x[2] <= 770.0) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            y_pred += 90.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1422.5) {
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
                                            y_pred += 64.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2622.5) {
                                        if (x[1] <= 1365.5) {
                                            if (x[1] <= 829.5) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                if (x[2] <= 626.5) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    if (x[1] <= 1006.5) {
                                                        if (x[1] <= 922.0) {
                                                            y_pred += 106.0;
                                                        }

                                                        else {
                                                            y_pred += 115.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 761.5) {
                                                            y_pred += 101.0;
                                                        }

                                                        else {
                                                            y_pred += 95.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2479.0) {
                                                y_pred += 95.0;
                                            }

                                            else {
                                                if (x[0] <= 2543.5) {
                                                    y_pred += 82.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1403.5) {
                                            if (x[1] <= 1172.5) {
                                                if (x[0] <= 2660.0) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    if (x[2] <= 834.0) {
                                                        if (x[1] <= 1114.0) {
                                                            y_pred += 79.0;
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

                                            else {
                                                if (x[2] <= 922.5) {
                                                    y_pred += 69.0;
                                                }

                                                else {
                                                    y_pred += 68.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1255.5) {
                                                if (x[2] <= 1140.5) {
                                                    if (x[0] <= 2956.5) {
                                                        if (x[0] <= 2802.0) {
                                                            if (x[1] <= 1434.5) {
                                                                y_pred += 73.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2680.5) {
                                                                    y_pred += 93.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1634.5) {
                                                                        y_pred += 80.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 88.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1668.5) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1478.5) {
                                                            y_pred += 106.0;
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 3379.5) {
                                                        y_pred += 120.0;
                                                    }

                                                    else {
                                                        y_pred += 88.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2703.0) {
                                                    y_pred += 85.0;
                                                }

                                                else {
                                                    if (x[0] <= 2857.0) {
                                                        if (x[1] <= 1800.0) {
                                                            y_pred += 73.0;
                                                        }

                                                        else {
                                                            y_pred += 76.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1911.5) {
                                                            if (x[1] <= 1727.5) {
                                                                y_pred += 81.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 80.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2268.5) {
                                    y_pred += 106.0;
                                }

                                else {
                                    y_pred += 75.0;
                                }
                            }
                        }

                        // tree #28
                        if (x[2] <= 798.5) {
                            if (x[2] <= 640.0) {
                                if (x[0] <= 1865.0) {
                                    y_pred += 71.0;
                                }

                                else {
                                    if (x[2] <= 590.5) {
                                        if (x[2] <= 536.5) {
                                            if (x[1] <= 708.0) {
                                                y_pred += 77.0;
                                            }

                                            else {
                                                y_pred += 80.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2119.0) {
                                                if (x[2] <= 554.0) {
                                                    y_pred += 105.0;
                                                }

                                                else {
                                                    if (x[2] <= 577.0) {
                                                        if (x[1] <= 1049.0) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 91.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 100.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 887.5) {
                                                    if (x[1] <= 830.0) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 79.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2392.5) {
                                                        y_pred += 94.0;
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 787.0) {
                                            y_pred += 88.0;
                                        }

                                        else {
                                            if (x[0] <= 2522.5) {
                                                y_pred += 58.0;
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1006.5) {
                                    if (x[0] <= 2401.0) {
                                        if (x[2] <= 749.0) {
                                            if (x[0] <= 2231.5) {
                                                if (x[0] <= 2111.5) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 89.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 696.5) {
                                                    y_pred += 71.0;
                                                }

                                                else {
                                                    y_pred += 84.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 121.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 698.5) {
                                            y_pred += 115.0;
                                        }

                                        else {
                                            y_pred += 106.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 673.0) {
                                        y_pred += 114.0;
                                    }

                                    else {
                                        if (x[0] <= 2307.0) {
                                            if (x[0] <= 2191.0) {
                                                y_pred += 66.0;
                                            }

                                            else {
                                                if (x[1] <= 1080.0) {
                                                    if (x[2] <= 698.5) {
                                                        y_pred += 70.0;
                                                    }

                                                    else {
                                                        y_pred += 85.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 84.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 747.0) {
                                                y_pred += 101.0;
                                            }

                                            else {
                                                if (x[0] <= 2873.5) {
                                                    if (x[1] <= 1234.0) {
                                                        y_pred += 90.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1374.5) {
                                                            y_pred += 95.0;
                                                        }

                                                        else {
                                                            y_pred += 93.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1303.0) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        y_pred += 83.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 2298.5) {
                                if (x[1] <= 923.5) {
                                    y_pred += 67.0;
                                }

                                else {
                                    if (x[0] <= 3090.0) {
                                        if (x[2] <= 861.5) {
                                            if (x[0] <= 2688.0) {
                                                if (x[1] <= 1492.0) {
                                                    y_pred += 73.0;
                                                }

                                                else {
                                                    y_pred += 80.0;
                                                }
                                            }

                                            else {
                                                y_pred += 70.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1011.5) {
                                                y_pred += 110.0;
                                            }

                                            else {
                                                if (x[1] <= 1187.0) {
                                                    y_pred += 72.0;
                                                }

                                                else {
                                                    if (x[2] <= 1220.0) {
                                                        if (x[1] <= 1669.5) {
                                                            if (x[0] <= 2930.5) {
                                                                if (x[1] <= 1573.5) {
                                                                    if (x[1] <= 1503.5) {
                                                                        if (x[0] <= 2408.5) {
                                                                            if (x[1] <= 1294.5) {
                                                                                y_pred += 88.0;
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 2185.5) {
                                                                                    y_pred += 83.0;
                                                                                }

                                                                                else {
                                                                                    if (x[1] <= 1422.5) {
                                                                                        y_pred += 82.0;
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 78.0;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 71.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 95.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 75.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1526.5) {
                                                                    y_pred += 106.0;
                                                                }

                                                                else {
                                                                    y_pred += 120.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1712.0) {
                                                                y_pred += 68.0;
                                                            }

                                                            else {
                                                                y_pred += 88.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1858.5) {
                                                            if (x[0] <= 2472.0) {
                                                                if (x[1] <= 1493.0) {
                                                                    y_pred += 77.0;
                                                                }

                                                                else {
                                                                    y_pred += 64.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2646.0) {
                                                                    y_pred += 82.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2875.0) {
                                                                        if (x[1] <= 1800.0) {
                                                                            y_pred += 73.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 76.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 81.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1875.0) {
                                                                if (x[0] <= 2775.5) {
                                                                    y_pred += 85.0;
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 87.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1559.5) {
                                            if (x[2] <= 853.5) {
                                                y_pred += 76.0;
                                            }

                                            else {
                                                if (x[0] <= 3143.5) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    y_pred += 69.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 3472.0) {
                                                if (x[1] <= 2098.5) {
                                                    y_pred += 80.0;
                                                }

                                                else {
                                                    y_pred += 75.0;
                                                }
                                            }

                                            else {
                                                y_pred += 88.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2256.0) {
                                    if (x[2] <= 2547.5) {
                                        y_pred += 106.0;
                                    }

                                    else {
                                        y_pred += 103.0;
                                    }
                                }

                                else {
                                    y_pred += 78.0;
                                }
                            }
                        }

                        // tree #29
                        if (x[2] <= 798.5) {
                            if (x[2] <= 640.0) {
                                if (x[2] <= 590.5) {
                                    if (x[1] <= 649.5) {
                                        y_pred += 105.0;
                                    }

                                    else {
                                        if (x[0] <= 2144.5) {
                                            if (x[0] <= 2053.5) {
                                                if (x[0] <= 1975.0) {
                                                    if (x[2] <= 550.5) {
                                                        y_pred += 80.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 569.0) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 100.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 541.5) {
                                                    y_pred += 77.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2366.0) {
                                                y_pred += 94.0;
                                            }

                                            else {
                                                if (x[2] <= 572.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 787.0) {
                                        y_pred += 88.0;
                                    }

                                    else {
                                        if (x[1] <= 886.5) {
                                            y_pred += 58.0;
                                        }

                                        else {
                                            if (x[2] <= 624.5) {
                                                y_pred += 79.0;
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2166.5) {
                                    if (x[2] <= 711.5) {
                                        if (x[0] <= 2076.0) {
                                            y_pred += 91.0;
                                        }

                                        else {
                                            y_pred += 114.0;
                                        }
                                    }

                                    else {
                                        y_pred += 121.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 2346.0) {
                                        if (x[2] <= 698.5) {
                                            if (x[2] <= 686.5) {
                                                y_pred += 71.0;
                                            }

                                            else {
                                                y_pred += 70.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2191.0) {
                                                y_pred += 66.0;
                                            }

                                            else {
                                                if (x[0] <= 2229.0) {
                                                    if (x[1] <= 1039.5) {
                                                        y_pred += 89.0;
                                                    }

                                                    else {
                                                        y_pred += 84.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 993.0) {
                                                        y_pred += 84.0;
                                                    }

                                                    else {
                                                        y_pred += 85.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 751.5) {
                                            if (x[1] <= 1006.5) {
                                                if (x[0] <= 2529.5) {
                                                    y_pred += 115.0;
                                                }

                                                else {
                                                    y_pred += 106.0;
                                                }
                                            }

                                            else {
                                                y_pred += 101.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2873.5) {
                                                if (x[0] <= 2446.0) {
                                                    y_pred += 90.0;
                                                }

                                                else {
                                                    if (x[0] <= 2610.0) {
                                                        y_pred += 95.0;
                                                    }

                                                    else {
                                                        y_pred += 93.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 3196.5) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 3090.0) {
                                if (x[2] <= 861.5) {
                                    if (x[2] <= 810.0) {
                                        y_pred += 80.0;
                                    }

                                    else {
                                        if (x[1] <= 976.0) {
                                            y_pred += 67.0;
                                        }

                                        else {
                                            if (x[2] <= 838.5) {
                                                y_pred += 73.0;
                                            }

                                            else {
                                                y_pred += 70.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2958.0) {
                                        if (x[1] <= 1011.5) {
                                            y_pred += 110.0;
                                        }

                                        else {
                                            if (x[2] <= 1875.0) {
                                                if (x[0] <= 2739.0) {
                                                    if (x[1] <= 1651.0) {
                                                        if (x[0] <= 2543.5) {
                                                            if (x[0] <= 2430.0) {
                                                                if (x[0] <= 2337.0) {
                                                                    if (x[1] <= 1187.0) {
                                                                        y_pred += 72.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1378.0) {
                                                                            if (x[2] <= 908.0) {
                                                                                y_pred += 88.0;
                                                                            }

                                                                            else {
                                                                                if (x[0] <= 2196.5) {
                                                                                    y_pred += 83.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 82.0;
                                                                                }
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[0] <= 1868.0) {
                                                                                y_pred += 77.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 78.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 64.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1206.0) {
                                                                    y_pred += 95.0;
                                                                }

                                                                else {
                                                                    y_pred += 82.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 71.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2671.0) {
                                                            y_pred += 85.0;
                                                        }

                                                        else {
                                                            y_pred += 88.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2950.5) {
                                                        if (x[2] <= 1221.0) {
                                                            if (x[1] <= 1668.5) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1858.5) {
                                                                if (x[1] <= 1800.0) {
                                                                    y_pred += 73.0;
                                                                }

                                                                else {
                                                                    y_pred += 76.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 81.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 2861.0) {
                                                    if (x[0] <= 2302.5) {
                                                        if (x[1] <= 2082.5) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 103.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 106.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 78.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1526.5) {
                                            y_pred += 106.0;
                                        }

                                        else {
                                            y_pred += 120.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1559.5) {
                                    if (x[0] <= 3238.0) {
                                        if (x[1] <= 1286.5) {
                                            y_pred += 69.0;
                                        }

                                        else {
                                            y_pred += 68.0;
                                        }
                                    }

                                    else {
                                        y_pred += 76.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 3472.0) {
                                        if (x[1] <= 2098.5) {
                                            y_pred += 80.0;
                                        }

                                        else {
                                            y_pred += 75.0;
                                        }
                                    }

                                    else {
                                        y_pred += 88.0;
                                    }
                                }
                            }
                        }

                        // tree #30
                        if (x[0] <= 2172.0) {
                            if (x[1] <= 1087.0) {
                                if (x[0] <= 1980.5) {
                                    if (x[0] <= 1877.5) {
                                        y_pred += 71.0;
                                    }

                                    else {
                                        if (x[1] <= 816.0) {
                                            y_pred += 80.0;
                                        }

                                        else {
                                            y_pred += 87.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 620.0) {
                                        if (x[0] <= 2119.0) {
                                            y_pred += 105.0;
                                        }

                                        else {
                                            if (x[1] <= 887.5) {
                                                if (x[1] <= 766.5) {
                                                    y_pred += 77.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }

                                            else {
                                                y_pred += 94.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2021.0) {
                                            y_pred += 91.0;
                                        }

                                        else {
                                            if (x[1] <= 919.0) {
                                                y_pred += 121.0;
                                            }

                                            else {
                                                if (x[2] <= 767.5) {
                                                    y_pred += 114.0;
                                                }

                                                else {
                                                    y_pred += 110.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1750.5) {
                                    if (x[0] <= 1563.0) {
                                        y_pred += 77.0;
                                    }

                                    else {
                                        y_pred += 78.0;
                                    }
                                }

                                else {
                                    if (x[1] <= 1107.0) {
                                        y_pred += 72.0;
                                    }

                                    else {
                                        if (x[1] <= 2082.5) {
                                            if (x[0] <= 2063.5) {
                                                if (x[1] <= 1164.0) {
                                                    y_pred += 100.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2143.5) {
                                                    if (x[2] <= 1606.5) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1461.0) {
                                                        y_pred += 88.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
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
                            if (x[1] <= 2108.5) {
                                if (x[1] <= 925.5) {
                                    if (x[1] <= 874.5) {
                                        if (x[2] <= 676.0) {
                                            if (x[2] <= 604.5) {
                                                if (x[1] <= 826.0) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 58.0;
                                                }
                                            }

                                            else {
                                                y_pred += 88.0;
                                            }
                                        }

                                        else {
                                            y_pred += 106.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2431.5) {
                                            if (x[2] <= 768.5) {
                                                y_pred += 71.0;
                                            }

                                            else {
                                                y_pred += 67.0;
                                            }
                                        }

                                        else {
                                            y_pred += 79.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1006.5) {
                                        if (x[0] <= 2401.0) {
                                            if (x[2] <= 730.0) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 89.0;
                                            }
                                        }

                                        else {
                                            y_pred += 115.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1229.0) {
                                            if (x[0] <= 2634.0) {
                                                if (x[0] <= 2307.0) {
                                                    if (x[1] <= 1042.0) {
                                                        y_pred += 66.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1080.0) {
                                                            if (x[2] <= 698.5) {
                                                                y_pred += 70.0;
                                                            }

                                                            else {
                                                                y_pred += 85.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 84.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2462.5) {
                                                        y_pred += 90.0;
                                                    }

                                                    else {
                                                        y_pred += 101.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 834.0) {
                                                    if (x[1] <= 1114.0) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        y_pred += 76.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1111.0) {
                                                        y_pred += 70.0;
                                                    }

                                                    else {
                                                        y_pred += 69.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1333.5) {
                                                if (x[0] <= 2580.0) {
                                                    y_pred += 95.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1320.5) {
                                                    if (x[2] <= 1140.5) {
                                                        if (x[0] <= 3036.5) {
                                                            if (x[1] <= 1426.5) {
                                                                if (x[1] <= 1387.0) {
                                                                    y_pred += 82.0;
                                                                }

                                                                else {
                                                                    y_pred += 106.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2802.0) {
                                                                    if (x[0] <= 2667.5) {
                                                                        if (x[2] <= 1110.5) {
                                                                            if (x[2] <= 1001.5) {
                                                                                if (x[1] <= 1450.0) {
                                                                                    y_pred += 73.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 71.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 78.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 95.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2680.5) {
                                                                            y_pred += 93.0;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 854.0) {
                                                                                y_pred += 80.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 88.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2923.0) {
                                                                        y_pred += 75.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 68.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 3216.5) {
                                                                y_pred += 68.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1175.0) {
                                                            y_pred += 120.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1249.0) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1663.5) {
                                                                    y_pred += 82.0;
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1647.5) {
                                                        if (x[2] <= 1384.0) {
                                                            if (x[2] <= 1351.5) {
                                                                y_pred += 76.0;
                                                            }

                                                            else {
                                                                y_pred += 80.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1401.5) {
                                                                y_pred += 64.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 1502.0) {
                                                                    y_pred += 81.0;
                                                                }

                                                                else {
                                                                    y_pred += 73.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 85.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 2060.0) {
                                    y_pred += 75.0;
                                }

                                else {
                                    y_pred += 106.0;
                                }
                            }
                        }

                        // tree #31
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[2] <= 798.5) {
                                if (x[0] <= 2439.0) {
                                    if (x[1] <= 1070.5) {
                                        if (x[1] <= 1001.5) {
                                            if (x[1] <= 900.0) {
                                                if (x[1] <= 874.5) {
                                                    if (x[0] <= 2358.0) {
                                                        if (x[1] <= 700.5) {
                                                            y_pred += 77.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 596.0) {
                                                                if (x[2] <= 553.5) {
                                                                    y_pred += 80.0;
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
                                                        y_pred += 58.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2116.0) {
                                                        if (x[0] <= 1980.5) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 91.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 71.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2106.5) {
                                                    y_pred += 121.0;
                                                }

                                                else {
                                                    if (x[2] <= 649.0) {
                                                        y_pred += 94.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2284.5) {
                                                            y_pred += 89.0;
                                                        }

                                                        else {
                                                            y_pred += 84.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 727.0) {
                                                if (x[1] <= 1057.0) {
                                                    y_pred += 71.0;
                                                }

                                                else {
                                                    if (x[2] <= 698.5) {
                                                        y_pred += 70.0;
                                                    }

                                                    else {
                                                        y_pred += 85.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 66.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 710.0) {
                                            if (x[0] <= 2070.5) {
                                                if (x[2] <= 576.0) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 100.0;
                                                }
                                            }

                                            else {
                                                y_pred += 114.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 770.0) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 90.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2608.5) {
                                        if (x[1] <= 829.5) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            if (x[2] <= 694.0) {
                                                y_pred += 115.0;
                                            }

                                            else {
                                                if (x[0] <= 2558.5) {
                                                    y_pred += 95.0;
                                                }

                                                else {
                                                    if (x[0] <= 2587.0) {
                                                        y_pred += 101.0;
                                                    }

                                                    else {
                                                        y_pred += 106.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1170.5) {
                                            y_pred += 79.0;
                                        }

                                        else {
                                            if (x[1] <= 1486.5) {
                                                if (x[0] <= 2648.0) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 93.0;
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
                                if (x[0] <= 3090.0) {
                                    if (x[1] <= 2082.5) {
                                        if (x[2] <= 861.5) {
                                            if (x[0] <= 2431.5) {
                                                y_pred += 67.0;
                                            }

                                            else {
                                                if (x[1] <= 1492.0) {
                                                    if (x[2] <= 838.5) {
                                                        y_pred += 73.0;
                                                    }

                                                    else {
                                                        y_pred += 70.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 80.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1011.5) {
                                                y_pred += 110.0;
                                            }

                                            else {
                                                if (x[1] <= 1187.0) {
                                                    y_pred += 72.0;
                                                }

                                                else {
                                                    if (x[2] <= 1220.0) {
                                                        if (x[1] <= 1669.5) {
                                                            if (x[0] <= 2930.5) {
                                                                if (x[0] <= 2501.5) {
                                                                    if (x[0] <= 2344.0) {
                                                                        if (x[0] <= 2187.0) {
                                                                            if (x[2] <= 908.0) {
                                                                                y_pred += 88.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 83.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[1] <= 1422.5) {
                                                                                y_pred += 82.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 78.0;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 95.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1549.0) {
                                                                        y_pred += 71.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 75.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1049.5) {
                                                                    y_pred += 106.0;
                                                                }

                                                                else {
                                                                    y_pred += 120.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1022.0) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1647.5) {
                                                            if (x[0] <= 2472.0) {
                                                                if (x[1] <= 1493.0) {
                                                                    y_pred += 77.0;
                                                                }

                                                                else {
                                                                    y_pred += 64.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1669.0) {
                                                                    if (x[0] <= 2736.5) {
                                                                        y_pred += 82.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 81.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 1320.5) {
                                                                        y_pred += 83.0;
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1800.0) {
                                                                            y_pred += 73.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 76.0;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1945.0) {
                                                                y_pred += 87.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 1875.0) {
                                                                    y_pred += 85.0;
                                                                }

                                                                else {
                                                                    y_pred += 87.0;
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
                                            if (x[0] <= 2164.5) {
                                                y_pred += 103.0;
                                            }

                                            else {
                                                y_pred += 106.0;
                                            }
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1559.5) {
                                        if (x[0] <= 3238.0) {
                                            if (x[1] <= 1286.5) {
                                                y_pred += 69.0;
                                            }

                                            else {
                                                y_pred += 68.0;
                                            }
                                        }

                                        else {
                                            y_pred += 76.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 1286.5) {
                                            y_pred += 88.0;
                                        }

                                        else {
                                            if (x[2] <= 1578.0) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                y_pred += 75.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #32
                        if (x[2] <= 798.5) {
                            if (x[1] <= 1075.5) {
                                if (x[1] <= 1040.0) {
                                    if (x[0] <= 2439.0) {
                                        if (x[0] <= 2119.0) {
                                            if (x[2] <= 711.5) {
                                                if (x[0] <= 2056.0) {
                                                    if (x[1] <= 816.0) {
                                                        y_pred += 80.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 621.5) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 91.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 105.0;
                                                }
                                            }

                                            else {
                                                y_pred += 121.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 748.5) {
                                                if (x[1] <= 905.5) {
                                                    if (x[1] <= 787.0) {
                                                        if (x[2] <= 563.5) {
                                                            y_pred += 77.0;
                                                        }

                                                        else {
                                                            y_pred += 88.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2327.0) {
                                                            if (x[0] <= 2179.0) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                y_pred += 71.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 58.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2197.0) {
                                                        y_pred += 94.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 952.5) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            y_pred += 89.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 66.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2613.0) {
                                            if (x[0] <= 2512.5) {
                                                y_pred += 115.0;
                                            }

                                            else {
                                                if (x[2] <= 639.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    if (x[0] <= 2587.0) {
                                                        y_pred += 101.0;
                                                    }

                                                    else {
                                                        y_pred += 106.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 79.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 698.5) {
                                        if (x[2] <= 659.0) {
                                            y_pred += 71.0;
                                        }

                                        else {
                                            y_pred += 70.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1064.0) {
                                            y_pred += 85.0;
                                        }

                                        else {
                                            y_pred += 79.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2180.5) {
                                    if (x[2] <= 619.0) {
                                        if (x[1] <= 1164.0) {
                                            y_pred += 100.0;
                                        }

                                        else {
                                            y_pred += 91.0;
                                        }
                                    }

                                    else {
                                        y_pred += 114.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 786.0) {
                                        if (x[1] <= 1486.5) {
                                            if (x[2] <= 768.5) {
                                                if (x[0] <= 2411.5) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 772.5) {
                                                    y_pred += 93.0;
                                                }

                                                else {
                                                    y_pred += 90.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 83.0;
                                        }
                                    }

                                    else {
                                        y_pred += 95.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 3090.0) {
                                if (x[1] <= 2082.5) {
                                    if (x[0] <= 2958.0) {
                                        if (x[2] <= 861.5) {
                                            if (x[1] <= 1492.0) {
                                                if (x[0] <= 2431.5) {
                                                    y_pred += 67.0;
                                                }

                                                else {
                                                    if (x[2] <= 838.5) {
                                                        y_pred += 73.0;
                                                    }

                                                    else {
                                                        y_pred += 70.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 80.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2193.5) {
                                                if (x[1] <= 1011.5) {
                                                    y_pred += 110.0;
                                                }

                                                else {
                                                    if (x[0] <= 2018.5) {
                                                        if (x[1] <= 1247.0) {
                                                            y_pred += 72.0;
                                                        }

                                                        else {
                                                            y_pred += 77.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 908.0) {
                                                            y_pred += 88.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1502.0) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                y_pred += 87.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1565.0) {
                                                    if (x[1] <= 1503.5) {
                                                        if (x[0] <= 2543.5) {
                                                            if (x[0] <= 2240.0) {
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

                                                    else {
                                                        if (x[2] <= 1261.0) {
                                                            y_pred += 95.0;
                                                        }

                                                        else {
                                                            y_pred += 81.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2529.0) {
                                                        y_pred += 64.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1712.0) {
                                                            if (x[1] <= 1668.5) {
                                                                y_pred += 75.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2739.0) {
                                                                if (x[2] <= 1302.0) {
                                                                    y_pred += 88.0;
                                                                }

                                                                else {
                                                                    y_pred += 85.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1858.5) {
                                                                    if (x[0] <= 2784.5) {
                                                                        y_pred += 73.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 76.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1526.5) {
                                            y_pred += 106.0;
                                        }

                                        else {
                                            y_pred += 120.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 1750.5) {
                                        y_pred += 78.0;
                                    }

                                    else {
                                        if (x[1] <= 2176.5) {
                                            y_pred += 103.0;
                                        }

                                        else {
                                            y_pred += 106.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 1077.0) {
                                    if (x[2] <= 853.5) {
                                        y_pred += 76.0;
                                    }

                                    else {
                                        if (x[0] <= 3143.5) {
                                            y_pred += 68.0;
                                        }

                                        else {
                                            y_pred += 69.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 1286.5) {
                                        y_pred += 88.0;
                                    }

                                    else {
                                        if (x[2] <= 1578.0) {
                                            y_pred += 80.0;
                                        }

                                        else {
                                            y_pred += 75.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #33
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[0] <= 2172.0) {
                                if (x[0] <= 1859.0) {
                                    if (x[1] <= 1228.5) {
                                        y_pred += 71.0;
                                    }

                                    else {
                                        if (x[0] <= 1563.0) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 892.5) {
                                        if (x[2] <= 551.5) {
                                            if (x[0] <= 2020.5) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                y_pred += 77.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2043.5) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1940.0) {
                                            if (x[0] <= 1894.5) {
                                                if (x[2] <= 1665.0) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 103.0;
                                                }
                                            }

                                            else {
                                                y_pred += 72.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1202.0) {
                                                if (x[1] <= 900.0) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    if (x[2] <= 620.0) {
                                                        if (x[0] <= 2076.0) {
                                                            y_pred += 100.0;
                                                        }

                                                        else {
                                                            y_pred += 94.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 815.5) {
                                                            if (x[0] <= 2101.0) {
                                                                y_pred += 121.0;
                                                            }

                                                            else {
                                                                y_pred += 114.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 110.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1294.5) {
                                                    y_pred += 88.0;
                                                }

                                                else {
                                                    if (x[1] <= 1617.0) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2430.0) {
                                    if (x[2] <= 604.5) {
                                        y_pred += 58.0;
                                    }

                                    else {
                                        if (x[0] <= 2386.5) {
                                            if (x[0] <= 2281.0) {
                                                if (x[0] <= 2191.0) {
                                                    y_pred += 66.0;
                                                }

                                                else {
                                                    if (x[1] <= 947.0) {
                                                        if (x[0] <= 2221.0) {
                                                            y_pred += 67.0;
                                                        }

                                                        else {
                                                            y_pred += 71.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2257.5) {
                                                            if (x[1] <= 1227.5) {
                                                                if (x[2] <= 757.0) {
                                                                    if (x[0] <= 2229.0) {
                                                                        y_pred += 89.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 85.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 84.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1104.5) {
                                                                    y_pred += 78.0;
                                                                }

                                                                else {
                                                                    y_pred += 82.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 70.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 743.0) {
                                                    if (x[1] <= 826.0) {
                                                        y_pred += 88.0;
                                                    }

                                                    else {
                                                        y_pred += 84.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 90.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 64.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 751.5) {
                                        if (x[2] <= 643.0) {
                                            if (x[1] <= 1098.0) {
                                                if (x[2] <= 588.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 694.0) {
                                                y_pred += 115.0;
                                            }

                                            else {
                                                if (x[1] <= 940.5) {
                                                    y_pred += 106.0;
                                                }

                                                else {
                                                    y_pred += 101.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 2060.0) {
                                            if (x[0] <= 2554.0) {
                                                if (x[2] <= 1206.0) {
                                                    y_pred += 95.0;
                                                }

                                                else {
                                                    y_pred += 82.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1403.5) {
                                                    if (x[2] <= 834.0) {
                                                        if (x[0] <= 3183.5) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            y_pred += 76.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 875.5) {
                                                            y_pred += 70.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 922.5) {
                                                                y_pred += 69.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 1426.5) {
                                                        y_pred += 106.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 3011.5) {
                                                            if (x[0] <= 2739.0) {
                                                                if (x[2] <= 785.0) {
                                                                    y_pred += 93.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1509.0) {
                                                                        if (x[2] <= 860.5) {
                                                                            y_pred += 73.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 71.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 854.0) {
                                                                            y_pred += 80.0;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 1302.0) {
                                                                                y_pred += 88.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 85.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1858.5) {
                                                                    if (x[0] <= 2950.5) {
                                                                        if (x[0] <= 2923.0) {
                                                                            if (x[1] <= 1800.0) {
                                                                                if (x[2] <= 1355.0) {
                                                                                    y_pred += 75.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 73.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 76.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 68.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 81.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1682.5) {
                                                                if (x[0] <= 3197.5) {
                                                                    y_pred += 120.0;
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1286.5) {
                                                                    y_pred += 88.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 1578.0) {
                                                                        y_pred += 80.0;
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
                                            y_pred += 106.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #34
                        if (x[0] <= 2172.0) {
                            if (x[2] <= 893.5) {
                                if (x[1] <= 900.0) {
                                    if (x[1] <= 649.5) {
                                        y_pred += 105.0;
                                    }

                                    else {
                                        if (x[1] <= 874.5) {
                                            if (x[0] <= 2020.5) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                if (x[2] <= 541.5) {
                                                    y_pred += 77.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 621.5) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 91.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 912.5) {
                                        y_pred += 121.0;
                                    }

                                    else {
                                        if (x[0] <= 1865.0) {
                                            y_pred += 71.0;
                                        }

                                        else {
                                            if (x[0] <= 1939.5) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[2] <= 874.0) {
                                                    if (x[1] <= 1202.0) {
                                                        if (x[1] <= 1000.0) {
                                                            y_pred += 94.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 619.0) {
                                                                y_pred += 100.0;
                                                            }

                                                            else {
                                                                y_pred += 114.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 88.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 110.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1750.5) {
                                    if (x[1] <= 1830.0) {
                                        y_pred += 77.0;
                                    }

                                    else {
                                        y_pred += 78.0;
                                    }
                                }

                                else {
                                    if (x[0] <= 1888.5) {
                                        y_pred += 103.0;
                                    }

                                    else {
                                        if (x[1] <= 1199.5) {
                                            y_pred += 72.0;
                                        }

                                        else {
                                            if (x[0] <= 2150.0) {
                                                if (x[1] <= 1617.0) {
                                                    y_pred += 83.0;
                                                }

                                                else {
                                                    y_pred += 87.0;
                                                }
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2430.0) {
                                if (x[1] <= 921.5) {
                                    if (x[1] <= 787.0) {
                                        y_pred += 88.0;
                                    }

                                    else {
                                        if (x[1] <= 871.0) {
                                            y_pred += 58.0;
                                        }

                                        else {
                                            if (x[0] <= 2221.0) {
                                                y_pred += 67.0;
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 1252.5) {
                                        if (x[0] <= 2191.0) {
                                            y_pred += 66.0;
                                        }

                                        else {
                                            if (x[1] <= 1018.5) {
                                                if (x[0] <= 2284.5) {
                                                    y_pred += 89.0;
                                                }

                                                else {
                                                    y_pred += 84.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 698.5) {
                                                    y_pred += 70.0;
                                                }

                                                else {
                                                    if (x[0] <= 2300.5) {
                                                        if (x[1] <= 1422.5) {
                                                            if (x[1] <= 1227.5) {
                                                                if (x[1] <= 1080.0) {
                                                                    y_pred += 85.0;
                                                                }

                                                                else {
                                                                    y_pred += 84.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 78.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 90.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        y_pred += 64.0;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2490.5) {
                                    if (x[1] <= 1252.0) {
                                        y_pred += 115.0;
                                    }

                                    else {
                                        if (x[1] <= 1885.0) {
                                            y_pred += 95.0;
                                        }

                                        else {
                                            y_pred += 106.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1030.5) {
                                        if (x[1] <= 974.5) {
                                            if (x[2] <= 678.5) {
                                                if (x[2] <= 588.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }

                                            else {
                                                y_pred += 106.0;
                                            }
                                        }

                                        else {
                                            y_pred += 101.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3090.0) {
                                            if (x[2] <= 798.5) {
                                                if (x[1] <= 1170.5) {
                                                    y_pred += 79.0;
                                                }

                                                else {
                                                    if (x[0] <= 2580.0) {
                                                        y_pred += 95.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 680.5) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            y_pred += 93.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1227.0) {
                                                    y_pred += 70.0;
                                                }

                                                else {
                                                    if (x[0] <= 2958.0) {
                                                        if (x[0] <= 2739.0) {
                                                            if (x[1] <= 1634.5) {
                                                                if (x[0] <= 2543.5) {
                                                                    y_pred += 82.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1509.0) {
                                                                        if (x[0] <= 2611.5) {
                                                                            y_pred += 71.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 73.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 80.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2671.0) {
                                                                    y_pred += 85.0;
                                                                }

                                                                else {
                                                                    y_pred += 88.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 1221.0) {
                                                                if (x[0] <= 2923.0) {
                                                                    y_pred += 75.0;
                                                                }

                                                                else {
                                                                    y_pred += 68.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2857.0) {
                                                                    if (x[0] <= 2784.5) {
                                                                        y_pred += 73.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 76.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 1355.5) {
                                                                        y_pred += 83.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 81.0;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1526.5) {
                                                            y_pred += 106.0;
                                                        }

                                                        else {
                                                            y_pred += 120.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1462.0) {
                                                if (x[0] <= 3238.0) {
                                                    if (x[2] <= 922.5) {
                                                        y_pred += 69.0;
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 76.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1823.0) {
                                                    if (x[1] <= 1634.5) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        y_pred += 88.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1578.0) {
                                                        y_pred += 80.0;
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

                        // tree #35
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[0] <= 2172.0) {
                                if (x[0] <= 1859.0) {
                                    if (x[2] <= 1093.0) {
                                        y_pred += 71.0;
                                    }

                                    else {
                                        if (x[1] <= 1830.0) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 892.5) {
                                        if (x[1] <= 874.5) {
                                            if (x[0] <= 2020.5) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                if (x[2] <= 541.5) {
                                                    y_pred += 77.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 87.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 1940.0) {
                                            if (x[1] <= 1149.0) {
                                                y_pred += 72.0;
                                            }

                                            else {
                                                if (x[1] <= 1652.5) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 103.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2094.0) {
                                                if (x[2] <= 711.5) {
                                                    if (x[2] <= 628.5) {
                                                        y_pred += 100.0;
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 121.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1182.0) {
                                                    if (x[0] <= 2161.5) {
                                                        if (x[1] <= 1006.5) {
                                                            y_pred += 110.0;
                                                        }

                                                        else {
                                                            y_pred += 114.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 94.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 908.0) {
                                                        y_pred += 88.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2150.0) {
                                                            if (x[2] <= 1606.5) {
                                                                y_pred += 83.0;
                                                            }

                                                            else {
                                                                y_pred += 87.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2108.5) {
                                    if (x[1] <= 925.5) {
                                        if (x[1] <= 874.5) {
                                            if (x[2] <= 676.0) {
                                                if (x[0] <= 2358.0) {
                                                    y_pred += 88.0;
                                                }

                                                else {
                                                    if (x[2] <= 572.5) {
                                                        y_pred += 87.0;
                                                    }

                                                    else {
                                                        y_pred += 58.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 106.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 652.0) {
                                                y_pred += 79.0;
                                            }

                                            else {
                                                if (x[0] <= 2221.0) {
                                                    y_pred += 67.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1006.5) {
                                            if (x[0] <= 2401.0) {
                                                if (x[2] <= 730.0) {
                                                    y_pred += 84.0;
                                                }

                                                else {
                                                    y_pred += 89.0;
                                                }
                                            }

                                            else {
                                                y_pred += 115.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1320.5) {
                                                if (x[2] <= 1140.5) {
                                                    if (x[1] <= 1229.0) {
                                                        if (x[0] <= 2634.0) {
                                                            if (x[2] <= 698.5) {
                                                                y_pred += 70.0;
                                                            }

                                                            else {
                                                                if (x[0] <= 2191.0) {
                                                                    y_pred += 66.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2462.5) {
                                                                        if (x[2] <= 770.0) {
                                                                            if (x[0] <= 2218.0) {
                                                                                y_pred += 84.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 85.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 90.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 101.0;
                                                                    }
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2881.0) {
                                                                y_pred += 70.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1172.5) {
                                                                    if (x[1] <= 1114.0) {
                                                                        y_pred += 79.0;
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

                                                    else {
                                                        if (x[2] <= 798.5) {
                                                            if (x[1] <= 1486.5) {
                                                                if (x[2] <= 680.5) {
                                                                    y_pred += 91.0;
                                                                }

                                                                else {
                                                                    if (x[0] <= 2610.0) {
                                                                        y_pred += 95.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 93.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 951.5) {
                                                                if (x[1] <= 1509.0) {
                                                                    if (x[0] <= 2883.0) {
                                                                        if (x[0] <= 2611.5) {
                                                                            y_pred += 71.0;
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
                                                                    if (x[2] <= 854.0) {
                                                                        y_pred += 80.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 88.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 2956.5) {
                                                                    if (x[0] <= 2667.0) {
                                                                        if (x[0] <= 2344.0) {
                                                                            if (x[2] <= 1104.5) {
                                                                                y_pred += 78.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 82.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 95.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[1] <= 1668.5) {
                                                                            y_pred += 75.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 68.0;
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 106.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2993.5) {
                                                        if (x[0] <= 2718.5) {
                                                            y_pred += 82.0;
                                                        }

                                                        else {
                                                            y_pred += 83.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1175.0) {
                                                            y_pred += 120.0;
                                                        }

                                                        else {
                                                            y_pred += 88.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1861.0) {
                                                    if (x[0] <= 2597.0) {
                                                        y_pred += 64.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2875.0) {
                                                            if (x[1] <= 1800.0) {
                                                                y_pred += 73.0;
                                                            }

                                                            else {
                                                                y_pred += 76.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 81.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1532.0) {
                                                        y_pred += 80.0;
                                                    }

                                                    else {
                                                        y_pred += 85.0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2847.5) {
                                        y_pred += 106.0;
                                    }

                                    else {
                                        y_pred += 75.0;
                                    }
                                }
                            }
                        }

                        // tree #36
                        if (x[2] <= 798.5) {
                            if (x[0] <= 2172.0) {
                                if (x[1] <= 900.0) {
                                    if (x[2] <= 536.5) {
                                        if (x[2] <= 521.0) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            y_pred += 80.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 555.0) {
                                            y_pred += 105.0;
                                        }

                                        else {
                                            if (x[0] <= 2059.0) {
                                                if (x[0] <= 1980.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 912.5) {
                                        y_pred += 121.0;
                                    }

                                    else {
                                        if (x[1] <= 1068.5) {
                                            if (x[1] <= 986.5) {
                                                y_pred += 94.0;
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1102.0) {
                                                y_pred += 114.0;
                                            }

                                            else {
                                                if (x[2] <= 576.0) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 100.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 2439.0) {
                                    if (x[1] <= 1080.0) {
                                        if (x[1] <= 787.0) {
                                            y_pred += 88.0;
                                        }

                                        else {
                                            if (x[0] <= 2380.0) {
                                                if (x[2] <= 748.5) {
                                                    if (x[0] <= 2233.5) {
                                                        if (x[2] <= 726.5) {
                                                            y_pred += 85.0;
                                                        }

                                                        else {
                                                            y_pred += 89.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 702.0) {
                                                            if (x[2] <= 686.5) {
                                                                y_pred += 71.0;
                                                            }

                                                            else {
                                                                y_pred += 70.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 84.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 66.0;
                                                }
                                            }

                                            else {
                                                y_pred += 58.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2277.5) {
                                            y_pred += 84.0;
                                        }

                                        else {
                                            y_pred += 90.0;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2608.5) {
                                        if (x[1] <= 829.5) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            if (x[1] <= 1006.5) {
                                                if (x[2] <= 698.5) {
                                                    y_pred += 115.0;
                                                }

                                                else {
                                                    y_pred += 106.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 761.5) {
                                                    y_pred += 101.0;
                                                }

                                                else {
                                                    y_pred += 95.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 606.5) {
                                            y_pred += 91.0;
                                        }

                                        else {
                                            if (x[2] <= 770.0) {
                                                y_pred += 79.0;
                                            }

                                            else {
                                                if (x[2] <= 772.0) {
                                                    y_pred += 93.0;
                                                }

                                                else {
                                                    y_pred += 83.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[2] <= 2298.5) {
                                if (x[2] <= 861.5) {
                                    if (x[2] <= 816.5) {
                                        if (x[1] <= 1355.0) {
                                            y_pred += 76.0;
                                        }

                                        else {
                                            y_pred += 80.0;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 976.0) {
                                            y_pred += 67.0;
                                        }

                                        else {
                                            if (x[1] <= 1234.5) {
                                                y_pred += 70.0;
                                            }

                                            else {
                                                y_pred += 73.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 3090.0) {
                                        if (x[0] <= 2958.0) {
                                            if (x[0] <= 2193.5) {
                                                if (x[2] <= 893.5) {
                                                    if (x[2] <= 874.0) {
                                                        y_pred += 88.0;
                                                    }

                                                    else {
                                                        y_pred += 110.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2018.5) {
                                                        if (x[2] <= 1233.0) {
                                                            y_pred += 72.0;
                                                        }

                                                        else {
                                                            y_pred += 77.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 1502.0) {
                                                            y_pred += 83.0;
                                                        }

                                                        else {
                                                            y_pred += 87.0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1126.5) {
                                                    if (x[1] <= 1503.5) {
                                                        if (x[2] <= 1001.5) {
                                                            y_pred += 71.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 1104.5) {
                                                                y_pred += 78.0;
                                                            }

                                                            else {
                                                                y_pred += 82.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 1573.5) {
                                                            y_pred += 95.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2802.0) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1214.5) {
                                                        y_pred += 68.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 1320.5) {
                                                            if (x[1] <= 1663.5) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 83.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1885.5) {
                                                                if (x[2] <= 1401.5) {
                                                                    if (x[0] <= 2610.5) {
                                                                        y_pred += 64.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 76.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[1] <= 1669.0) {
                                                                        y_pred += 81.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 73.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 85.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1049.5) {
                                                y_pred += 106.0;
                                            }

                                            else {
                                                y_pred += 120.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 1077.0) {
                                            if (x[2] <= 922.5) {
                                                y_pred += 69.0;
                                            }

                                            else {
                                                y_pred += 68.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1286.5) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                if (x[2] <= 1578.0) {
                                                    y_pred += 80.0;
                                                }

                                                else {
                                                    y_pred += 75.0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 1750.5) {
                                    y_pred += 78.0;
                                }

                                else {
                                    if (x[0] <= 2164.5) {
                                        y_pred += 103.0;
                                    }

                                    else {
                                        y_pred += 106.0;
                                    }
                                }
                            }
                        }

                        // tree #37
                        if (x[0] <= 2172.0) {
                            if (x[2] <= 893.5) {
                                if (x[1] <= 900.0) {
                                    if (x[2] <= 536.5) {
                                        if (x[2] <= 521.0) {
                                            y_pred += 77.0;
                                        }

                                        else {
                                            y_pred += 80.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 555.0) {
                                            y_pred += 105.0;
                                        }

                                        else {
                                            if (x[1] <= 874.5) {
                                                y_pred += 79.0;
                                            }

                                            else {
                                                if (x[2] <= 621.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 912.5) {
                                        y_pred += 121.0;
                                    }

                                    else {
                                        if (x[0] <= 1865.0) {
                                            y_pred += 71.0;
                                        }

                                        else {
                                            if (x[2] <= 874.0) {
                                                if (x[1] <= 1164.0) {
                                                    if (x[2] <= 620.0) {
                                                        if (x[1] <= 1020.0) {
                                                            y_pred += 94.0;
                                                        }

                                                        else {
                                                            y_pred += 100.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 114.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 717.5) {
                                                        y_pred += 91.0;
                                                    }

                                                    else {
                                                        y_pred += 88.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 110.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 1807.5) {
                                    if (x[0] <= 2018.5) {
                                        if (x[2] <= 1233.0) {
                                            y_pred += 72.0;
                                        }

                                        else {
                                            y_pred += 77.0;
                                        }
                                    }

                                    else {
                                        y_pred += 83.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 2861.0) {
                                        if (x[1] <= 2082.5) {
                                            y_pred += 87.0;
                                        }

                                        else {
                                            y_pred += 103.0;
                                        }
                                    }

                                    else {
                                        y_pred += 78.0;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2430.0) {
                                if (x[0] <= 2384.0) {
                                    if (x[1] <= 1080.0) {
                                        if (x[2] <= 748.5) {
                                            if (x[1] <= 809.0) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                if (x[1] <= 910.0) {
                                                    y_pred += 71.0;
                                                }

                                                else {
                                                    if (x[0] <= 2247.5) {
                                                        if (x[0] <= 2229.0) {
                                                            y_pred += 89.0;
                                                        }

                                                        else {
                                                            y_pred += 85.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 2303.0) {
                                                            y_pred += 70.0;
                                                        }

                                                        else {
                                                            y_pred += 84.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 802.5) {
                                                y_pred += 66.0;
                                            }

                                            else {
                                                y_pred += 67.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 938.5) {
                                            if (x[2] <= 770.0) {
                                                y_pred += 84.0;
                                            }

                                            else {
                                                y_pred += 90.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2240.0) {
                                                y_pred += 78.0;
                                            }

                                            else {
                                                y_pred += 82.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2420.5) {
                                        y_pred += 58.0;
                                    }

                                    else {
                                        y_pred += 64.0;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 751.5) {
                                    if (x[0] <= 2512.5) {
                                        y_pred += 115.0;
                                    }

                                    else {
                                        if (x[1] <= 890.0) {
                                            if (x[2] <= 644.0) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 106.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 674.0) {
                                                if (x[0] <= 2622.5) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }

                                            else {
                                                y_pred += 101.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 2484.0) {
                                        if (x[2] <= 1725.5) {
                                            y_pred += 95.0;
                                        }

                                        else {
                                            y_pred += 106.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3090.0) {
                                            if (x[1] <= 1052.5) {
                                                y_pred += 70.0;
                                            }

                                            else {
                                                if (x[1] <= 1669.5) {
                                                    if (x[1] <= 1632.0) {
                                                        if (x[2] <= 798.5) {
                                                            if (x[1] <= 1191.0) {
                                                                y_pred += 79.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 784.5) {
                                                                    y_pred += 93.0;
                                                                }

                                                                else {
                                                                    y_pred += 95.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2958.0) {
                                                                if (x[1] <= 1425.5) {
                                                                    y_pred += 82.0;
                                                                }

                                                                else {
                                                                    if (x[2] <= 1257.0) {
                                                                        if (x[2] <= 810.0) {
                                                                            y_pred += 80.0;
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 1005.0) {
                                                                                if (x[0] <= 2611.5) {
                                                                                    y_pred += 71.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 73.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 75.0;
                                                                            }
                                                                        }
                                                                    }

                                                                    else {
                                                                        y_pred += 81.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 106.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 120.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 1022.0) {
                                                        y_pred += 88.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2932.5) {
                                                            if (x[0] <= 2703.0) {
                                                                y_pred += 85.0;
                                                            }

                                                            else {
                                                                if (x[1] <= 1858.5) {
                                                                    if (x[1] <= 1800.0) {
                                                                        y_pred += 73.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 76.0;
                                                                    }
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
                                            }
                                        }

                                        else {
                                            if (x[2] <= 1077.0) {
                                                if (x[2] <= 853.5) {
                                                    if (x[1] <= 1348.0) {
                                                        y_pred += 76.0;
                                                    }

                                                    else {
                                                        y_pred += 83.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 922.5) {
                                                        y_pred += 69.0;
                                                    }

                                                    else {
                                                        y_pred += 68.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[2] <= 1286.5) {
                                                    y_pred += 88.0;
                                                }

                                                else {
                                                    if (x[1] <= 2098.5) {
                                                        y_pred += 80.0;
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

                        // tree #38
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[0] <= 2172.0) {
                                if (x[2] <= 893.5) {
                                    if (x[0] <= 1975.0) {
                                        if (x[2] <= 598.0) {
                                            if (x[2] <= 550.5) {
                                                y_pred += 80.0;
                                            }

                                            else {
                                                if (x[0] <= 1929.5) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 87.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 71.0;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 579.0) {
                                            if (x[2] <= 541.5) {
                                                y_pred += 77.0;
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2021.0) {
                                                if (x[1] <= 1007.5) {
                                                    y_pred += 91.0;
                                                }

                                                else {
                                                    y_pred += 100.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 620.0) {
                                                    y_pred += 94.0;
                                                }

                                                else {
                                                    if (x[2] <= 808.5) {
                                                        if (x[0] <= 2101.0) {
                                                            y_pred += 121.0;
                                                        }

                                                        else {
                                                            y_pred += 114.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 874.0) {
                                                            y_pred += 88.0;
                                                        }

                                                        else {
                                                            y_pred += 110.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1664.5) {
                                        if (x[1] <= 1199.5) {
                                            y_pred += 72.0;
                                        }

                                        else {
                                            if (x[2] <= 1254.5) {
                                                y_pred += 83.0;
                                            }

                                            else {
                                                y_pred += 77.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 2178.5) {
                                            if (x[2] <= 2513.0) {
                                                y_pred += 87.0;
                                            }

                                            else {
                                                y_pred += 103.0;
                                            }
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2108.5) {
                                    if (x[2] <= 798.5) {
                                        if (x[0] <= 2439.0) {
                                            if (x[2] <= 604.5) {
                                                y_pred += 58.0;
                                            }

                                            else {
                                                if (x[0] <= 2191.0) {
                                                    y_pred += 66.0;
                                                }

                                                else {
                                                    if (x[0] <= 2281.0) {
                                                        if (x[2] <= 698.5) {
                                                            if (x[1] <= 976.0) {
                                                                y_pred += 71.0;
                                                            }

                                                            else {
                                                                y_pred += 70.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[2] <= 757.0) {
                                                                if (x[2] <= 726.5) {
                                                                    y_pred += 85.0;
                                                                }

                                                                else {
                                                                    y_pred += 89.0;
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 84.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 743.0) {
                                                            if (x[0] <= 2320.0) {
                                                                y_pred += 88.0;
                                                            }

                                                            else {
                                                                y_pred += 84.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 90.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2608.5) {
                                                if (x[2] <= 608.5) {
                                                    y_pred += 87.0;
                                                }

                                                else {
                                                    if (x[2] <= 694.0) {
                                                        y_pred += 115.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2558.5) {
                                                            y_pred += 95.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 729.5) {
                                                                y_pred += 101.0;
                                                            }

                                                            else {
                                                                y_pred += 106.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2873.5) {
                                                    if (x[2] <= 697.0) {
                                                        if (x[1] <= 1098.0) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            y_pred += 91.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 93.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 3196.5) {
                                                        y_pred += 79.0;
                                                    }

                                                    else {
                                                        y_pred += 83.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 951.5) {
                                            if (x[0] <= 2611.5) {
                                                if (x[1] <= 1191.5) {
                                                    y_pred += 67.0;
                                                }

                                                else {
                                                    y_pred += 71.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1492.0) {
                                                    if (x[2] <= 838.5) {
                                                        if (x[2] <= 816.5) {
                                                            y_pred += 76.0;
                                                        }

                                                        else {
                                                            y_pred += 73.0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[2] <= 875.5) {
                                                            y_pred += 70.0;
                                                        }

                                                        else {
                                                            if (x[2] <= 922.5) {
                                                                y_pred += 69.0;
                                                            }

                                                            else {
                                                                y_pred += 68.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 854.0) {
                                                        y_pred += 80.0;
                                                    }

                                                    else {
                                                        y_pred += 88.0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1669.5) {
                                                if (x[1] <= 1632.0) {
                                                    if (x[2] <= 1028.0) {
                                                        y_pred += 106.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 1346.5) {
                                                            if (x[1] <= 1573.5) {
                                                                if (x[2] <= 1112.0) {
                                                                    if (x[1] <= 1422.5) {
                                                                        y_pred += 82.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 78.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[2] <= 1206.0) {
                                                                        y_pred += 95.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 82.0;
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }

                                                        else {
                                                            if (x[0] <= 2687.5) {
                                                                y_pred += 64.0;
                                                            }

                                                            else {
                                                                y_pred += 81.0;
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 120.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1719.0) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    if (x[1] <= 1762.0) {
                                                        y_pred += 88.0;
                                                    }

                                                    else {
                                                        if (x[0] <= 2703.0) {
                                                            y_pred += 85.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2857.0) {
                                                                if (x[2] <= 1467.0) {
                                                                    y_pred += 76.0;
                                                                }

                                                                else {
                                                                    y_pred += 73.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 3086.0) {
                                                                    y_pred += 83.0;
                                                                }

                                                                else {
                                                                    y_pred += 80.0;
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
                                    if (x[0] <= 2847.5) {
                                        y_pred += 106.0;
                                    }

                                    else {
                                        y_pred += 75.0;
                                    }
                                }
                            }
                        }

                        // tree #39
                        if (x[1] <= 649.5) {
                            y_pred += 105.0;
                        }

                        else {
                            if (x[1] <= 852.5) {
                                if (x[1] <= 826.0) {
                                    if (x[1] <= 700.5) {
                                        y_pred += 77.0;
                                    }

                                    else {
                                        if (x[0] <= 2108.5) {
                                            y_pred += 80.0;
                                        }

                                        else {
                                            if (x[1] <= 764.0) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    y_pred += 58.0;
                                }
                            }

                            else {
                                if (x[2] <= 798.5) {
                                    if (x[1] <= 856.5) {
                                        y_pred += 106.0;
                                    }

                                    else {
                                        if (x[0] <= 2172.0) {
                                            if (x[0] <= 1865.0) {
                                                y_pred += 71.0;
                                            }

                                            else {
                                                if (x[1] <= 900.0) {
                                                    if (x[2] <= 623.5) {
                                                        if (x[2] <= 572.0) {
                                                            y_pred += 87.0;
                                                        }

                                                        else {
                                                            y_pred += 79.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }

                                                else {
                                                    if (x[2] <= 620.0) {
                                                        if (x[0] <= 1939.5) {
                                                            y_pred += 91.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2076.0) {
                                                                y_pred += 100.0;
                                                            }

                                                            else {
                                                                y_pred += 94.0;
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[1] <= 994.5) {
                                                            y_pred += 121.0;
                                                        }

                                                        else {
                                                            y_pred += 114.0;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 925.5) {
                                                if (x[1] <= 908.5) {
                                                    y_pred += 71.0;
                                                }

                                                else {
                                                    y_pred += 79.0;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 677.5) {
                                                    if (x[0] <= 2539.0) {
                                                        y_pred += 115.0;
                                                    }

                                                    else {
                                                        y_pred += 91.0;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 2191.0) {
                                                        y_pred += 66.0;
                                                    }

                                                    else {
                                                        if (x[2] <= 698.5) {
                                                            y_pred += 70.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2873.5) {
                                                                if (x[1] <= 952.5) {
                                                                    y_pred += 84.0;
                                                                }

                                                                else {
                                                                    if (x[1] <= 1042.0) {
                                                                        if (x[2] <= 736.5) {
                                                                            y_pred += 101.0;
                                                                        }

                                                                        else {
                                                                            y_pred += 89.0;
                                                                        }
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 768.5) {
                                                                            if (x[2] <= 735.5) {
                                                                                y_pred += 85.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 84.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 786.0) {
                                                                                if (x[1] <= 1295.5) {
                                                                                    y_pred += 90.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 93.0;
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 95.0;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[1] <= 1303.0) {
                                                                    y_pred += 79.0;
                                                                }

                                                                else {
                                                                    y_pred += 83.0;
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
                                    if (x[0] <= 3090.0) {
                                        if (x[2] <= 861.5) {
                                            if (x[0] <= 2431.5) {
                                                y_pred += 67.0;
                                            }

                                            else {
                                                if (x[1] <= 1492.0) {
                                                    if (x[0] <= 2675.0) {
                                                        y_pred += 73.0;
                                                    }

                                                    else {
                                                        y_pred += 70.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 80.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 1011.5) {
                                                y_pred += 110.0;
                                            }

                                            else {
                                                if (x[2] <= 2298.5) {
                                                    if (x[1] <= 1187.0) {
                                                        y_pred += 72.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1443.5) {
                                                            if (x[2] <= 1029.5) {
                                                                if (x[1] <= 1363.5) {
                                                                    if (x[0] <= 2143.5) {
                                                                        y_pred += 83.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 88.0;
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 106.0;
                                                                }
                                                            }

                                                            else {
                                                                if (x[2] <= 1427.0) {
                                                                    y_pred += 82.0;
                                                                }

                                                                else {
                                                                    y_pred += 77.0;
                                                                }
                                                            }
                                                        }

                                                        else {
                                                            if (x[1] <= 1632.0) {
                                                                if (x[0] <= 2430.0) {
                                                                    if (x[2] <= 1251.0) {
                                                                        y_pred += 78.0;
                                                                    }

                                                                    else {
                                                                        y_pred += 64.0;
                                                                    }
                                                                }

                                                                else {
                                                                    if (x[0] <= 2501.5) {
                                                                        y_pred += 95.0;
                                                                    }

                                                                    else {
                                                                        if (x[2] <= 1257.0) {
                                                                            if (x[1] <= 1549.0) {
                                                                                y_pred += 71.0;
                                                                            }

                                                                            else {
                                                                                y_pred += 75.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            y_pred += 81.0;
                                                                        }
                                                                    }
                                                                }
                                                            }

                                                            else {
                                                                if (x[0] <= 3010.0) {
                                                                    if (x[1] <= 1712.0) {
                                                                        y_pred += 68.0;
                                                                    }

                                                                    else {
                                                                        if (x[0] <= 2739.0) {
                                                                            if (x[0] <= 2671.0) {
                                                                                if (x[1] <= 1945.0) {
                                                                                    y_pred += 87.0;
                                                                                }

                                                                                else {
                                                                                    if (x[1] <= 2014.5) {
                                                                                        y_pred += 85.0;
                                                                                    }

                                                                                    else {
                                                                                        y_pred += 87.0;
                                                                                    }
                                                                                }
                                                                            }

                                                                            else {
                                                                                y_pred += 88.0;
                                                                            }
                                                                        }

                                                                        else {
                                                                            if (x[2] <= 1320.5) {
                                                                                y_pred += 83.0;
                                                                            }

                                                                            else {
                                                                                if (x[2] <= 1467.0) {
                                                                                    y_pred += 76.0;
                                                                                }

                                                                                else {
                                                                                    y_pred += 73.0;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }

                                                                else {
                                                                    y_pred += 120.0;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 2256.0) {
                                                        if (x[0] <= 2164.5) {
                                                            y_pred += 103.0;
                                                        }

                                                        else {
                                                            y_pred += 106.0;
                                                        }
                                                    }

                                                    else {
                                                        y_pred += 78.0;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3493.0) {
                                            if (x[0] <= 3213.0) {
                                                if (x[0] <= 3143.5) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    y_pred += 69.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 2098.5) {
                                                    if (x[1] <= 1536.5) {
                                                        y_pred += 76.0;
                                                    }

                                                    else {
                                                        y_pred += 80.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 75.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 88.0;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #40
                        if (x[2] <= 798.5) {
                            if (x[2] <= 640.0) {
                                if (x[1] <= 649.5) {
                                    y_pred += 105.0;
                                }

                                else {
                                    if (x[2] <= 590.5) {
                                        if (x[1] <= 905.0) {
                                            if (x[0] <= 2343.5) {
                                                if (x[0] <= 2043.5) {
                                                    if (x[1] <= 816.0) {
                                                        y_pred += 80.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= 766.5) {
                                                        y_pred += 77.0;
                                                    }

                                                    else {
                                                        y_pred += 79.0;
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 87.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 1939.5) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                if (x[1] <= 1197.0) {
                                                    if (x[1] <= 1020.0) {
                                                        y_pred += 94.0;
                                                    }

                                                    else {
                                                        y_pred += 100.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 91.0;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 2358.0) {
                                            if (x[1] <= 890.0) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                y_pred += 71.0;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2522.5) {
                                                y_pred += 58.0;
                                            }

                                            else {
                                                y_pred += 79.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 668.0) {
                                    if (x[0] <= 2308.0) {
                                        y_pred += 114.0;
                                    }

                                    else {
                                        y_pred += 115.0;
                                    }
                                }

                                else {
                                    if (x[2] <= 718.5) {
                                        if (x[0] <= 2233.5) {
                                            if (x[2] <= 689.0) {
                                                y_pred += 91.0;
                                            }

                                            else {
                                                y_pred += 85.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 702.0) {
                                                if (x[1] <= 976.0) {
                                                    y_pred += 71.0;
                                                }

                                                else {
                                                    y_pred += 70.0;
                                                }
                                            }

                                            else {
                                                y_pred += 84.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 741.0) {
                                            if (x[0] <= 2587.0) {
                                                y_pred += 101.0;
                                            }

                                            else {
                                                y_pred += 106.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 749.5) {
                                                if (x[2] <= 748.5) {
                                                    y_pred += 89.0;
                                                }

                                                else {
                                                    y_pred += 66.0;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 2125.5) {
                                                    y_pred += 121.0;
                                                }

                                                else {
                                                    if (x[0] <= 2873.5) {
                                                        if (x[1] <= 1128.0) {
                                                            y_pred += 84.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 2446.0) {
                                                                y_pred += 90.0;
                                                            }

                                                            else {
                                                                if (x[2] <= 784.5) {
                                                                    y_pred += 93.0;
                                                                }

                                                                else {
                                                                    y_pred += 95.0;
                                                                }
                                                            }
                                                        }
                                                    }

                                                    else {
                                                        if (x[0] <= 3196.5) {
                                                            y_pred += 79.0;
                                                        }

                                                        else {
                                                            y_pred += 83.0;
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
                            if (x[1] <= 1632.0) {
                                if (x[0] <= 2175.5) {
                                    if (x[1] <= 1011.5) {
                                        y_pred += 110.0;
                                    }

                                    else {
                                        if (x[0] <= 2018.5) {
                                            if (x[0] <= 1701.0) {
                                                y_pred += 77.0;
                                            }

                                            else {
                                                y_pred += 72.0;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 908.0) {
                                                y_pred += 88.0;
                                            }

                                            else {
                                                y_pred += 83.0;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 1402.5) {
                                        if (x[0] <= 2228.5) {
                                            y_pred += 67.0;
                                        }

                                        else {
                                            if (x[1] <= 1370.5) {
                                                if (x[0] <= 2472.0) {
                                                    y_pred += 82.0;
                                                }

                                                else {
                                                    if (x[0] <= 3238.0) {
                                                        if (x[0] <= 2935.5) {
                                                            y_pred += 70.0;
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
                                                y_pred += 68.0;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 1346.5) {
                                            if (x[2] <= 926.5) {
                                                if (x[1] <= 1509.0) {
                                                    if (x[2] <= 860.5) {
                                                        y_pred += 73.0;
                                                    }

                                                    else {
                                                        y_pred += 71.0;
                                                    }
                                                }

                                                else {
                                                    y_pred += 80.0;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 1573.5) {
                                                    if (x[2] <= 1028.0) {
                                                        y_pred += 106.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1503.5) {
                                                            if (x[1] <= 1454.5) {
                                                                y_pred += 82.0;
                                                            }

                                                            else {
                                                                y_pred += 78.0;
                                                            }
                                                        }

                                                        else {
                                                            y_pred += 95.0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    y_pred += 75.0;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 2687.5) {
                                                y_pred += 64.0;
                                            }

                                            else {
                                                y_pred += 81.0;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 1669.5) {
                                    y_pred += 120.0;
                                }

                                else {
                                    if (x[0] <= 2739.0) {
                                        if (x[1] <= 2256.0) {
                                            if (x[1] <= 2082.5) {
                                                if (x[2] <= 1302.0) {
                                                    y_pred += 88.0;
                                                }

                                                else {
                                                    if (x[2] <= 1875.0) {
                                                        y_pred += 85.0;
                                                    }

                                                    else {
                                                        y_pred += 87.0;
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[1] <= 2176.5) {
                                                    y_pred += 103.0;
                                                }

                                                else {
                                                    y_pred += 106.0;
                                                }
                                            }
                                        }

                                        else {
                                            y_pred += 78.0;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 3472.0) {
                                            if (x[0] <= 3252.0) {
                                                if (x[2] <= 1221.0) {
                                                    y_pred += 68.0;
                                                }

                                                else {
                                                    if (x[2] <= 1320.5) {
                                                        y_pred += 83.0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1800.0) {
                                                            y_pred += 73.0;
                                                        }

                                                        else {
                                                            if (x[0] <= 3023.0) {
                                                                y_pred += 76.0;
                                                            }

                                                            else {
                                                                y_pred += 75.0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                y_pred += 80.0;
                                            }
                                        }

                                        else {
                                            y_pred += 88.0;
                                        }
                                    }
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