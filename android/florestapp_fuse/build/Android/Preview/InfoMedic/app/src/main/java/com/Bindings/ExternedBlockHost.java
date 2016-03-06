package com.Bindings;

public class ExternedBlockHost
{
    public static void SetNavigationBarVisible_0(final Object _this, boolean visible)
    {
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.KITKAT)
        {
        	android.view.View decorView = com.InfoMedic.InfoMedic.GetRootActivity().getWindow().getDecorView();
        
        	int uiOptions = decorView.getSystemUiVisibility();
        
        	if (visible)
        	{
        		uiOptions &= ~(android.view.View.SYSTEM_UI_FLAG_HIDE_NAVIGATION | android.view.View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY);
        	}
        	else
        	{
        		uiOptions |= android.view.View.SYSTEM_UI_FLAG_HIDE_NAVIGATION | android.view.View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY;
        	}
        
        	decorView.setSystemUiVisibility(uiOptions);
        }
    }
    
    public static void SetStatusBarColor1_1(final Object _this, int color)
    {
        android.view.Window window = com.InfoMedic.InfoMedic.GetRootActivity().getWindow();
        if (Integer.valueOf(android.os.Build.VERSION.SDK) >= 21)
        {
        	window.setStatusBarColor(color);
        }
    }
    
    public static void SetStatusBarVisible_2(final Object _this, boolean visible)
    {
        android.view.Window window = com.InfoMedic.InfoMedic.GetRootActivity().getWindow();
        
        if (!visible)
        {
        	window.setFlags(
        		android.view.WindowManager.LayoutParams.FLAG_FULLSCREEN,
        		android.view.WindowManager.LayoutParams.FLAG_FULLSCREEN);
        }
        else
        {
        	window.clearFlags(
        		android.view.WindowManager.LayoutParams.FLAG_FULLSCREEN);
        }
    }
    
}
