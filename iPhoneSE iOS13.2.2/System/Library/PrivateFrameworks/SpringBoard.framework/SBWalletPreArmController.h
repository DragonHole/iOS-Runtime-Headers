/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIBiometricResource;
@class PKPassLibrary, NSHashTable, NSMutableDictionary;

@interface SBWalletPreArmController : NSObject {

	PKPassLibrary* _passLibrary;
	id<SBUIBiometricResource> _biometricResource;
	long long _triggerSource;
	NSHashTable* _disabledPreArmAssertions;
	NSMutableDictionary* _disabledPreArmAssertionsByType;

}

@property (getter=isPreArmAvailable,nonatomic,readonly) BOOL preArmAvailable; 
@property (getter=isPreArmAllowed,nonatomic,readonly) BOOL preArmAllowed; 
@property (getter=isPreArmTriggeredByLockButtonDoublePress,nonatomic,readonly) BOOL preArmTriggeredByLockButtonDoublePress; 
@property (getter=isPreArmTriggeredByHomeButtonDoublePress,nonatomic,readonly) BOOL preArmTriggeredByHomeButtonDoublePress; 
@property (getter=isPreArmSuppressed,nonatomic,readonly) BOOL preArmSuppressed; 
@property (getter=isPreArmExternallySuppressed,nonatomic,readonly) BOOL preArmExternallySuppressed; 
+(id)sharedInstance;
-(id)init;
-(BOOL)isPreArmTriggeredByLockButtonDoublePress;
-(BOOL)isPreArmAllowed;
-(void)presentPreArmInterfaceForTriggerSource:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isPreArmAvailable;
-(BOOL)isPreArmExternallySuppressed;
-(id)acquireSuppressPreArmAssertionOfType:(long long)arg1 forReason:(id)arg2 ;
-(id)acquireSuppressPreArmAssertionForReason:(id)arg1 ;
-(BOOL)isPreArmSuppressed;
-(BOOL)isPreArmTriggeredByHomeButtonDoublePress;
-(id)initWithPassLibrary:(id)arg1 biometricResource:(id)arg2 ;
-(long long)_computeTriggerSource;
-(long long)_contactlessInterfaceSourceForTriggerSource:(long long)arg1 ;
@end

