package org.techtown.doitmission_04;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.text.Editable;
import android.text.TextWatcher;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import org.w3c.dom.Text;

import java.io.UnsupportedEncodingException;

public class MainActivity extends AppCompatActivity {
    Button button1;
    EditText editText;
    TextView textView;
    Button button2;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        button1 = findViewById(R.id.button1);
        button2 = findViewById(R.id.button2);
        editText = findViewById(R.id.editText);
        textView = findViewById(R.id.textView);

        button1.setOnClickListener(new View.OnClickListener() { //입력한 메시지를 출력해주는 버튼 이벤트
            @Override
            public void onClick(View v) {
                String message = editText.getText().toString();
                Toast.makeText(getApplicationContext(), "전송할 메시지\n\n" + message, Toast.LENGTH_LONG).show();
            }
        });

        button2.setOnClickListener(new View.OnClickListener() { //닫기 버튼 이벤트
            public void onClick(View v) {
                finish();
            }
        });

        TextWatcher watcher = new TextWatcher() { //실시간으로 변화된 값을 보여주기 위해서 사용한다.
            @Override
            public void beforeTextChanged(CharSequence s, int start, int count, int after) { //작성 전

            }

            @Override
            public void onTextChanged(CharSequence s, int start, int before, int count) { //작성 중
                String input = editText.getText().toString();
                textView.setText(input.length() + " / 80 바이트");
            }

            @Override
            public void afterTextChanged(Editable s) { //작성 후

            }
        };

        editText.addTextChangedListener(watcher);
    }
}
