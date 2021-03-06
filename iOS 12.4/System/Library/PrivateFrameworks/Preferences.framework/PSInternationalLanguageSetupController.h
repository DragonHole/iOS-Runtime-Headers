/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSetupController.h>

@class PSLanguageSelector;

@interface PSInternationalLanguageSetupController : PSSetupController {

	PSLanguageSelector* _languageSelector;

}

@property (nonatomic,retain) PSLanguageSelector * languageSelector;              //@synthesize languageSelector=_languageSelector - In the implementation block
-(void)setupController;
-(PSLanguageSelector *)languageSelector;
-(void)setLanguage:(id)arg1 specifier:(id)arg2 ;
-(void)setLanguageSelector:(PSLanguageSelector *)arg1 ;
-(void)commit;
@end

