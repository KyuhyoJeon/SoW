package org.techtown.doitmission_09;

import android.os.Bundle;

import androidx.fragment.app.Fragment;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.EditText;
import android.widget.Toast;


public class MainFragment extends Fragment {
    Button saveButton;
    EditText inputName;
    EditText inputAge;

    @Override
    public View onCreateView(LayoutInflater inflater, ViewGroup container,
                             Bundle savedInstanceState) {
        ViewGroup rootView = (ViewGroup) inflater.inflate(R.layout.fragment_main, container, false);

        saveButton = rootView.findViewById(R.id.save);
        saveButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String name = inputName.getText().toString();
                String age = inputAge.getText().toString();

                Toast.makeText(getContext(),"이름 : " + name + "\n나이 : " + age, Toast.LENGTH_LONG).show();
            }
        });

        return rootView;
    }
}
