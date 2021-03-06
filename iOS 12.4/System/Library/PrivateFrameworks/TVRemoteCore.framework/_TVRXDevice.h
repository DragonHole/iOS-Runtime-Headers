/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _TVRXDeviceDelegate, _TVRCDeviceImpl;
@class NSString, NSDictionary, NSSet, _TVRXVoiceRecorder, _TVRXKeyboardController;

@interface _TVRXDevice : NSObject {

	id<_TVRXDeviceDelegate> _delegate;
	NSString* _identifier;
	NSDictionary* _alternateIdentifiers;
	NSString* _name;
	NSString* _model;
	long long _connectionState;
	NSSet* _supportedButtons;
	id<_TVRCDeviceImpl> _impl;

}

@property (nonatomic,copy) NSString * name;                                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * alternateIdentifiers;                                   //@synthesize alternateIdentifiers=_alternateIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * model;                                                      //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSSet * supportedButtons;                                              //@synthesize supportedButtons=_supportedButtons - In the implementation block
@property (setter=_setImpl:,getter=_impl,nonatomic,retain) id<_TVRCDeviceImpl> impl;              //@synthesize impl=_impl - In the implementation block
@property (assign,nonatomic,__weak) id<_TVRXDeviceDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL supportsTouchEvents; 
@property (nonatomic,readonly) long long connectionState;                                         //@synthesize connectionState=_connectionState - In the implementation block
@property (nonatomic,readonly) _TVRXVoiceRecorder * voiceRecorder; 
@property (nonatomic,readonly) _TVRXKeyboardController * keyboardController; 
@property (nonatomic,readonly) unsigned long long pairingCapability; 
-(id)allIdentifiers;
-(void)sendButtonEvent:(id)arg1 ;
-(void)sendGameControllerEvent:(id)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(NSSet *)supportedButtons;
-(long long)connectionState;
-(NSDictionary *)alternateIdentifiers;
-(unsigned long long)pairingCapability;
-(void)setAlternateIdentifiers:(NSDictionary *)arg1 ;
-(void)setSupportedButtons:(NSSet *)arg1 ;
-(void)_connectionAttemptSucceeded;
-(void)_disconnected:(long long)arg1 error:(id)arg2 ;
-(void)_setDeviceName:(id)arg1 ;
-(void)_encounteredAuthenticationChallenge:(id)arg1 ;
-(void)_setSupportedButtons:(id)arg1 ;
-(void)_applyButtonEventSideEffects:(id)arg1 ;
-(BOOL)_authenticationIsSupported;
-(void)_setActiveEndpoint;
-(void)_setIdentifier:(id)arg1 alternateIdentifiers:(id)arg2 name:(id)arg3 model:(id)arg4 supportedButtons:(id)arg5 ;
-(BOOL)supportsTouchEvents;
-(void)sendTouchEvent:(id)arg1 ;
-(BOOL)containsIdentifier:(id)arg1 ;
-(_TVRXVoiceRecorder *)voiceRecorder;
-(NSString *)identifier;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)setDelegate:(id<_TVRXDeviceDelegate>)arg1 ;
-(id<_TVRXDeviceDelegate>)delegate;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)_impl;
-(void)_setImpl:(id)arg1 ;
-(void)connect;
-(void)disconnect;
-(id)_init;
-(NSString *)model;
-(_TVRXKeyboardController *)keyboardController;
@end

