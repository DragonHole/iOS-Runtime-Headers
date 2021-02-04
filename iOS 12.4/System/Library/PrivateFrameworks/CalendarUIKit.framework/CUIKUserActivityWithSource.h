/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSString;

@interface CUIKUserActivityWithSource : CUIKUserActivity {

	long long _sourceType;
	NSString* _sourceHost;
	NSString* _sourceOwner;

}
-(BOOL)_requiresHostAndOwner;
-(BOOL)_supportsConsistentExternalIDAcrossDevices:(long long)arg1 ;
-(id)initWithSource:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)isMatchForSource:(id)arg1 ;
-(BOOL)_supportsConsistentExternalIDAcrossDevices;
-(BOOL)_isLocalSource;
-(id)dictionary;
-(id)initWithDictionary:(id)arg1 ;
@end
