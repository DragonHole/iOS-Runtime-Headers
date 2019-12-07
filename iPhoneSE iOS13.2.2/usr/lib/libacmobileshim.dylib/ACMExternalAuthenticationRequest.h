/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol ACMExternalAuthenticationRequest <ACMBaseAuthenticationRequest>
@property (assign) BOOL useAlertView; 
@property (assign) BOOL userNameFieldEditable; 
@property (retain) NSString * alertViewPrompt; 
@property (assign) BOOL automaticallyCancelWhenSwitchingToBackground; 
@property (assign) BOOL canUseTouchID; 
@required
-(BOOL)useAlertView;
-(BOOL)automaticallyCancelWhenSwitchingToBackground;
-(void)setUserNameFieldEditable:(BOOL)arg1;
-(void)setUseAlertView:(BOOL)arg1;
-(BOOL)userNameFieldEditable;
-(NSString *)alertViewPrompt;
-(void)setAlertViewPrompt:(id)arg1;
-(void)setAutomaticallyCancelWhenSwitchingToBackground:(BOOL)arg1;
-(BOOL)canUseTouchID;
-(void)setCanUseTouchID:(BOOL)arg1;

@end
