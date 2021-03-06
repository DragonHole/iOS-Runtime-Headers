/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PreferencesUI/PreferencesUI-Structs.h>
@class UIImageView, NSString;

@interface LocationUsageMixin : NSObject {

	int _usage;
	unsigned long long _authLevel;
	UIImageView* _usageIndicator;
	NSString* _authLevelString;

}

@property (assign,nonatomic) int usage;                                   //@synthesize usage=_usage - In the implementation block
@property (assign,nonatomic) unsigned long long authLevel;                //@synthesize authLevel=_authLevel - In the implementation block
@property (nonatomic,readonly) UIImageView * usageIndicator;              //@synthesize usageIndicator=_usageIndicator - In the implementation block
@property (nonatomic,readonly) NSString * authLevelString;                //@synthesize authLevelString=_authLevelString - In the implementation block
-(CGSize)usageIndicatorSize;
-(id)iconNameForUsage:(int)arg1 ;
-(id)_authLevelForMask:(unsigned long long)arg1 ;
-(void)setAuthLevel:(unsigned long long)arg1 ;
-(CGSize)_authLevelLabelSize:(unsigned long long)arg1 ;
-(unsigned long long)authLevel;
-(UIImageView *)usageIndicator;
-(NSString *)authLevelString;
-(id)init;
-(int)usage;
-(void)setUsage:(int)arg1 ;
@end

