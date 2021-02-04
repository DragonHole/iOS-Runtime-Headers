/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMFUnfairLock, NSDictionary;

@interface HMLocalization : NSObject {

	HMFUnfairLock* _lock;
	NSDictionary* _localizedStrings;

}

@property (nonatomic,readonly) NSDictionary * localizedStrings;              //@synthesize localizedStrings=_localizedStrings - In the implementation block
+(id)sharedManager;
-(NSDictionary *)localizedStrings;
-(id)getLocalizedOrCustomString:(id)arg1 ;
-(id)getLocalizedString:(id)arg1 ;
-(void)_updateLocalizedStrings;
-(id)init;
-(void)dealloc;
@end
