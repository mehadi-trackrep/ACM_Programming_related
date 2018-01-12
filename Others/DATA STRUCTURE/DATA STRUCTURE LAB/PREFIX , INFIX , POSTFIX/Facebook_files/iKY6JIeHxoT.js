/*!CK:2384494340!*//*1459902113,*/

if (self.CavalryLogger) { CavalryLogger.start_js(["1+IXQ"]); }

__d('MNRTCCallabilityStore',['MessengerDispatcher','RTCCallabilityStore'],function a(b,c,d,e,f,g){'use strict';if(c.__markCompiled)c.__markCompiled();f.exports=new (c('RTCCallabilityStore'))(c('MessengerDispatcher'));},null);
__d('MercuryRTCShareAttachment.react',['cx','fbt','Bootloader','FBRTCSupport','Image.react','React','MercuryShareAttachmentReactShape','MercuryShareAttachmentRenderLocations','MercuryViewer','MercuryParticipants','MercuryIDs','MercuryTimestamp','MNRTCCallabilityStore','SimpleXUIDialog','XUIText.react','XUIButton.react','CenteredContainer.react'],function a(b,c,d,e,f,g,h,i){'use strict';if(c.__markCompiled)c.__markCompiled();var j=c('React').PropTypes,k=c('MercuryShareAttachmentRenderLocations').CHAT,l=c('MercuryShareAttachmentRenderLocations').MESSENGER,m=c('MercuryShareAttachmentRenderLocations').WEB_INBOX,n=c('React').createClass({displayName:'MercuryRTCShareAttachment',propTypes:{attachment:c('MercuryShareAttachmentReactShape'),location:j.oneOf(c('MercuryShareAttachmentRenderLocations').getValues()),rootClassName:j.string},getInitialState:function(){return {peerName:null};},componentDidMount:function(){var o=this.props.attachment.log_message_data.caller,p=this.props.attachment.log_message_data.callee,q=o===c('MercuryViewer').getID(),r=q?p:o;c('MercuryParticipants').get(r,function(s){this.setState({peerName:s.short_name?s.short_name:s.name});}.bind(this));},render:function(){var o=this.props.attachment.log_message_data.caller,p=this.props.attachment.log_message_data.callee,q=this.props.attachment.log_message_data.answered,r=o===c('MercuryViewer').getID(),s=r?p:o,t=c('MercuryIDs').getUserIDFromParticipantID(s),u=this.state.peerName,v=c('MercuryTimestamp').getPreciseTimestamp(this.props.attachment.timestamp),w=this._generateCallMessage(q,r,u),x=this._generateCallInformation(r,v),y,z;if(this.props.location===k){y=this._generateCallActionLink(t,u,q,r);return (c('React').createElement('div',{className:"_1k2i"},c('React').createElement('div',{className:!q?"_1k2j":''},c('React').createElement(c('XUIText.react'),{weight:'bold'},w),c('React').createElement(c('XUIText.react'),{weight:'bold'},x)),c('React').createElement('hr',null),c('React').createElement(c('CenteredContainer.react'),{vertical:true,className:"_3-8x"},y)));}else if(this.props.location===l){y=this._generateCallActionLink(t,u,q,r);return (c('React').createElement('div',{className:"_55q _5i_d _52mr"},c('React').createElement('div',{className:(!q?"_1k2j":'')+(' '+"_55r")},c('React').createElement(c('XUIText.react'),{weight:'bold'},w),c('React').createElement(c('XUIText.react'),{weight:'bold'},x)),c('React').createElement(c('CenteredContainer.react'),{vertical:true,className:"_3-8w"},y)));}else if(this.props.location===m){z=this._generateCallActionButton(t,u,q,r);return (c('React').createElement('div',null,c('React').createElement('div',{className:(!q?"_1k2j":'')+(' '+"_55s")},w),c('React').createElement('div',{className:"_55t"},z)));}},_generateCallMessage:function(o,p,q){if(o){if(p){if(q===null){return i._("You called a contact.");}else return i._("You called {firstname}.",[i.param('firstname',q)]);}else if(q===null){return i._("A contact called you.");}else return i._("{firstname} called you.",[i.param('firstname',q)]);}else if(p){if(q===null){return i._("A contact missed a call from you.");}else return i._("{firstname} missed a call from you.",[i.param('firstname',q)]);}else if(q===null){return i._("You missed a call from a contact.");}else return i._("You missed a call from {firstname}.",[i.param('firstname',q)]);},_generateCallInformation:function(o,p){var q='/images/mercury/clients/messenger/admin_texts/';if(o){q+='adminTextOutgoingCall.png';}else q+='adminTextIncomingCall.png';return (c('React').createElement('div',{className:"_2phz"},c('React').createElement(c('Image.react'),{src:q,className:"_2pih"}),c('React').createElement('span',null,p)));},_generateCallActionLink:function(o,p,q,r){if(c('FBRTCSupport').isOSSupported()){return (c('React').createElement('a',{onClick:this._handleClick.bind(this,o,p)},!q&&!r?i._("Call Back"):i._("Call Again")));}else return (c('React').createElement('span',null,!q&&!r?i._("Call Back"):i._("Call Again")));},_generateCallActionButton:function(o,p,q,r){var s=!q&&!r?i._("Call Back"):i._("Call Again");return (c('React').createElement(c('XUIButton.react'),{onClick:this._handleClick.bind(this,o,p),label:s}));},_handleClick:function(o,p){c('Bootloader').loadModules(["FBRTCCore","FBRTCLogger"],function(q,r){if(q.isAvailableForWebrtcCalling(o)||c('MNRTCCallabilityStore').isCallable(o)){q.startOutgoingCall(o,r.Trigger.ADMIN_MESSAGE,false);}else c('SimpleXUIDialog').show(i._("{firstname} can't be called because they are temporarily offline.",[i.param('firstname',p)]),i._("Can't Connect Call"));});}});f.exports=n;},null);