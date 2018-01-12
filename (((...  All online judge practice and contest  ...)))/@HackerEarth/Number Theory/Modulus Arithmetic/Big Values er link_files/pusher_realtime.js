// Global pusher instance
function get_pusher_app_key(){var a=$("#pusher-app-key").text();return a}function get_pusher_instance(){var a=$("[realtime=true]").length;if(!a)return;if(!pusher){var b=get_pusher_app_key();pusher=new Pusher(b,{encrypted:!1,authEndpoint:"/realtime/pusher/auth/",authTransport:"ajax"})}return pusher}function get_pusher_socket_id(){var a=get_pusher_instance();try{return a.connection.socket_id}catch(b){return""}}function get_pusher_channel_names(){var a=[],b=$("[id^=pusher-channel-name]");for(var c=0;c<b.length;c++){var d=$(b[c]).text();d&&a.push(d)}return a}function pusher_connection_established(){g_realtime_active=!0}function pusher_connection_destroyed(){g_realtime_active=!1}function channel_subscription_succeeded(){}function channel_subscription_error(a){}function message_received(a){if(typeof a!="object")return;update_html(a)}function update_html(msg){var msg_timestamp=msg.timestamp,html_el_id=msg.html_id,accepted_timedelta=msg.accepted_timedelta,message=msg.message,ntf_type=msg.ntf_type,insert_mode=msg.insert_mode,hyperlink=msg.hyperlink,callback=msg.callback,callback_args=msg.callback_args,locking_enabled=msg.locking,animate_enabled=msg.animate,html=message,html_el=$("#"+html_el_id),el_timestamp=html_el.attr("timestamp");typeof el_timestamp=="undefined"&&(el_timestamp=0);try{el_timestamp=parseFloat(el_timestamp),msg_timestamp=parseFloat(msg_timestamp);if(msg_timestamp<el_timestamp)return;if(accepted_timedelta!=undefined){var current_time=Date.now()/1e3;if(current_time-msg_timestamp>accepted_timedelta)return}}catch(err){return}if(html_el_id==="common-notification")html=createNotificationDiv(message,ntf_type,hyperlink),html=html_decode(html),new_notification=$("<div></div>").appendTo(html_el).append(html),new_notification.delay(1e4).fadeOut(1e3);else{html=html_decode(html);switch(insert_mode){case"append":html_el.append(html),animate_enabled&&animateUpdatedElement(html_el);break;case"insert":html_el.html(html);if(animate_enabled){var updated_el_index=html_el.children().length-1;if(updated_el_index>-1)var updated_el=html_el.children()[updated_el_index];else var updated_el=html_el;animateUpdatedElement(updated_el)}break;case"prepend":html_el.prepend(html);if(animate_enabled){var updated_el=html_el.children()[0];animateUpdatedElement(updated_el)}break;case"delete":html_el.empty();break;case"replace":html_el.replaceWith(html),animate_enabled&&animateUpdateElement(html_el);break;case"idle":}}html_el.attr("timestamp",msg_timestamp);if(insert_mode=="insert"){var scripts=html_el.find("script"),len=scripts.length;for(var i=0;i<len;++i){var script=scripts[i],scriptEl=$(script);eval(scriptEl.text())}}if(callback)try{window[callback].apply(this,callback_args)}catch(e){}}function animateUpdatedElement(a){var b=700;$(a).hide().fadeIn(b)}function createNotificationDiv(a,b,c){var d="animated-notification fadeInRight notification ";return b&&(d+="ntf-"+b),html="<div class='"+d+"' hyperlink="+c+">"+a+"</div>",html}function html_decode(a){var b=document.createElement("textarea");return b.innerHTML=a,b.value}function makeid(){var a="",b="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";for(var c=0;c<5;c++)a+=b.charAt(Math.floor(Math.random()*b.length));return a}var pusher=null,g_realtime_active=!1;$(document).ready(function(){var a=get_pusher_instance();if(!a)return;a.connection.bind("connected",pusher_connection_established),a.connection.bind("unavailable",pusher_connection_destroyed),a.connection.bind("failed",pusher_connection_destroyed),a.connection.bind("disconnected",pusher_connection_destroyed);var b=get_pusher_channel_names();for(var c=0;c<b.length;c++){var d=b[c],e=a.channel(d);if(!!e)continue;e=a.subscribe(d),e.bind("pusher:subscription_succeeded",channel_subscription_succeeded),e.bind("pusher:subscription_error",channel_subscription_error),e.bind("html_updated",message_received)}});