package com.example.calendar;

import static com.example.calendar.R.*;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.GridLayout;
import android.widget.TextView;
import androidx.appcompat.app.AppCompatActivity;
import java.util.Calendar;

public class MainActivity extends AppCompatActivity {
    private GridLayout calendarGrid;
    private TextView monthName;
    private Calendar calendar;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        calendarGrid = findViewById(R.id.calendar_grid);
        monthName = findViewById(R.id.month_name);
        Button previousButton = findViewById(R.id.previous_button);
        Button nextButton = findViewById(R.id.next_button);

        calendar = Calendar.getInstance();
        updateCalendar();
        previousButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                calendar.add(Calendar.MONTH, -1);
                updateCalendar();
            }
        });
        nextButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                calendar.add(Calendar.MONTH, 1);
                updateCalendar();
            }
        });
    }
    private void updateCalendar() {
        calendarGrid.removeAllViews();
        int daysInMonth = calendar.getActualMaximum(Calendar.DAY_OF_MONTH);
        int firstDayOfWeek = calendar.get(Calendar.DAY_OF_WEEK); // 1=Sun, 2=Mon, ..., 7=Sat
        monthName.setText(calendar.getDisplayName(Calendar.MONTH, Calendar.LONG, getResources().getConfiguration().locale) + " " + calendar.get(Calendar.YEAR));

        String[] dayNames = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
        for (String day : dayNames) {
            TextView dayHeader = new TextView(this);
            dayHeader.setText(day);
            dayHeader.setLayoutParams(new GridLayout.LayoutParams());
            dayHeader.setTextAlignment(View.TEXT_ALIGNMENT_CENTER);
            calendarGrid.addView(dayHeader);
        }
        for (int i = 1; i < firstDayOfWeek; i++) {
            TextView emptyTextView = new TextView(this);
            emptyTextView.setLayoutParams(new GridLayout.LayoutParams());
            calendarGrid.addView(emptyTextView);
        }
        for (int i = 1; i <= daysInMonth; i++) {
            TextView dayTextView = new TextView(this);
            dayTextView.setText(String.valueOf(i));
            dayTextView.setLayoutParams(new GridLayout.LayoutParams());
            dayTextView.setTextAlignment(View.TEXT_ALIGNMENT_CENTER);
            dayTextView.setPadding(16, 16, 16, 16);

            int dayOfWeek = (firstDayOfWeek + i - 2) % 7;
            if (dayOfWeek == 0 || dayOfWeek == 6) {
                dayTextView.setBackgroundColor(getResources().getColor(R.color.weekend_color));
            }
            calendarGrid.addView(dayTextView);
        }
    }
}

