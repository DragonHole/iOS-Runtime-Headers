/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString;

@interface SUScriptTelephony : SUScriptObject

@property (getter=isCellularRoaming,nonatomic,readonly) id cellularRoaming; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSString * mobileCountryCode; 
@property (nonatomic,readonly) NSString * mobileNetworkCode; 
@property (nonatomic,readonly) NSString * operatorName; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (nonatomic,readonly) NSString * providerName; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(NSString *)countryCode;
-(id)attributeKeys;
-(NSString *)providerName;
-(void)_handleOperatorNameChangedNotification:(id)arg1 ;
-(void)_handlePhoneNumberChangedNotification:(id)arg1 ;
-(void)_handleRegistrationChangedNotification:(id)arg1 ;
-(BOOL)_checkIfIsAllowed;
-(id)sendSMSWithBodyText:(id)arg1 digits:(id)arg2 countryCode:(id)arg3 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)operatorName;
-(id)formattedPhoneNumber:(id)arg1 ;
-(id)isCellularRoaming;
-(NSString *)mobileCountryCode;
-(NSString *)mobileNetworkCode;
-(id)init;
-(void)dealloc;
-(NSString *)phoneNumber;
@end

