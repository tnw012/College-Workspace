package theden.com.chp4_carwash_tw;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.RadioButton;
import android.widget.TextView;
import android.widget.Toast;

import java.text.DecimalFormat;

public class MainActivity extends AppCompatActivity {
    final double EXT_DISCOUNT_PRICE = 8.99;
    final double EXT_REGULAR_PRICE  = 10.99;
    final double INT_DISCOUNT_PRICE = 12.99;
    final double INT_REGULAR_PRICE  = 15.99;

    double totalCost  = 0.0;
    int washesEntered = 0;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        getSupportActionBar().setDisplayShowHomeEnabled(true);
        getSupportActionBar().setLogo(R.mipmap.car_launcher);
        getSupportActionBar().setDisplayUseLogoEnabled(true);
        final EditText washes = (EditText) findViewById((R.id.txtCarWash));
        final RadioButton exterior = (RadioButton) findViewById(R.id.radExterior);
        final RadioButton interior = (RadioButton) findViewById(R.id.radInterior);
        final TextView costOutput = (TextView) findViewById(R.id.txtTotal);
        Button calculate = (Button) findViewById(R.id.btnCalc);

        calculate.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                washesEntered = Integer.parseInt(washes.getText().toString());
                DecimalFormat tenth = new DecimalFormat("#.#");
                if (interior.isChecked()){
                    if (washesEntered >= 12){
                        totalCost = INT_DISCOUNT_PRICE * washesEntered;
                        costOutput.setText("$" + totalCost + " for " + washesEntered + " washes");
                    }
                    else{
                        totalCost = INT_REGULAR_PRICE * washesEntered;
                        costOutput.setText("$" + totalCost + " for " + washesEntered + " washes");
                        Toast.makeText(MainActivity.this,
                                "Must have 12 or more washes to get the discount",
                                 Toast.LENGTH_LONG).show();
                    }
                }
                else
                {
                    if (washesEntered >= 12){
                        totalCost = EXT_DISCOUNT_PRICE * washesEntered;
                        costOutput.setText("$" + totalCost + " for " + washesEntered + " washes");
                    }
                    else{
                        totalCost = EXT_REGULAR_PRICE * washesEntered;
                        costOutput.setText("$" + totalCost + " for " + washesEntered + " washes");
                        Toast.makeText(MainActivity.this,
                                "Must have 12 or more washes to get the discount",
                                Toast.LENGTH_LONG).show();
                    }
                }

            }
        });
    }
}