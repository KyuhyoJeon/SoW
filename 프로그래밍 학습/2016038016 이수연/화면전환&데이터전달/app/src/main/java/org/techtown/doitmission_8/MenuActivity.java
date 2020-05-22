package org.techtown.doitmission_8;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Toast;

public class MenuActivity extends AppCompatActivity {
    public static final int REQUEST_CODE_CUSTOMER = 201;
    public static final int REQUEST_CODE_MONEY = 202;
    public static final int REQUEST_CODE_ITEM = 203;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_menu);

        Intent receivedIntent = getIntent();
        String userName = receivedIntent.getStringExtra("userName");
        String password = receivedIntent.getStringExtra("password");

        Toast.makeText(this, "아이디 : " + userName + "\n비밀번호 : " +
                password, Toast.LENGTH_LONG).show();

        Button backButton = findViewById(R.id.backButton);
        Button menu01button = findViewById(R.id.menu01Button);
        Button menu02button = findViewById(R.id.menu02Button);
        Button menu03button = findViewById(R.id.menu03Button);

        backButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent resultIntent = new Intent();
                resultIntent.putExtra("message", "result message is OK!");

                setResult(RESULT_OK, resultIntent);
                finish();
            }
        });

        menu01button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(getApplicationContext(), CustomerActivity.class);
                intent.putExtra("titleMsg", "고객관리 화면");
                startActivityForResult(intent, REQUEST_CODE_CUSTOMER);
            }
        });

        menu02button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(getApplicationContext(), MoneyActivity.class);
                intent.putExtra("titleMsg", "매출관리 화면");
                startActivityForResult(intent, REQUEST_CODE_MONEY);
            }
        });

        menu03button.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(getApplicationContext(), ItemActivity.class);
                intent.putExtra("titleMsg", "상품관리 화면");
                startActivityForResult(intent, REQUEST_CODE_ITEM);
            }
        });
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, @Nullable Intent intent) {
        super.onActivityResult(requestCode, resultCode, intent);

        if (intent != null) {
            if (requestCode == REQUEST_CODE_CUSTOMER) {
                String message = intent.getStringExtra("message");

                if (message != null) {
                    Toast toast = Toast.makeText(getBaseContext(), "고객관리 응답, result code : " + resultCode + ", message : " + message, Toast.LENGTH_LONG);
                    toast.show();
                }
            }

            else if (requestCode == REQUEST_CODE_MONEY) {
                String message = intent.getStringExtra("message");

                if (message != null) {
                    Toast toast = Toast.makeText(getBaseContext(), "매출관리 응답, result code : " + resultCode + ", message : " + message, Toast.LENGTH_LONG);
                    toast.show();
                }
            }

            else if (requestCode == REQUEST_CODE_ITEM) {
                String message = intent.getStringExtra("message");

                if (message != null) {
                    Toast toast = Toast.makeText(getBaseContext(), "상품관리 응답, result code : " + resultCode + ", message : " + message, Toast.LENGTH_LONG);
                    toast.show();
                }
            }
        }
    }
}
