package com.example.floresta.florestaapp;

import android.content.Intent;
import android.support.v4.view.GravityCompat;
import android.support.v4.widget.DrawerLayout;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;

public class altaArbolActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_alta_arbol);
    }
    @Override
    public void onBackPressed() {
        DrawerLayout drawer = (DrawerLayout) findViewById(R.id.drawer_layout);
        if (drawer.isDrawerOpen(GravityCompat.START)) {
            drawer.closeDrawer(GravityCompat.START);
        } else {
            super.onBackPressed();
        }
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }

    public boolean onNavigationItemSelected(MenuItem item) {
        // Handle navigation view item clicks here.
        int id = item.getItemId();

        if (id == R.id.nav_Login) {
            Intent login = new Intent(this, loginActivity.class);
            startActivity(login);

        } else if (id == R.id.nav_altaArbol) {
            Intent alta = new Intent(this, altaArbolActivity.class);
            startActivity(alta);

        } else if (id == R.id.nav_Adoptar) {
            Intent adoptar = new Intent(this, adoptarActivity.class);
            startActivity(adoptar);

        } else if (id == R.id.nav_reportar) {
            Intent login = new Intent(this, reportarActivity.class);
            startActivity(login);

        } else if (id == R.id.nav_ckeckin) {
            Intent check = new Intent(this, checkActivity.class);
            startActivity(check);

        } else if (id == R.id.nav_zonaVerde) {
            Intent zonaVerde = new Intent(this, zonaVerdeActivity.class);
            startActivity(zonaVerde);

        } else if (id == R.id.nav_mapa) {
            Intent mapa = new Intent(this, mapaActivity.class);
            startActivity(mapa);

        } else if (id == R.id.nav_share) {

        } else if (id == R.id.nav_send) {

        }

        DrawerLayout drawer = (DrawerLayout) findViewById(R.id.drawer_layout);
        drawer.closeDrawer(GravityCompat.START);
        return true;
    }
}
