jQuery(document).ready(function($) {

/** Contact form Name*/
if($('#edit-submitted-name').val() == ""){
          $('#edit-submitted-name').val("Name:");
          $('#edit-submitted-name').focus(function() {
               if (this.value == "Name:"){
                    this.value = '';
               }
               if(this.value != this.defaultValue){
                    this.select();
               }
          });
     };
     $('#edit-submitted-name').blur(function() {
          if (this.value == ''){
               this.value = "Name:";
          }
     });
     
/** Contact form Email*/
if($('#edit-submitted-email').val() == ""){
          $('#edit-submitted-email').val("Email:");
          $('#edit-submitted-email').focus(function() {
               if (this.value == "Email:"){
                    this.value = '';
               }
               if(this.value != this.defaultValue){
                    this.select();
               }
          });
     };
     $('#edit-submitted-email').blur(function() {
          if (this.value == ''){
               this.value = "Email:";
          }
     });
     
/** Contact form Phone*/
if($('#edit-submitted-phone').val() == ""){
          $('#edit-submitted-phone').val("Phone (optional):");
          $('#edit-submitted-phone').focus(function() {
               if (this.value == "Phone (optional):"){
                    this.value = '';
               }
               if(this.value != this.defaultValue){
                    this.select();
               }
          });
     };
     $('#edit-submitted-phone').blur(function() {
          if (this.value == ''){
               this.value = "Phone (optional):";
          }
     });
     
/** Contact form Message*/
if($('#edit-submitted-message').val() == ""){
          $('#edit-submitted-message').val("Message:");
          $('#edit-submitted-message').focus(function() {
               if (this.value == "Message:"){
                    this.value = '';
               }
               if(this.value != this.defaultValue){
                    this.select();
               }
          });
     };
     $('#edit-submitted-message').blur(function() {
          if (this.value == ''){
               this.value = "Message:";
          }
     });

});