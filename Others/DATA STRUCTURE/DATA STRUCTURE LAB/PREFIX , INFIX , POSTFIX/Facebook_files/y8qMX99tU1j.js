/*!CK:1154446215!*//*1459382628,*/

if (self.CavalryLogger) { CavalryLogger.start_js(["Y5WeP"]); }

__d('ReactComposerShareNowActionTypes',['keyMirror'],function a(b,c,d,e,f,g){if(c.__markCompiled)c.__markCompiled();f.exports=c('keyMirror')({SHOW_SHARENOW_MENU:null,SHARE_NOW:null,OPEN_MESSAGE_DIALOG:null,OPEN_SHARE_DIALOG:null,CANCEL_SHARE:null});},null);
__d('ReactComposerShareNowActions',['ReactComposerDispatcher','ReactComposerShareNowActionTypes'],function a(b,c,d,e,f,g){if(c.__markCompiled)c.__markCompiled();var h={showShareNowMenu:function(){c('ReactComposerDispatcher').dispatch({composerID:'',type:c('ReactComposerShareNowActionTypes').SHOW_SHARENOW_MENU});},clickShareNow:function(){c('ReactComposerDispatcher').dispatch({composerID:'',type:c('ReactComposerShareNowActionTypes').SHARE_NOW});},clickWritePost:function(){c('ReactComposerDispatcher').dispatch({composerID:'',type:c('ReactComposerShareNowActionTypes').OPEN_SHARE_DIALOG});},clickSendMessage:function(){c('ReactComposerDispatcher').dispatch({composerID:'',type:c('ReactComposerShareNowActionTypes').OPEN_MESSAGE_DIALOG});},cancelShare:function(i){c('ReactComposerDispatcher').dispatch({composerID:i,type:c('ReactComposerShareNowActionTypes').CANCEL_SHARE});}};f.exports=h;},null);