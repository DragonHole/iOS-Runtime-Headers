/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SpeakTypingManager : NSObject {

	BOOL _registeredForAppNotifications;

}

@property (assign,getter=isRegisteredForAppNotifications,nonatomic) BOOL registeredForAppNotifications;              //@synthesize registeredForAppNotifications=_registeredForAppNotifications - In the implementation block
+(void)initializeMonitoring;
+(id)sharedInstance;
-(BOOL)isRegisteredForAppNotifications;
-(void)setRegisteredForAppNotifications:(BOOL)arg1 ;
-(void)_registerForLetterFeedbackAXSettingsUpdate;
-(void)updateForCurrentTypingFeedbackStatus;
-(void)_registerForPhoneticFeedbackAXSettingsUpdate;
-(void)_registerForQuickTypePredictionFeedbackAXSettingsUpdate;
-(void)updateForCurrentQuickTypeFeedbackStatus;
-(void)_registerForWordFeedbackAXSettingsUpdate;
-(void)updateForCurrentWordFeedbackStatus;
-(void)_installSpeakTypingSafeCategoriesIfNeeded;
@end

