package com.jing.testso;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

import com.jing.testso.databinding.ActivityMainBinding;

public class MainActivity extends AppCompatActivity {

    // Used to load the 'testso' library on application startup.
    static {
        System.loadLibrary("testso");
    }

    /*private ActivityMainBinding binding;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        binding = ActivityMainBinding.inflate(getLayoutInflater());
        setContentView(binding.getRoot());

        // Example of a call to a native method
        TextView tv = binding.sampleText;
        tv.setText(add());
    }

    *//**
     * A native method that is implemented by the 'testso' native library,
     * which is packaged with this application.
     *//*
    public native String add();*/
}