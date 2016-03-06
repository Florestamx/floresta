package com.example.floresta.florestaapp;

import android.content.Intent;
import android.support.design.widget.NavigationView;
import android.support.v4.view.GravityCompat;
import android.support.v4.widget.DrawerLayout;
import android.support.v7.app.ActionBarDrawerToggle;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.support.v7.widget.Toolbar;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import android.widget.Toast;

public class adoptarActivity extends AppCompatActivity  {

    private ListView list;
    private String[] sistemas = {"Jardin interior banqueta", "arbol solitario Eucalipto", "Rosas Hermosas",
            "Jardin de la Esquina", "Jardin interior Banqueta",
            "Arbusto de la banquetas", "Jardin interior banqueta", "Rosas Calle", "jardin"};

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_adoptar);

        list = (ListView)findViewById(R.id.listView);

        ArrayAdapter<String> adaptador = new ArrayAdapter<String>(this, android.R.layout.simple_list_item_1, sistemas);

        list.setAdapter(adaptador);

        list.setOnItemClickListener(new AdapterView.OnItemClickListener() {

            @Override
            public void onItemClick(AdapterView<?> arg0, View arg1, int position, long id) {
                // TODO Auto-generated method stub
                Toast.makeText(getApplicationContext(), "Ha pulsado el item " + position, Toast.LENGTH_SHORT).show();

            }

        });
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
