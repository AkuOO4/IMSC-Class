
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import javax.swing.JOptionPane;

/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */

/**
 *
 * @author Akshay
 */
public class start_page extends javax.swing.JFrame {

    /**
     * Creates new form start_page
     */
    public start_page() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        username = new javax.swing.JTextField();
        password = new javax.swing.JPasswordField();
        jLabel1 = new javax.swing.JLabel();
        costomer_page_button = new javax.swing.JButton();
        admin_page_button = new javax.swing.JButton();
        jLabel2 = new javax.swing.JLabel();
        admin_page_button1 = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        username.setText("USERNAME");
        username.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                usernameActionPerformed(evt);
            }
        });

        password.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                passwordActionPerformed(evt);
            }
        });

        jLabel1.setText("password");

        costomer_page_button.setText("COSTUMER LOGIN");
        costomer_page_button.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                costomer_page_buttonActionPerformed(evt);
            }
        });

        admin_page_button.setText("ADMIN LOGIN");
        admin_page_button.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                admin_page_buttonActionPerformed(evt);
            }
        });

        jLabel2.setFont(new java.awt.Font("Arial Black", 0, 36)); // NOI18N
        jLabel2.setText("LOGIN PAGE");

        admin_page_button1.setText("SIGN UP");
        admin_page_button1.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                admin_page_button1ActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(75, 75, 75)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(43, 43, 43)
                        .addComponent(jLabel2, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(layout.createSequentialGroup()
                                .addGap(85, 85, 85)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                        .addComponent(username)
                                        .addComponent(password, javax.swing.GroupLayout.PREFERRED_SIZE, 154, javax.swing.GroupLayout.PREFERRED_SIZE))
                                    .addComponent(jLabel1, javax.swing.GroupLayout.PREFERRED_SIZE, 60, javax.swing.GroupLayout.PREFERRED_SIZE)))
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(costomer_page_button)
                                .addGap(69, 69, 69)
                                .addComponent(admin_page_button, javax.swing.GroupLayout.PREFERRED_SIZE, 128, javax.swing.GroupLayout.PREFERRED_SIZE)))
                        .addGap(0, 69, Short.MAX_VALUE)))
                .addContainerGap())
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addComponent(admin_page_button1, javax.swing.GroupLayout.PREFERRED_SIZE, 93, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(188, 188, 188))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(61, 61, 61)
                .addComponent(jLabel2, javax.swing.GroupLayout.PREFERRED_SIZE, 38, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(53, 53, 53)
                .addComponent(username, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(23, 23, 23)
                .addComponent(jLabel1)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addComponent(password, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addGap(29, 29, 29)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(costomer_page_button)
                    .addComponent(admin_page_button))
                .addGap(29, 29, 29)
                .addComponent(admin_page_button1)
                .addContainerGap(41, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void usernameActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_usernameActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_usernameActionPerformed

    private void passwordActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_passwordActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_passwordActionPerformed

    private void costomer_page_buttonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_costomer_page_buttonActionPerformed
        // TODO add your handling code here:
        String Username= username.getText();
        String Password= password.getText();
    
    
        
    try{
      Class.forName("com.mysql.cj.jdbc.Driver");
      Connection conn=DriverManager.getConnection("jdbc:mysql://localhost:3307/sports_complex","root","root");
      Statement stmt=conn.createStatement();
      
      String q1="select password from costumer_details where name='"+Username+"'";
      ResultSet rs1=stmt.executeQuery(q1);
      rs1.next();
      String confirm_password=rs1.getString(1);
      
      if (password.equals(confirm_password)){
      
      
      
      
     // String q2="insert into costumer_details values ('"+id+"','"+Username+"','"+password+"');";
      //System.out.print(q1);
      
      //String[] data;
     // stmt.executeUpdate(q2);
      //JOptionPane.showMessageDialog(null, "Account succesfully created","succes", JOptionPane.OK_OPTION);
      
      start_page jf1 =new start_page();
      jf1.show();
      dispose();
      }
          else{
        JOptionPane.showMessageDialog(null, "Password and confirmation password are different.","ERROR", JOptionPane.ERROR_MESSAGE);
    }
        costumer_page_1 jf1= new costumer_page_1();
        jf1.show();
        dispose();
      
      //ResultSet rs2=stmt.executeUpdate(q2);
      //System.out.println("123");
      
      //removeAllItems();
      //int count=0;
     
      //return data;
    } 
    catch (Exception ex) {
      System.out.print("\n--ERROR--\n");
      System.out.print(ex.getMessage());
      JOptionPane.showMessageDialog(null, ex.getMessage(),"ERROR", JOptionPane.ERROR_MESSAGE);

    }
        

    }//GEN-LAST:event_costomer_page_buttonActionPerformed

    private void admin_page_buttonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_admin_page_buttonActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_admin_page_buttonActionPerformed

    private void admin_page_button1ActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_admin_page_button1ActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_admin_page_button1ActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(start_page.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(start_page.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(start_page.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(start_page.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new start_page().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton admin_page_button;
    private javax.swing.JButton admin_page_button1;
    private javax.swing.JButton costomer_page_button;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JPasswordField password;
    private javax.swing.JTextField username;
    // End of variables declaration//GEN-END:variables
}
