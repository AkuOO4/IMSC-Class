/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package sample.data.db;

import com.mysql.jdbc.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;

/**
 *
 * @author Personal
 */
public class ApplicationMainUI extends javax.swing.JFrame {
   Connection mDbConneciton = null;
    /**
     * Creates new form ApplicationMainUI
     */
    public ApplicationMainUI() {
        mDbConneciton = createDBConnection();
        initComponents();
        home_panel.setVisible(false);
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        login_panel = new javax.swing.JPanel();
        txt_login_username = new javax.swing.JTextField();
        txt_login_password = new javax.swing.JTextField();
        bt_login = new javax.swing.JButton();
        lbl_login_message = new javax.swing.JLabel();
        signup_panel = new javax.swing.JPanel();
        txt_username = new javax.swing.JTextField();
        txt_password = new javax.swing.JTextField();
        bt_checkAvailability = new javax.swing.JButton();
        txt_displayname = new javax.swing.JTextField();
        bt_SignUp = new javax.swing.JButton();
        lbl_meesages_signup = new javax.swing.JLabel();
        home_panel = new javax.swing.JPanel();
        lbl_welcome = new javax.swing.JLabel();
        bt_Switch = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        login_panel.setBackground(new java.awt.Color(102, 102, 255));

        bt_login.setText("Login");
        bt_login.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                bt_loginMouseClicked(evt);
            }
        });

        lbl_login_message.setText("jLabel1");

        javax.swing.GroupLayout login_panelLayout = new javax.swing.GroupLayout(login_panel);
        login_panel.setLayout(login_panelLayout);
        login_panelLayout.setHorizontalGroup(
            login_panelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(login_panelLayout.createSequentialGroup()
                .addGroup(login_panelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(login_panelLayout.createSequentialGroup()
                        .addGap(27, 27, 27)
                        .addGroup(login_panelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addComponent(bt_login)
                            .addGroup(login_panelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                .addComponent(txt_login_username, javax.swing.GroupLayout.DEFAULT_SIZE, 136, Short.MAX_VALUE)
                                .addComponent(txt_login_password))))
                    .addGroup(login_panelLayout.createSequentialGroup()
                        .addGap(46, 46, 46)
                        .addComponent(lbl_login_message, javax.swing.GroupLayout.PREFERRED_SIZE, 146, javax.swing.GroupLayout.PREFERRED_SIZE)))
                .addContainerGap(17, Short.MAX_VALUE))
        );
        login_panelLayout.setVerticalGroup(
            login_panelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(login_panelLayout.createSequentialGroup()
                .addGap(14, 14, 14)
                .addComponent(lbl_login_message)
                .addGap(18, 18, 18)
                .addComponent(txt_login_username, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(txt_login_password, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(bt_login)
                .addContainerGap(39, Short.MAX_VALUE))
        );

        signup_panel.setBackground(new java.awt.Color(255, 153, 255));

        txt_username.setToolTipText("Enter user name");

        bt_checkAvailability.setText("Check Availability");
        bt_checkAvailability.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                bt_checkAvailabilityMouseClicked(evt);
            }
        });

        bt_SignUp.setText("SignUp");
        bt_SignUp.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                bt_SignUpMouseClicked(evt);
            }
        });

        javax.swing.GroupLayout signup_panelLayout = new javax.swing.GroupLayout(signup_panel);
        signup_panel.setLayout(signup_panelLayout);
        signup_panelLayout.setHorizontalGroup(
            signup_panelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(signup_panelLayout.createSequentialGroup()
                .addGap(50, 50, 50)
                .addGroup(signup_panelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(bt_SignUp)
                    .addGroup(signup_panelLayout.createSequentialGroup()
                        .addGroup(signup_panelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                            .addComponent(lbl_meesages_signup, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(txt_displayname, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 213, Short.MAX_VALUE)
                            .addComponent(txt_username, javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(txt_password, javax.swing.GroupLayout.Alignment.LEADING))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(bt_checkAvailability)))
                .addContainerGap(9, Short.MAX_VALUE))
        );
        signup_panelLayout.setVerticalGroup(
            signup_panelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(signup_panelLayout.createSequentialGroup()
                .addContainerGap()
                .addComponent(lbl_meesages_signup, javax.swing.GroupLayout.PREFERRED_SIZE, 22, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(signup_panelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(txt_username, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(bt_checkAvailability))
                .addGap(18, 18, 18)
                .addComponent(txt_password, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(18, 18, 18)
                .addComponent(txt_displayname, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(38, 38, 38)
                .addComponent(bt_SignUp)
                .addContainerGap(130, Short.MAX_VALUE))
        );

        home_panel.setBackground(new java.awt.Color(0, 153, 153));

        lbl_welcome.setFont(new java.awt.Font("Segoe UI", 0, 24)); // NOI18N
        lbl_welcome.setText("jLabel1");

        javax.swing.GroupLayout home_panelLayout = new javax.swing.GroupLayout(home_panel);
        home_panel.setLayout(home_panelLayout);
        home_panelLayout.setHorizontalGroup(
            home_panelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, home_panelLayout.createSequentialGroup()
                .addContainerGap(22, Short.MAX_VALUE)
                .addComponent(lbl_welcome, javax.swing.GroupLayout.PREFERRED_SIZE, 480, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(22, 22, 22))
        );
        home_panelLayout.setVerticalGroup(
            home_panelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(home_panelLayout.createSequentialGroup()
                .addGap(27, 27, 27)
                .addComponent(lbl_welcome)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );

        bt_Switch.setText("Switch");
        bt_Switch.addMouseListener(new java.awt.event.MouseAdapter() {
            public void mouseClicked(java.awt.event.MouseEvent evt) {
                bt_SwitchMouseClicked(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(65, 65, 65)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(login_panel, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(222, 222, 222))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(bt_Switch)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addComponent(home_panel, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)))
                .addComponent(signup_panel, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(35, 35, 35)
                .addComponent(login_panel, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(home_panel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                        .addGap(41, 41, 41))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(51, 51, 51)
                        .addComponent(bt_Switch)
                        .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))))
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addContainerGap(49, Short.MAX_VALUE)
                .addComponent(signup_panel, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(41, 41, 41))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void bt_SwitchMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_bt_SwitchMouseClicked
      
    }//GEN-LAST:event_bt_SwitchMouseClicked

    private void bt_SignUpMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_bt_SignUpMouseClicked
        String username = txt_username.getText().toString();
        String password = txt_password.getText().toString();
        String displayname = txt_displayname.getText().toString();
        
        
        
        if(username.isEmpty()){
            lbl_meesages_signup.setText("Please enter a valid username");
            return;
        }
        if(password.isEmpty()){
             lbl_meesages_signup.setText("Please enter a valid password");
            return;
        }
         if(displayname.isEmpty()){
             lbl_meesages_signup.setText("Please enter a valid displayname");
            return;
        }
         String value = signUpUser(username,password,displayname);
         lbl_meesages_signup.setText(value);
         
    }//GEN-LAST:event_bt_SignUpMouseClicked

    private void bt_checkAvailabilityMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_bt_checkAvailabilityMouseClicked
        String username = txt_username.getText().toString();
        if(username.isEmpty()){
            lbl_meesages_signup.setText("Please enter a valid username");
            return;
        }
        if(isUsernameAvailable(username)){
            lbl_meesages_signup.setText("User already exists.");
        }else{
            lbl_meesages_signup.setText("You can proceed with password and displayname.");
        }
        
        
    }//GEN-LAST:event_bt_checkAvailabilityMouseClicked

    private void bt_loginMouseClicked(java.awt.event.MouseEvent evt) {//GEN-FIRST:event_bt_loginMouseClicked
         String username = txt_login_username.getText().toString();
         String password = txt_login_password.getText().toString();
          if(username.isEmpty()){
            lbl_login_message.setText("Please enter a valid username");
            return;
        }
        if(password.isEmpty()){
             lbl_login_message.setText("Please enter a valid password");
            return;
        }
        String displayname = login(username, password);
        if(displayname.isEmpty()){
            lbl_login_message.setText("failed to login");
        }else{
             lbl_welcome .setText(displayname);
             login_panel.setVisible(false);
             signup_panel.setVisible(false);
             home_panel.setVisible(true);
        }
      
    }//GEN-LAST:event_bt_loginMouseClicked
 
    
    /**
     * try to login with the user
     * @param username
     * @param password
     * @return 
     */
    private String login(String username,String password){
        if(mDbConneciton != null){
            try{
                Statement statement = mDbConneciton.createStatement();
                ResultSet resultSet = statement.executeQuery("select * from user_table where username='"+username+"' AND password='"+password+"'");
                while(resultSet.next())  {
                      String displayName = resultSet.getString(3);
                      return displayName;
                }
            }catch(Exception e){
                return "";
            }
            
          
        }
        return "";
    }
    
    
    /**
     * 
     * @param username
     * @param password
     * @param displayName 
     */
    private String signUpUser(String username ,String password,String displayName){
         int result = 0;  
        if(mDbConneciton != null){
            try{
                Statement statement = mDbConneciton.createStatement();
                String query = "INSERT INTO `user_table` (`username`, `password`, `displayname`) VALUES ('"+username+"', '"+password+"', '"+displayName+"')";
                System.out.println("Executed Query : "+query);
                result = statement.executeUpdate(query);
                if(result == 1){
                    return "User created succesfully "+result;
                }
            }catch(Exception e){
               e.printStackTrace();
            }
            
    }
           return "failed to create user  "+result;
    }
    
   /**
    * 
    * @param username
    * @return 
    */
    private Boolean isUsernameAvailable(String username){
        if(mDbConneciton != null){
            try{
                Statement statement = mDbConneciton.createStatement();
                ResultSet resultSet = statement.executeQuery("select * from user_table");
                while(resultSet.next())  {
                      String usernameFromDb = resultSet.getString(1);
                      if(username.equals(usernameFromDb)){
                          return true;
                      }
                }
            }catch(Exception e){
                return false;
            }
            
           
        }
        return false;
    }
    /**
     * Create and return a db connection
     * @return 
     */
    private Connection createDBConnection(){
        Connection con = null;
         try{  
            Class.forName("com.mysql.jdbc.Driver");  
            con=(Connection) DriverManager.getConnection(  
                    "jdbc:mysql://localhost:3306/imscdb",
                    "root",
                    "");  
         }catch(Exception e ){
             
         }
         return con;
    }
    
    
    
    /**
     * @param args the command line arguments
     */
//    public static void main(String args[]) {
//        /* Set the Nimbus look and feel */
//        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
//        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
//         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
//         */
//        try {
//            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
//                if ("Nimbus".equals(info.getName())) {
//                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
//                    break;
//                }
//            }
//        } catch (ClassNotFoundException ex) {
//            java.util.logging.Logger.getLogger(ApplicationMainUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
//        } catch (InstantiationException ex) {
//            java.util.logging.Logger.getLogger(ApplicationMainUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
//        } catch (IllegalAccessException ex) {
//            java.util.logging.Logger.getLogger(ApplicationMainUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
//        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
//            java.util.logging.Logger.getLogger(ApplicationMainUI.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
//        }
//        //</editor-fold>
//
//        /* Create and display the form */
//        java.awt.EventQueue.invokeLater(new Runnable() {
//            public void run() {
//                new ApplicationMainUI().setVisible(true);
//            }
//        });
//    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton bt_SignUp;
    private javax.swing.JButton bt_Switch;
    private javax.swing.JButton bt_checkAvailability;
    private javax.swing.JButton bt_login;
    private javax.swing.JPanel home_panel;
    private javax.swing.JLabel lbl_login_message;
    private javax.swing.JLabel lbl_meesages_signup;
    private javax.swing.JLabel lbl_welcome;
    private javax.swing.JPanel login_panel;
    private javax.swing.JPanel signup_panel;
    private javax.swing.JTextField txt_displayname;
    private javax.swing.JTextField txt_login_password;
    private javax.swing.JTextField txt_login_username;
    private javax.swing.JTextField txt_password;
    private javax.swing.JTextField txt_username;
    // End of variables declaration//GEN-END:variables
}
