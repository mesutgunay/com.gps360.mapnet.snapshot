package com.gps360.mapnet.snapshot;

import android.view.View;


public interface WebviewBitmapProvider {

    void createBitmap(int width, int ht, View webview, int backgroundColor, Snapshot snapshot);
}
