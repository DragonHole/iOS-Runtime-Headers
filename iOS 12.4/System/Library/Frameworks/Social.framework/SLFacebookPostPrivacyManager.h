/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, NSArray, SLFacebookPostPrivacySetting;

@interface SLFacebookPostPrivacyManager : NSObject {

	ACAccount* _account;
	NSArray* _privacySettings;

}

@property (retain) SLFacebookPostPrivacySetting * privacySetting; 
-(id)initWithAccount:(id)arg1 ;
-(id)_userDefaultsDict;
-(id)defaultPrivacySetting;
-(id)_privacySettingsFromPrivacyOptionDictionaries:(id)arg1 ;
-(void)_setPrivacySettings:(id)arg1 ;
-(void)_handlePrivacySettingsUpdateResponseWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 handler:(/*^block*/id)arg4 ;
-(SLFacebookPostPrivacySetting *)privacySetting;
-(void)setPrivacySetting:(SLFacebookPostPrivacySetting *)arg1 ;
-(void)updatePrivacySettingsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)privacySettings;
@end

